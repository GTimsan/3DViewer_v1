#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
// #include <gl/GL.h>
// #include <gl/GLU.h>
#include <QFileDialog>
#include <QMouseEvent>
#include <QOpenGLWidget>
#include <QSettings>
#include <QThread>
#include <QTimer>

#include "qgifimage.h"

extern "C" {
#include "parser.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QOpenGLWidget {
    Q_OBJECT

   public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    float xRot, yRot, zRot;

    QPoint mPos;
    void drawCube();
    void mousePressEvent(QMouseEvent *) override;
    void mouseMoveEvent(QMouseEvent *) override;
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void saveSettings();
    void loadSettings();

    QTimer *timer;
    QImage image;

    QGifImage *gif;
    int frame_count;
    int i = 0;

   private slots:
    void on_pushButton_mv_x_plus_clicked();
    void on_pushButton_mv_x_minus_clicked();
    void on_pushButton_mv_y_plus_clicked();
    void on_pushButton_mv_y_minus_clicked();
    void on_pushButton_mv_z_minus_clicked();
    void on_pushButton_mv_z_plus_clicked();
    void on_pushButton_sc_plus_clicked();
    void on_pushButton_sc_minus_clicked();
    void on_pushButton_rt_x_plus_clicked();
    void on_pushButton_rt_x_minus_clicked();
    void on_pushButton_rt_y_plus_clicked();
    void on_pushButton_rt_y_minus_clicked();
    void on_pushButton_rt_z_plus_clicked();
    void on_pushButton_rt_z_minus_clicked();
    void on_projection_type_activated();
    void on_vertexes_type_activated();
    void on_spinBox_vertexes_size_valueChanged();
    void on_comboBox_vertexes_color_activated();
    void on_spinBox_edges_size_valueChanged();
    void on_comboBox_edges_type_activated();
    void on_comboBox_edges_color_activated();
    void on_comboBox_background_color_activated();
    void on_pushButton_select_name_clicked();
    void on_pushButton_save_settings_clicked();
    void on_pushButton_screenshot_clicked();
    void on_pushButton_gif_clicked();
    void gif_creator();

   private:
    Ui::Widget *ui;
    QSettings *settings;
};

#endif  // WIDGET_H
