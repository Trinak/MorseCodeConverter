#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_textConvertButton_clicked()
{
    QString text = ui->normalTextEdit->toPlainText();
    QString morse = convertToMorse(text);
    ui->morseTextEdit->clear();
    ui->morseTextEdit->appendPlainText(morse);
}

QString MainWindow::convertToMorse(QString text)
{
    QString morse;

    for (QChar &i: text)
    {
        char letter = i.toLatin1();

        switch(letter)
        {
        case 'A':
        case 'a':
            morse += ".-";
            break;
        case 'B':
        case 'b':
            morse += "-...";
            break;
        case 'C':
        case 'c':
            morse += "-.-.";
            break;
        case 'D':
        case 'd':
            morse += "-..";
            break;
        case 'E':
        case 'e':
            morse += ".";
            break;
        case 'F':
        case 'f':
            morse += "..-.";
            break;
        case 'G':
        case 'g':
            morse += "--.";
            break;
        case 'H':
        case 'h':
            morse += "....";
            break;
        case 'I':
        case 'i':
            morse += "..";
            break;
        case 'J':
        case 'j':
            morse += ".---";
            break;
        case 'K':
        case 'k':
            morse += "-.-";
            break;
        case 'L':
        case 'l':
            morse += ".-..";
            break;
        case 'M':
        case 'm':
            morse += "--";
            break;
        case 'N':
        case 'n':
            morse += "-.";
            break;
        case 'O':
        case 'o':
            morse += "---";
            break;
        case 'P':
        case 'p':
            morse += ".--.";
            break;
        case 'Q':
        case 'q':
            morse += "--.-";
            break;
        case 'R':
        case 'r':
            morse += ".-.";
            break;
        case 'S':
        case 's':
            morse += "...";
            break;
        case 'T':
        case 't':
            morse += "-";
            break;
        case 'U':
        case 'u':
            morse += "..-";
            break;
        case 'V':
        case 'v':
            morse += "...-";
            break;
        case 'W':
        case 'w':
            morse += ".--";
            break;
        case 'X':
        case 'x':
            morse += "-..-";
            break;
        case 'Y':
        case 'y':
            morse += "-.--";
            break;
        case 'Z':
        case 'z':
            morse += "--..";
            break;
        case ' ':
            break;
        }
        morse += " ";
    }

    return morse;
}
