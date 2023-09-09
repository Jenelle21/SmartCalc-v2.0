#include "smartcalc.h"
#include "./ui_smartcalc.h"

SmartCalc::SmartCalc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SmartCalc)
{
    ui->setupUi(this);
}

SmartCalc::~SmartCalc()
{
    delete ui;
}

