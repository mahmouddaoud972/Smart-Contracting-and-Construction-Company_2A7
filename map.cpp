#include "map.h"
#include "ui_map.h"
#include <QQuickItem>
#include "connection.h"
#include <QVariant>
Map::Map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Map)
{
    ui->setupUi(this);
    ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
        ui->quickWidget->show();

        auto obj = ui->quickWidget->rootObject();
        connect(this, SIGNAL(setCenter(QVariant, QVariant)), obj, SLOT(setCenter(QVariant, QVariant)));
        connect(this, SIGNAL(addMarker(QVariant, QVariant)), obj, SLOT(addMarker(QVariant, QVariant)));
         emit setCenter(	33.886917,	9.537499);
        QSqlQuery query;

        query.prepare(" select lat_f , long_f from fournisseur ");
        if(query.exec())
            {
                while(query.next())
                {
                    QString lat = query.value(0).toString();
                    QString longg = query.value(1).toString();


               emit addMarker(lat, longg);
                }
        }
}

Map::~Map()
{
    delete ui;
}
