#ifndef CONVERTER_H
#define CONVERTER_H

#include "QtGui"

class Converter:public QWidget
{
    Q_OBJECT

public:
    Converter(QWidget *parent = 0);

public slots:
    void ConvertClicked();

private:
    QLabel *lbl_Bin;//二进制
    QLineEdit *line_Bin;
    QLabel *lbl_Oct;//八进制
    QLineEdit *line_Oct;
    QLabel *lbl_Dec;//十进制
    QLineEdit *line_Dec;
    QLabel *lbl_Hex;//十六进制
    QLineEdit *line_Hex;

    QPushButton *btn_Convert;
};

#endif // CONVERTER_H
