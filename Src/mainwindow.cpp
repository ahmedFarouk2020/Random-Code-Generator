#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CodeGenerator.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    code_label = new QLabel("Code: ", this);
    code_label->setGeometry(QRect(50,40, 41, 31));

    codeLength_label = new QLabel("Code Length: ", this);
    codeLength_label->setGeometry(QRect(50,80, 91, 31));

    generate_button = new QPushButton("Generate", this);
    generate_button ->setGeometry(QRect(90, 320, 221, 25));

    result_outputter = new QLineEdit(this);
    result_outputter -> setGeometry(QRect(100, 40, 231, 31));

    codeLengthWidget = new QSpinBox(this);
    codeLengthWidget->setGeometry(QRect(150,80,42,26));
    codeLengthWidget->setValue(14);

    QObject::connect(generate_button, &QPushButton::clicked, [=] {
            // define str
            QString res;
            // call generate code function
            CodeGenerator gen;
            res = gen.generateCode(codeLengthWidget->value());
            result_outputter->setText(res);
        });
}


MainWindow::~MainWindow()
{
    delete ui;
}

