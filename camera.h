#ifndef CAMERA_H
#define CAMERA_H

#include <QDialog>

namespace Ui {
class camera;
}
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;

class camera : public QDialog
{
    Q_OBJECT

public:
    explicit camera(QWidget *parent = nullptr);
    ~camera();

private:
    Ui::camera *ui;
    QCamera *mCamera;
    QCameraViewfinder *mCameraViewfinder;
    QCameraImageCapture *mCameraImageCapture;
    QVBoxLayout *mLayout;
    QMenu *mOptionsMenu;
    QAction *mEncenderAction;
    QAction *mApagarAction;
    QAction *mCapturarAction;

};

#endif // CAMERA_H
