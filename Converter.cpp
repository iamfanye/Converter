#include "Converter.h"

Converter::Converter(QWidget *parent):QWidget(parent)
{
    lbl_Bin = new QLabel(tr("Bin:"));
    line_Bin = new QLineEdit();
    line_Bin->setFocus(Qt::OtherFocusReason);
    lbl_Oct = new QLabel(tr("Oct:"));
    line_Oct = new QLineEdit();
    lbl_Dec = new QLabel(tr("Dec:"));
    line_Dec = new QLineEdit();
    lbl_Hex = new QLabel(tr("Hex:"));
    line_Hex = new QLineEdit();
    btn_Convert = new QPushButton(tr("&Convert"));
    btn_Convert->setMinimumSize(30,50);

    connect(btn_Convert,SIGNAL(clicked()),this,SLOT(ConvertClicked()));    

    QGridLayout *glay_Left = new QGridLayout();
    glay_Left->addWidget(lbl_Bin,0,0,Qt::AlignTop);
    glay_Left->addWidget(line_Bin,0,1);
    glay_Left->addWidget(lbl_Oct,1,0);
    glay_Left->addWidget(line_Oct,1,1);
    glay_Left->addWidget(lbl_Dec,2,0);
    glay_Left->addWidget(line_Dec,2,1);
    glay_Left->addWidget(lbl_Hex,3,0);
    glay_Left->addWidget(line_Hex,3,1);

    QHBoxLayout *hlay_Main = new QHBoxLayout();
    hlay_Main->addLayout(glay_Left);
    hlay_Main->addWidget(btn_Convert);

    this->setLayout(hlay_Main);
    this->setWindowTitle(tr("Converter"));
    this->setFixedSize(350,150);

    QRect rect(this->geometry());
    rect.moveCenter(QApplication::desktop()->screenGeometry(QApplication::desktop()).center());
    this->setGeometry(rect);
}

void Converter::ConvertClicked()
{

}
