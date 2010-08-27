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
    QLabel *lbl_Bin;//������
    QLineEdit *line_Bin;
    QLabel *lbl_Oct;//�˽���
    QLineEdit *line_Oct;
    QLabel *lbl_Dec;//ʮ����
    QLineEdit *line_Dec;
    QLabel *lbl_Hex;//ʮ������
    QLineEdit *line_Hex;

    QPushButton *btn_Convert;
};

#endif // CONVERTER_H
