#include "camera.h"
#include "ui_camera.h"
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QVBoxLayout>
#include <QMenu>
#include <QAction>
#include <QFileDialog>

camera::camera(QWidget *parent)
    :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);
    mCamera = new QCamera(this);
    mCameraViewfinder = new QCameraViewfinder(this);
    mCameraImageCapture = new QCameraImageCapture(mCamera, this);
    mLayout =new QVBoxLayout;
    mOptionsMenu = new QMenu("option",this);
    mEncenderAction = new QAction("Allumer",this);
    mApagarAction = new QAction ("eteindre",this);
    mCapturarAction = new QAction ("capturer",this);

    mOptionsMenu ->addActions({mEncenderAction,mApagarAction,mCapturarAction});

    ui->optionspushButton->setMenu(mOptionsMenu);
   mCamera->setViewfinder(mCameraViewfinder);
   mLayout->addWidget(mCameraViewfinder);
   mLayout->setMargin(0);
   ui->scrollArea->setLayout(mLayout);

connect(mEncenderAction, &QAction::triggered,[&](){
    mCamera->start();
});
connect(mApagarAction, &QAction::triggered,[&](){
    mCamera->stop();
});
connect(mCapturarAction, &QAction::triggered,[&](){
   auto filename = QFileDialog::getSaveFileName(this,"capture","/","Imagen (*.jpg;*.jpeg)");
   if(filename.isEmpty()) {
       return;
   }
   mCameraImageCapture->setCaptureDestination(
                QCameraImageCapture::CaptureToFile);

QImageEncoderSettings imageEcoderSettings;
imageEcoderSettings.setCodec("image/jpeg");
imageEcoderSettings.setResolution(1600,1200);
mCameraImageCapture->setEncodingSettings(imageEcoderSettings);
mCamera->setCaptureMode(QCamera::CaptureStillImage);
mCamera->start();
mCamera->searchAndLock();
mCameraImageCapture->capture(filename);
mCamera->unlock();

});


}

camera::~camera()
{
    delete ui;
}
