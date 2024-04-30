#include "calculator.h"

int main(int argc,char** argv) {
    QApplication windowCalc(argc,argv);
    Calculator Calculator;

    Calculator.show();
    return windowCalc.exec();
}
