#include "stats.h"
#include "ui_stats.h"
#include <QStringList>
#include <QList>


Stats::Stats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stats)
{
    ui->setupUi(this);
}

Stats::~Stats()
{
    delete ui;
}



void Stats::choix_pie()
{
    QList <QString> list,list2;
    vector<QString> liste_cat;  //classe QVector est une classe modèle qui fournit un tableau dynamique
    vector<qreal> count;
    QSqlQuery q1,q2;
    qreal tot=0,c;
    q1.prepare("SELECT DISTINCT type_m FROM matiere");    //Pour éviter des redondances dans les résultats il faut simplement ajouter DISTINCT après le mot SELECT
    q1.exec();
    while (q1.next()){
        liste_cat.push_back(q1.value(0).toString());
        list.push_back(q1.value(0).toString());
    }

    q1.prepare("SELECT * FROM matiere");
    q1.exec();
    while (q1.next()){
        tot++;
    }

    for (auto i = liste_cat.begin(); i != liste_cat.end(); ++i) {
         q2.prepare("SELECT * FROM matiere where type_m = :m");
         q2.bindValue(":m", *i);
         q2.exec();
         c=0;
         while (q2.next()){c++;}
         count.push_back(c/tot);


    }


// Define slices and percentage of whole they take up

QPieSeries *series = new QPieSeries();
for(unsigned int i = 0; i < liste_cat.size(); i++)
series->append(liste_cat[i] ,count[i]);


// Create the chart widget
QChart *chart = new QChart();

// Add data to chart with title and show legend and pourcentage
chart->addSeries(series);
chart->legend()->show();
int i=0;
    for(auto slice : series->slices())
    {
        list2.push_back(QString("%1%").arg(100*slice->percentage(), 0, 'f', 1));
       slice->setLabel(list[i]+" "+list2[i]);
       i++;
    }
// Used to display the chart
chartView = new QChartView(chart,ui->label);
chartView->setRenderHint(QPainter::Antialiasing);
chartView->setMinimumSize(400,400);
chartView->show();
}
