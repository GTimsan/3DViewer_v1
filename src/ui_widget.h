/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget {
   public:
    QLabel *label_object_name;
    QGroupBox *groupBox;
    QGroupBox *groupBox_13;
    QPushButton *pushButton_mv_x_minus;
    QPushButton *pushButton_mv_x_plus;
    QGroupBox *groupBox_14;
    QPushButton *pushButton_mv_y_minus;
    QPushButton *pushButton_mv_y_plus;
    QGroupBox *groupBox_15;
    QPushButton *pushButton_mv_z_minus;
    QPushButton *pushButton_mv_z_plus;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QComboBox *projection_type;
    QGroupBox *groupBox_6;
    QComboBox *comboBox_background_color;
    QGroupBox *groupBox_7;
    QComboBox *comboBox_edges_color;
    QComboBox *comboBox_edges_type;
    QGroupBox *groupBox_8;
    QSpinBox *spinBox_edges_size;
    QGroupBox *groupBox_9;
    QComboBox *comboBox_vertexes_color;
    QComboBox *vertexes_type;
    QGroupBox *groupBox_10;
    QSpinBox *spinBox_vertexes_size;
    QPushButton *pushButton_save_settings;
    QGroupBox *groupBox_11;
    QPushButton *pushButton_screenshot;
    QPushButton *pushButton_gif;
    QLabel *hz;
    QGroupBox *groupBox_12;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_info_v;
    QLabel *label_info_p;
    QLabel *label_info_e;
    QPushButton *pushButton_select_name;
    QGroupBox *groupBox_16;
    QGroupBox *groupBox_18;
    QPushButton *pushButton_rt_y_minus;
    QPushButton *pushButton_rt_y_plus;
    QGroupBox *groupBox_19;
    QPushButton *pushButton_rt_z_minus;
    QPushButton *pushButton_rt_z_plus;
    QGroupBox *groupBox_20;
    QPushButton *pushButton_rt_x_minus;
    QPushButton *pushButton_rt_x_plus;
    QGroupBox *groupBox_21;
    QGroupBox *groupBox_24;
    QPushButton *pushButton_sc_minus;
    QPushButton *pushButton_sc_plus;
    QGroupBox *groupBox_2;
    QDoubleSpinBox *doubleSpinBox_mv_value;
    QGroupBox *groupBox_3;
    QDoubleSpinBox *doubleSpinBox_rt_value;
    QGroupBox *groupBox_17;
    QDoubleSpinBox *doubleSpinBox_sc_value;

    void setupUi(QWidget *Widget) {
        if (Widget->objectName().isEmpty()) Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 640);
        Widget->setLayoutDirection(Qt::LeftToRight);
        label_object_name = new QLabel(Widget);
        label_object_name->setObjectName(QString::fromUtf8("label_object_name"));
        label_object_name->setGeometry(QRect(190, 10, 251, 20));
        label_object_name->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(650, 0, 141, 141));
        groupBox_13 = new QGroupBox(groupBox);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(10, 10, 120, 41));
        groupBox_13->setLayoutDirection(Qt::RightToLeft);
        pushButton_mv_x_minus = new QPushButton(groupBox_13);
        pushButton_mv_x_minus->setObjectName(QString::fromUtf8("pushButton_mv_x_minus"));
        pushButton_mv_x_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_mv_x_plus = new QPushButton(groupBox_13);
        pushButton_mv_x_plus->setObjectName(QString::fromUtf8("pushButton_mv_x_plus"));
        pushButton_mv_x_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_14 = new QGroupBox(groupBox);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(10, 50, 120, 41));
        groupBox_14->setLayoutDirection(Qt::RightToLeft);
        pushButton_mv_y_minus = new QPushButton(groupBox_14);
        pushButton_mv_y_minus->setObjectName(QString::fromUtf8("pushButton_mv_y_minus"));
        pushButton_mv_y_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_mv_y_plus = new QPushButton(groupBox_14);
        pushButton_mv_y_plus->setObjectName(QString::fromUtf8("pushButton_mv_y_plus"));
        pushButton_mv_y_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_15 = new QGroupBox(groupBox);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(10, 90, 120, 41));
        groupBox_15->setLayoutDirection(Qt::RightToLeft);
        pushButton_mv_z_minus = new QPushButton(groupBox_15);
        pushButton_mv_z_minus->setObjectName(QString::fromUtf8("pushButton_mv_z_minus"));
        pushButton_mv_z_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_mv_z_plus = new QPushButton(groupBox_15);
        pushButton_mv_z_plus->setObjectName(QString::fromUtf8("pushButton_mv_z_plus"));
        pushButton_mv_z_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 0, 161, 351));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 141, 51));
        groupBox_5->setLayoutDirection(Qt::RightToLeft);
        projection_type = new QComboBox(groupBox_5);
        projection_type->addItem(QString());
        projection_type->addItem(QString());
        projection_type->setObjectName(QString::fromUtf8("projection_type"));
        projection_type->setGeometry(QRect(8, 20, 121, 22));
        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 60, 141, 51));
        groupBox_6->setLayoutDirection(Qt::RightToLeft);
        comboBox_background_color = new QComboBox(groupBox_6);
        comboBox_background_color->addItem(QString());
        comboBox_background_color->addItem(QString());
        comboBox_background_color->addItem(QString());
        comboBox_background_color->addItem(QString());
        comboBox_background_color->setObjectName(QString::fromUtf8("comboBox_background_color"));
        comboBox_background_color->setGeometry(QRect(8, 20, 121, 22));
        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 110, 141, 101));
        groupBox_7->setLayoutDirection(Qt::RightToLeft);
        comboBox_edges_color = new QComboBox(groupBox_7);
        comboBox_edges_color->addItem(QString());
        comboBox_edges_color->addItem(QString());
        comboBox_edges_color->addItem(QString());
        comboBox_edges_color->addItem(QString());
        comboBox_edges_color->setObjectName(QString::fromUtf8("comboBox_edges_color"));
        comboBox_edges_color->setGeometry(QRect(10, 20, 51, 22));
        comboBox_edges_type = new QComboBox(groupBox_7);
        comboBox_edges_type->addItem(QString());
        comboBox_edges_type->addItem(QString());
        comboBox_edges_type->setObjectName(QString::fromUtf8("comboBox_edges_type"));
        comboBox_edges_type->setGeometry(QRect(70, 20, 61, 22));
        groupBox_8 = new QGroupBox(groupBox_7);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 50, 141, 51));
        spinBox_edges_size = new QSpinBox(groupBox_8);
        spinBox_edges_size->setObjectName(QString::fromUtf8("spinBox_edges_size"));
        spinBox_edges_size->setGeometry(QRect(70, 20, 61, 22));
        spinBox_edges_size->setMinimum(1);
        spinBox_edges_size->setMaximum(10);
        spinBox_edges_size->setValue(1);
        groupBox_9 = new QGroupBox(groupBox_4);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 210, 141, 101));
        groupBox_9->setLayoutDirection(Qt::RightToLeft);
        comboBox_vertexes_color = new QComboBox(groupBox_9);
        comboBox_vertexes_color->addItem(QString());
        comboBox_vertexes_color->addItem(QString());
        comboBox_vertexes_color->addItem(QString());
        comboBox_vertexes_color->addItem(QString());
        comboBox_vertexes_color->setObjectName(QString::fromUtf8("comboBox_vertexes_color"));
        comboBox_vertexes_color->setGeometry(QRect(10, 20, 51, 22));
        vertexes_type = new QComboBox(groupBox_9);
        vertexes_type->addItem(QString());
        vertexes_type->addItem(QString());
        vertexes_type->addItem(QString());
        vertexes_type->setObjectName(QString::fromUtf8("vertexes_type"));
        vertexes_type->setGeometry(QRect(70, 20, 61, 22));
        groupBox_10 = new QGroupBox(groupBox_9);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 50, 141, 51));
        spinBox_vertexes_size = new QSpinBox(groupBox_10);
        spinBox_vertexes_size->setObjectName(QString::fromUtf8("spinBox_vertexes_size"));
        spinBox_vertexes_size->setGeometry(QRect(71, 20, 61, 22));
        spinBox_vertexes_size->setMinimum(1);
        spinBox_vertexes_size->setValue(10);
        pushButton_save_settings = new QPushButton(groupBox_4);
        pushButton_save_settings->setObjectName(QString::fromUtf8("pushButton_save_settings"));
        pushButton_save_settings->setGeometry(QRect(40, 320, 81, 24));
        groupBox_11 = new QGroupBox(Widget);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 550, 161, 81));
        pushButton_screenshot = new QPushButton(groupBox_11);
        pushButton_screenshot->setObjectName(QString::fromUtf8("pushButton_screenshot"));
        pushButton_screenshot->setGeometry(QRect(10, 20, 141, 24));
        pushButton_gif = new QPushButton(groupBox_11);
        pushButton_gif->setObjectName(QString::fromUtf8("pushButton_gif"));
        pushButton_gif->setGeometry(QRect(10, 50, 141, 24));
        hz = new QLabel(Widget);
        hz->setObjectName(QString::fromUtf8("hz"));
        hz->setGeometry(QRect(740, 350, 51, 20));
        groupBox_12 = new QGroupBox(Widget);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(650, 140, 141, 81));
        label_8 = new QLabel(groupBox_12);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 49, 16));
        label_9 = new QLabel(groupBox_12);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 40, 49, 16));
        label_10 = new QLabel(groupBox_12);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 60, 49, 16));
        label_info_v = new QLabel(groupBox_12);
        label_info_v->setObjectName(QString::fromUtf8("label_info_v"));
        label_info_v->setGeometry(QRect(70, 20, 61, 20));
        label_info_v->setLayoutDirection(Qt::LeftToRight);
        label_info_v->setStyleSheet(QString::fromUtf8(""));
        label_info_v->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
        label_info_p = new QLabel(groupBox_12);
        label_info_p->setObjectName(QString::fromUtf8("label_info_p"));
        label_info_p->setGeometry(QRect(70, 60, 61, 20));
        label_info_p->setLayoutDirection(Qt::LeftToRight);
        label_info_p->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
        label_info_e = new QLabel(groupBox_12);
        label_info_e->setObjectName(QString::fromUtf8("label_info_e"));
        label_info_e->setGeometry(QRect(70, 40, 61, 20));
        label_info_e->setLayoutDirection(Qt::LeftToRight);
        label_info_e->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
        pushButton_select_name = new QPushButton(Widget);
        pushButton_select_name->setObjectName(QString::fromUtf8("pushButton_select_name"));
        pushButton_select_name->setGeometry(QRect(650, 230, 141, 24));
        groupBox_16 = new QGroupBox(Widget);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(650, 430, 141, 141));
        groupBox_18 = new QGroupBox(groupBox_16);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setGeometry(QRect(10, 50, 120, 41));
        groupBox_18->setLayoutDirection(Qt::RightToLeft);
        pushButton_rt_y_minus = new QPushButton(groupBox_18);
        pushButton_rt_y_minus->setObjectName(QString::fromUtf8("pushButton_rt_y_minus"));
        pushButton_rt_y_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_rt_y_plus = new QPushButton(groupBox_18);
        pushButton_rt_y_plus->setObjectName(QString::fromUtf8("pushButton_rt_y_plus"));
        pushButton_rt_y_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_19 = new QGroupBox(groupBox_16);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        groupBox_19->setGeometry(QRect(10, 90, 120, 41));
        groupBox_19->setLayoutDirection(Qt::RightToLeft);
        pushButton_rt_z_minus = new QPushButton(groupBox_19);
        pushButton_rt_z_minus->setObjectName(QString::fromUtf8("pushButton_rt_z_minus"));
        pushButton_rt_z_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_rt_z_plus = new QPushButton(groupBox_19);
        pushButton_rt_z_plus->setObjectName(QString::fromUtf8("pushButton_rt_z_plus"));
        pushButton_rt_z_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_20 = new QGroupBox(groupBox_16);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        groupBox_20->setGeometry(QRect(10, 10, 120, 41));
        groupBox_20->setLayoutDirection(Qt::RightToLeft);
        pushButton_rt_x_minus = new QPushButton(groupBox_20);
        pushButton_rt_x_minus->setObjectName(QString::fromUtf8("pushButton_rt_x_minus"));
        pushButton_rt_x_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_rt_x_plus = new QPushButton(groupBox_20);
        pushButton_rt_x_plus->setObjectName(QString::fromUtf8("pushButton_rt_x_plus"));
        pushButton_rt_x_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_21 = new QGroupBox(Widget);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        groupBox_21->setGeometry(QRect(650, 570, 141, 61));
        groupBox_24 = new QGroupBox(groupBox_21);
        groupBox_24->setObjectName(QString::fromUtf8("groupBox_24"));
        groupBox_24->setGeometry(QRect(10, 10, 120, 41));
        groupBox_24->setLayoutDirection(Qt::RightToLeft);
        pushButton_sc_minus = new QPushButton(groupBox_24);
        pushButton_sc_minus->setObjectName(QString::fromUtf8("pushButton_sc_minus"));
        pushButton_sc_minus->setGeometry(QRect(10, 10, 41, 24));
        pushButton_sc_plus = new QPushButton(groupBox_24);
        pushButton_sc_plus->setObjectName(QString::fromUtf8("pushButton_sc_plus"));
        pushButton_sc_plus->setGeometry(QRect(60, 10, 41, 24));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(560, 0, 81, 51));
        doubleSpinBox_mv_value = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_mv_value->setObjectName(QString::fromUtf8("doubleSpinBox_mv_value"));
        doubleSpinBox_mv_value->setGeometry(QRect(10, 20, 62, 22));
        doubleSpinBox_mv_value->setMinimum(0.100000000000000);
        doubleSpinBox_mv_value->setMaximum(1.000000000000000);
        doubleSpinBox_mv_value->setSingleStep(0.100000000000000);
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(650, 380, 71, 51));
        doubleSpinBox_rt_value = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_rt_value->setObjectName(QString::fromUtf8("doubleSpinBox_rt_value"));
        doubleSpinBox_rt_value->setGeometry(QRect(10, 20, 51, 22));
        doubleSpinBox_rt_value->setMinimum(0.100000000000000);
        doubleSpinBox_rt_value->setMaximum(1.000000000000000);
        doubleSpinBox_rt_value->setSingleStep(0.100000000000000);
        groupBox_17 = new QGroupBox(Widget);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(730, 380, 71, 51));
        doubleSpinBox_sc_value = new QDoubleSpinBox(groupBox_17);
        doubleSpinBox_sc_value->setObjectName(QString::fromUtf8("doubleSpinBox_sc_value"));
        doubleSpinBox_sc_value->setGeometry(QRect(10, 20, 51, 22));
        doubleSpinBox_sc_value->setMinimum(0.100000000000000);
        doubleSpinBox_sc_value->setMaximum(1.000000000000000);
        doubleSpinBox_sc_value->setSingleStep(0.100000000000000);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    }  // setupUi

    void retranslateUi(QWidget *Widget) {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_object_name->setText(QString());
        groupBox->setTitle(QApplication::translate("Widget", "Moving", nullptr));
        groupBox_13->setTitle(QApplication::translate("Widget", "X", nullptr));
        pushButton_mv_x_minus->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton_mv_x_plus->setText(QApplication::translate("Widget", "+", nullptr));
        groupBox_14->setTitle(QApplication::translate("Widget", "Y", nullptr));
        pushButton_mv_y_minus->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton_mv_y_plus->setText(QApplication::translate("Widget", "+", nullptr));
        groupBox_15->setTitle(QApplication::translate("Widget", "Z", nullptr));
        pushButton_mv_z_minus->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton_mv_z_plus->setText(QApplication::translate("Widget", "+", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "Settings", nullptr));
        groupBox_5->setTitle(QApplication::translate("Widget", "Projection type", nullptr));
        projection_type->setItemText(0, QApplication::translate("Widget", "Central", nullptr));
        projection_type->setItemText(1, QApplication::translate("Widget", "Parallel", nullptr));

        groupBox_6->setTitle(QApplication::translate("Widget", "Background color", nullptr));
        comboBox_background_color->setItemText(0, QApplication::translate("Widget", "Black", nullptr));
        comboBox_background_color->setItemText(1, QApplication::translate("Widget", "Grey", nullptr));
        comboBox_background_color->setItemText(2, QApplication::translate("Widget", "White", nullptr));
        comboBox_background_color->setItemText(3, QApplication::translate("Widget", "HZ", nullptr));

        groupBox_7->setTitle(QApplication::translate("Widget", "Edges", nullptr));
        comboBox_edges_color->setItemText(0, QApplication::translate("Widget", "Blue", nullptr));
        comboBox_edges_color->setItemText(1, QApplication::translate("Widget", "Red", nullptr));
        comboBox_edges_color->setItemText(2, QApplication::translate("Widget", "Green", nullptr));
        comboBox_edges_color->setItemText(3, QApplication::translate("Widget", "White", nullptr));

        comboBox_edges_type->setItemText(0, QApplication::translate("Widget", "Line", nullptr));
        comboBox_edges_type->setItemText(1, QApplication::translate("Widget", "Stipple", nullptr));

        groupBox_8->setTitle(QApplication::translate("Widget", "Size", nullptr));
        groupBox_9->setTitle(QApplication::translate("Widget", "Vertices", nullptr));
        comboBox_vertexes_color->setItemText(0, QApplication::translate("Widget", "Red", nullptr));
        comboBox_vertexes_color->setItemText(1, QApplication::translate("Widget", "Blue", nullptr));
        comboBox_vertexes_color->setItemText(2, QApplication::translate("Widget", "Green", nullptr));
        comboBox_vertexes_color->setItemText(3, QApplication::translate("Widget", "White", nullptr));

        vertexes_type->setItemText(0, QApplication::translate("Widget", "Norm", nullptr));
        vertexes_type->setItemText(1, QApplication::translate("Widget", "\320\241ircles", nullptr));
        vertexes_type->setItemText(2, QApplication::translate("Widget", "Quads", nullptr));

        groupBox_10->setTitle(QApplication::translate("Widget", "Size", nullptr));
        pushButton_save_settings->setText(QApplication::translate("Widget", "Save", nullptr));
        groupBox_11->setTitle(QApplication::translate("Widget", "Record", nullptr));
        pushButton_screenshot->setText(QApplication::translate("Widget", "ScreenShot", nullptr));
        pushButton_gif->setText(QApplication::translate("Widget", "GIF", nullptr));
        hz->setText(QString());
        groupBox_12->setTitle(QApplication::translate("Widget", "Object info", nullptr));
        label_8->setText(QApplication::translate("Widget", "Vertices", nullptr));
        label_9->setText(QApplication::translate("Widget", "Edges", nullptr));
        label_10->setText(QApplication::translate("Widget", "Polygons", nullptr));
        label_info_v->setText(QString());
        label_info_p->setText(QString());
        label_info_e->setText(QString());
        pushButton_select_name->setText(QApplication::translate("Widget", "Select File", nullptr));
        groupBox_16->setTitle(QApplication::translate("Widget", "Rotation", nullptr));
        groupBox_18->setTitle(QApplication::translate("Widget", "Y", nullptr));
        pushButton_rt_y_minus->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton_rt_y_plus->setText(QApplication::translate("Widget", "+", nullptr));
        groupBox_19->setTitle(QApplication::translate("Widget", "Z", nullptr));
        pushButton_rt_z_minus->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton_rt_z_plus->setText(QApplication::translate("Widget", "+", nullptr));
        groupBox_20->setTitle(QApplication::translate("Widget", "X", nullptr));
        pushButton_rt_x_minus->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton_rt_x_plus->setText(QApplication::translate("Widget", "+", nullptr));
        groupBox_21->setTitle(QApplication::translate("Widget", "Scaling", nullptr));
        groupBox_24->setTitle(QApplication::translate("Widget", "S", nullptr));
        pushButton_sc_minus->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton_sc_plus->setText(QApplication::translate("Widget", "+", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "Mv Value ", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "Rt Value ", nullptr));
        groupBox_17->setTitle(QApplication::translate("Widget", "Sc Value ", nullptr));
    }  // retranslateUi
};

namespace Ui {
class Widget : public Ui_Widget {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_WIDGET_H
