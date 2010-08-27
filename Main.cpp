#include "Converter.h"

int main(int argc,char* argv[])
{
    QApplication app(argc,argv);

    Converter *con = new Converter(0);    
    con->show();

    return app.exec();
}
