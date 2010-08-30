#ifndef CONVERTER_H
#define CONVERTER_H

#include "QtGui"

enum nonEmpty{bin,oct,dec,hex};

class Converter:public QWidget
{
    Q_OBJECT

public:
    Converter(QWidget *parent = 0);
    nonEmpty WhichisOK();
    void Convert2Bin();
    void Convert2Oct();
    void Convert2Dec();
    void Convert2Hex();

public slots:
    void ConvertClicked();

private:
    QLabel *lbl_Bin;
    QLineEdit *line_Bin;
    QLabel *lbl_Oct;
    QLineEdit *line_Oct;
    QLabel *lbl_Dec;
    QLineEdit *line_Dec;
    QLabel *lbl_Hex;
    QLineEdit *line_Hex;

    QPushButton *btn_Convert;
};

#endif // CONVERTER_H
