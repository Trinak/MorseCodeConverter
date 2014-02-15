#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_textConvertButton_clicked();
    void on_morseConvertButton_clicked();
    void on_actionSave_triggered();
    void on_actionOpen_triggered();
    void on_actionOpen_Morse_Code_triggered();
    void on_actionSave_Morse_Code_triggered();
    void on_actionExit_triggered();

private:
    QString convertToMorse(QString text);
    QString convertToText(QString morse);
    Ui::MainWindow *ui;
    std::map<QString, QChar> morseToText;
};

#endif // MAINWINDOW_H
