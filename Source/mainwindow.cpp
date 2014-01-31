#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMultimedia/QSound>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    morseToText[".-"] = 'A';
    morseToText["-..."] = 'B';
    morseToText["-.-."] = 'C';
    morseToText["-.."] = 'D';
    morseToText["."] = 'E';
    morseToText["..-."] = 'F';
    morseToText["--."] = 'G';
    morseToText["...."] = 'H';
    morseToText[".."] = 'I';
    morseToText[".---"] = 'J';
    morseToText["-.-"] = 'K';
    morseToText[".-.."] = 'L';
    morseToText["--"] = 'M';
    morseToText["-."] = 'N';
    morseToText["---"] = 'O';
    morseToText[".--."] = 'P';
    morseToText["--.-"] = 'Q';
    morseToText[".-."] = 'R';
    morseToText["..."] = 'S';
    morseToText["-"] = 'T';
    morseToText["..-"] = 'U';
    morseToText["...-"] = 'V';
    morseToText[".--"] = 'W';
    morseToText["-..-"] = 'X';
    morseToText["-.--"] = 'Y';
    morseToText["--.."] = 'Z';
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

void MainWindow::on_morseConvertButton_clicked()
{
    QString morse = ui->morseTextEdit->toPlainText();
    QString text = convertToText(morse);
    ui->normalTextEdit->clear();
    ui->normalTextEdit->appendPlainText(text);
}

QString MainWindow::convertToMorse(QString text)
{
    QString morse;
    text = text.toUpper();

    for (QChar &i: text)
    {
        char letter = i.toLatin1();

        switch(letter)
        {
        case 'A':
            morse += ".-";
            break;
        case 'B':
            morse += "-...";
            break;
        case 'C':
            morse += "-.-.";
            break;
        case 'D':
            morse += "-..";
            break;
        case 'E':
            morse += ".";
            break;
        case 'F':
            morse += "..-.";
            break;
        case 'G':
            morse += "--.";
            break;
        case 'H':
            morse += "....";
            break;
        case 'I':
            morse += "..";
            break;
        case 'J':
            morse += ".---";
            break;
        case 'K':
            morse += "-.-";
            break;
        case 'L':
            morse += ".-..";
            break;
        case 'M':
            morse += "--";
            break;
        case 'N':
            morse += "-.";
            break;
        case 'O':
            morse += "---";
            break;
        case 'P':
            morse += ".--.";
            break;
        case 'Q':
            morse += "--.-";
            break;
        case 'R':
            morse += ".-.";
            break;
        case 'S':
            morse += "...";
            break;
        case 'T':
            morse += "-";
            break;
        case 'U':
            morse += "..-";
            break;
        case 'V':
            morse += "...-";
            break;
        case 'W':
            morse += ".--";
            break;
        case 'X':
            morse += "-..-";
            break;
        case 'Y':
            morse += "-.--";
            break;
        case 'Z':
            morse += "--..";
            break;
        case ' ':
            morse += "      ";
            break;
        }
        morse += " ";
    }

    return morse;
}

QString MainWindow::convertToText(QString morse)
{
    QString text;
    QString letter;

    for (QChar &i : morse)
    {
        if (!i.isSpace())
        {
            letter += i;
        }
        else
        {
            if (letter.size() >= 1)
            {
                text += morseToText[letter];
                letter = "";
            }
            else
            {
                text += " ";
            }
        }
    }

    if (letter.size() >= 1)
    {
        text += morseToText[letter];
        letter = "";
    }

    text = text.simplified();
    return text;
}
