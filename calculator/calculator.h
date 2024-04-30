#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QPushButton>
#include <QWidget>
#include <vector>
#include <QString>
#include <QLabel>
#include <QGridLayout>
#include <QApplication>
#include <QWidget>
#include <QLineEdit>

class Calculator :public QWidget
{
public:
    Calculator();
    ~Calculator();

private:
    std::vector<QPushButton*> numbers;
    std::vector<QString> symbols = {"0", "1", "2", "3","4", "5","6","7", "8", "9"};
    QString Operation;
    QGridLayout *grid;
    QLineEdit *lineEdit;
    QVector<double> number;
    double resultt;
    QVector<QString> operations;

public slots:
    void clearAll();
    void addition();
    void sqrt();
    void mathOperation(QString oprt);
    void equal();
    void zero();
    void Quit();
    void Clear();
    void Numbers();
    void pointAndNum();
};

#endif // CALCULATOR_H
