#include "widget.h"

#include <iostream>

#include "ui_widget.h"

Widget::Widget(QWidget* parent) : QOpenGLWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);

    settings = new QSettings(this);
    loadSettings();
    frame_count = 0;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::gif_creator);
}

data_t data_data;

Widget::~Widget() { delete ui; }
void Widget::initializeGL() {
    char* first_name = "C:\\Users\\Timsan\\QT\\3dShlyap\\objects\\cube.obj";
    parser(&data_data, first_name);
    ui->label_info_v->setNum(data_data.v_count);
    ui->label_info_e->setNum(data_data.e_count);
    ui->label_info_p->setNum(data_data.p_count);
    glEnable(GL_DEPTH_TEST);
}

void Widget::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void Widget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    if (ui->projection_type->currentIndex() == 0) {
        glFrustum(-2, 2, -2, 2, 1, 15);
        glTranslated(0, 0, -2);
    } else if (ui->projection_type->currentIndex() == 1) {
        glOrtho(-2, 2, -2, 2, 1, 15);
        glTranslated(0, 0, -3);
    }
    glRotatef(xRot, 1, 0, 0);
    glRotatef(yRot, 0, 1, 0);
    drawCube();
}

void Widget::saveSettings() {
    settings->setValue("projection_type", ui->projection_type->currentIndex());
    settings->setValue("background_color", ui->comboBox_background_color->currentIndex());
    settings->setValue("edges_color", ui->comboBox_edges_color->currentIndex());
    settings->setValue("edges_type", ui->comboBox_edges_type->currentIndex());
    settings->setValue("edges_size", ui->spinBox_edges_size->value());
    settings->setValue("vertexes_color", ui->comboBox_vertexes_color->currentIndex());
    settings->setValue("vertexes_type", ui->vertexes_type->currentIndex());
    settings->setValue("vertexes_size", ui->spinBox_vertexes_size->value());
}

void Widget::loadSettings() {
    int pr_type = settings->value("projection_type", "0").toInt();
    ui->projection_type->setCurrentIndex(pr_type);
    int bk_color = settings->value("background_color", "0").toInt();
    ui->comboBox_background_color->setCurrentIndex(bk_color);
    int e_color = settings->value("edges_color", "0").toInt();
    ui->comboBox_edges_color->setCurrentIndex(e_color);
    int e_type = settings->value("edges_type", "0").toInt();
    ui->comboBox_edges_type->setCurrentIndex(e_type);
    int e_size = settings->value("edges_size", "1").toInt();
    ui->spinBox_edges_size->setValue(e_size);
    int v_color = settings->value("vertexes_color", "0").toInt();
    ui->comboBox_vertexes_color->setCurrentIndex(v_color);
    int v_type = settings->value("vertexes_type", "0").toInt();
    ui->vertexes_type->setCurrentIndex(v_type);
    int v_size = settings->value("vertexes_size", "10").toInt();
    ui->spinBox_vertexes_size->setValue(v_size);
}
void Widget::mousePressEvent(QMouseEvent* mo) { mPos = mo->pos(); }
void Widget::mouseMoveEvent(QMouseEvent* mo) {
    xRot = 1 / M_PI * (mo->pos().y() - mPos.y());
    yRot = 1 / M_PI * (mo->pos().x() - mPos.x());
    update();
}

void Widget::drawCube() {
    glVertexPointer(3, GL_DOUBLE, 0, data_data.vertexes);
    glEnableClientState(GL_VERTEX_ARRAY);
    if (ui->comboBox_background_color->currentIndex() == 0) {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    } else if (ui->comboBox_background_color->currentIndex() == 1) {
        glClearColor(0.528f, 0.528f, 0.528f, 1.0f);
    } else if (ui->comboBox_background_color->currentIndex() == 2) {
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    } else if (ui->comboBox_background_color->currentIndex() == 3) {
        glClearColor(0.519f, 0.721f, 0.519f, 1.0f);
    }

    glLineWidth(0.1);
    if (ui->comboBox_edges_color->currentIndex() == 0) {
        glColor3d(0, 0, 1);
    } else if (ui->comboBox_edges_color->currentIndex() == 1) {
        glColor3d(1, 0, 0);
    } else if (ui->comboBox_edges_color->currentIndex() == 2) {
        glColor3d(0, 1, 0);
    } else if (ui->comboBox_edges_color->currentIndex() == 3) {
        glColor3d(1, 1, 1);
    }

    if (ui->comboBox_edges_type->currentIndex() == 0) {
        glDisable(GL_LINE_STIPPLE);
    } else if (ui->comboBox_edges_type->currentIndex() == 1) {
        glLineStipple(10, 0x3333);
        glEnable(GL_LINE_STIPPLE);
    }
    glDrawElements(GL_LINES, data_data.e_count * 2, GL_UNSIGNED_INT, data_data.edges);
    glDisableClientState(GL_VERTEX_ARRAY);

    if (ui->vertexes_type->currentIndex() == 0) {
    } else {
        glEnableClientState(GL_VERTEX_ARRAY);
        if (ui->comboBox_vertexes_color->currentIndex() == 0) {
            glColor3d(1, 0, 0);
        } else if (ui->comboBox_vertexes_color->currentIndex() == 1) {
            glColor3d(0, 0, 1);
        } else if (ui->comboBox_vertexes_color->currentIndex() == 2) {
            glColor3d(0, 1, 0);
        } else if (ui->comboBox_vertexes_color->currentIndex() == 3) {
            glColor3d(1, 1, 1);
        }

        if (ui->vertexes_type->currentIndex() == 1) {
            glEnable(GL_POINT_SMOOTH);
            glDrawArrays(GL_POINTS, 0, data_data.v_count);
            glDisable(GL_POINT_SMOOTH);
        } else if (ui->vertexes_type->currentIndex() == 2) {
            glDrawArrays(GL_POINTS, 0, data_data.v_count);
        }

        glDisable(GL_POINT_SMOOTH);

        glPointSize(ui->spinBox_vertexes_size->value());

        glDisableClientState(GL_VERTEX_ARRAY);
    }
}

void Widget::on_pushButton_mv_x_plus_clicked() {
    moving(&data_data, ui->doubleSpinBox_mv_value->value(), 0);
    update();
}

void Widget::on_pushButton_mv_x_minus_clicked() {
    moving(&data_data, ui->doubleSpinBox_mv_value->value() * -1, 0);
    update();
}

void Widget::on_pushButton_mv_y_plus_clicked() {
    moving(&data_data, ui->doubleSpinBox_mv_value->value(), 1);
    update();
}

void Widget::on_pushButton_mv_y_minus_clicked() {
    moving(&data_data, ui->doubleSpinBox_mv_value->value() * -1, 1);
    update();
}

void Widget::on_pushButton_mv_z_minus_clicked() {
    moving(&data_data, ui->doubleSpinBox_mv_value->value() * -1, 2);
    update();
}

void Widget::on_pushButton_mv_z_plus_clicked() {
    moving(&data_data, ui->doubleSpinBox_mv_value->value(), 2);
    update();
}

void Widget::on_pushButton_sc_plus_clicked() {
    scaling(&data_data, 1 + ui->doubleSpinBox_sc_value->value());
    update();
}

void Widget::on_pushButton_sc_minus_clicked() {
    double value = 1 - ui->doubleSpinBox_sc_value->value();
    if (value == 0) {
        value = 0.1;
    }
    scaling(&data_data, value);
    update();
}

void Widget::on_pushButton_rt_x_plus_clicked() {
    rotation(&data_data, ui->doubleSpinBox_rt_value->value(), 0);
    update();
}

void Widget::on_pushButton_rt_x_minus_clicked() {
    rotation(&data_data, ui->doubleSpinBox_rt_value->value() * -1, 0);
    update();
}

void Widget::on_pushButton_rt_y_plus_clicked() {
    rotation(&data_data, ui->doubleSpinBox_rt_value->value(), 1);
    update();
}

void Widget::on_pushButton_rt_y_minus_clicked() {
    rotation(&data_data, ui->doubleSpinBox_rt_value->value() * -1, 1);
    update();
}

void Widget::on_pushButton_rt_z_plus_clicked() {
    rotation(&data_data, ui->doubleSpinBox_rt_value->value(), 2);
    update();
}

void Widget::on_pushButton_rt_z_minus_clicked() {
    rotation(&data_data, ui->doubleSpinBox_rt_value->value() * -1, 2);
    update();
}

void Widget::on_projection_type_activated() { update(); }

void Widget::on_vertexes_type_activated() { update(); }

void Widget::on_spinBox_vertexes_size_valueChanged() { update(); }

void Widget::on_comboBox_vertexes_color_activated() { update(); }

void Widget::on_spinBox_edges_size_valueChanged() { update(); }

void Widget::on_comboBox_edges_type_activated() { update(); }

void Widget::on_comboBox_edges_color_activated() { update(); }

void Widget::on_comboBox_background_color_activated() {
    //    repaint();
    update();
}

void Widget::on_pushButton_select_name_clicked() {
    QString str;
    str = QFileDialog::getOpenFileName(this, "Select File", "..\\3dShlyap\\objects\\");
    QFileInfo fileinfo(str);
    QString F = fileinfo.fileName();
    ui->label_object_name->setText(F);
    QByteArray ba = str.toLocal8Bit();
    char* c_str = ba.data();
    parser(&data_data, c_str);
    ui->label_info_v->setNum(data_data.v_count);
    ui->label_info_e->setNum(data_data.e_count);
    ui->label_info_p->setNum(data_data.p_count);

    update();
}

void Widget::on_pushButton_save_settings_clicked() { saveSettings(); }

void Widget::on_pushButton_screenshot_clicked() {
    QFileDialog file_dialog_img(this);
    QString f_name =
        file_dialog_img.getSaveFileName(this, tr("Save a screenshot"), "", tr("image (*.bmp *.jpeg)"));
    QImage img = grabFramebuffer();
    img.save(f_name);
}

void Widget::on_pushButton_gif_clicked() {
    gif = new QGifImage;
    gif->setDefaultDelay(100);

    timer->start(500);
}

void Widget::gif_creator() {
    if (frame_count < 30) {
        image = grabFramebuffer();
        gif->addFrame(image);
        frame_count++;

        i++;
        ui->hz->setNum(i);
    } else {
        frame_count = 0;
        timer->stop();

        QFileDialog file_dialog_gif(this);
        QString f_name_gif = file_dialog_gif.getSaveFileName(this, tr("Save a gif"), "", tr("gif (*.gif)"));
        gif->save(f_name_gif);
    }
}
