#include "widget.h"
#include "./ui_widget.h"
#include "QSerialPortInfo"
#include "QMessageBox"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    
    
    serialPort = new QSerialPort(this);//实例化串口
    
    QStringList serialNamePort;



    connect(serialPort,SIGNAL(readyRead()),this,SLOT(serialPortReadyRead_Slot()));

    foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts()) {   //获取串口信息
           serialNamePort<<info.portName();    //将信息打印到列表中
       }
    ui->SerialCom->addItems(serialNamePort);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::serialPortReadyRead_Slot(){
    QString buff;
    buff = QString(serialPort->readAll());
    ui->RevtEdit->appendPlainText(buff);
}

void Widget::on_Button_Open_clicked()
{
    QSerialPort::BaudRate baudrate;
    QSerialPort::DataBits databits;
    QSerialPort::StopBits stopbits;
    QSerialPort::Parity parity;

    if(ui->SerialBaud->currentText() == "4800"){
        baudrate = QSerialPort::Baud4800;
    }else if(ui->SerialBaud->currentText() == "9600"){
        baudrate = QSerialPort::Baud9600;
    }else if(ui->SerialBaud->currentText() == "115200"){
        baudrate = QSerialPort::Baud115200;
    }

    if(ui->SerialData_Bits->currentText() == "5"){
        databits = QSerialPort::Data5;
    }else if(ui->SerialData_Bits->currentText() == "6"){
        databits = QSerialPort::Data6;
    }else if(ui->SerialData_Bits->currentText() == "7"){
        databits = QSerialPort::Data7;
    }else if (ui->SerialData_Bits->currentText() == "8") {
        databits = QSerialPort::Data8;
    }

    if(ui->SerialStop_Bits->currentText() == "1"){
        stopbits = QSerialPort::OneStop;
    }else if(ui->SerialStop_Bits->currentText() == "1.5"){
        stopbits = QSerialPort::OneAndHalfStop;
    }else if(ui->SerialStop_Bits->currentText() == "2"){
        stopbits = QSerialPort::TwoStop;
    }

    if(ui->Serial_Parity->currentText() == "none"){
        parity = QSerialPort::NoParity;
    }


    serialPort->setPortName(ui->SerialCom->currentText());
    serialPort->setBaudRate(baudrate);
    serialPort->setDataBits(databits);
    serialPort->setStopBits(stopbits);
    serialPort->setParity(parity);


    if(serialPort->open(QIODevice::ReadWrite) == true){
        QMessageBox::information(this,"提示","成功");
    }else{
        QMessageBox::critical(this,"提示","失败");
    }

}


void Widget::on_Button_Close_clicked()
{
    serialPort->close();
}

void Widget::on_Button_Clear_clicked()
{
    ui->RevtEdit->clear();
}

void Widget::on_Button_Send_clicked()
{
    serialPort->write(ui->SendEdit->text().toLocal8Bit().data());
}


