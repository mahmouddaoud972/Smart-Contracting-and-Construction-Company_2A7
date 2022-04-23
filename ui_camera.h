/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QPushButton *optionspushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName(QStringLiteral("camera"));
        camera->resize(1431, 727);
        optionspushButton = new QPushButton(camera);
        optionspushButton->setObjectName(QStringLiteral("optionspushButton"));
        optionspushButton->setGeometry(QRect(20, 6, 1258, 28));
        scrollArea = new QScrollArea(camera);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 40, 1258, 584));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1256, 582));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(camera);

        QMetaObject::connectSlotsByName(camera);
    } // setupUi

    void retranslateUi(QDialog *camera)
    {
        camera->setWindowTitle(QApplication::translate("camera", "Dialog", Q_NULLPTR));
        optionspushButton->setText(QApplication::translate("camera", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
