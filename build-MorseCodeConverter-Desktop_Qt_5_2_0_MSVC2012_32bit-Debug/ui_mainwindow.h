/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionOpen_Morse_Code;
    QAction *actionSave_Morse_Code;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *normalTextEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *textConvertButton;
    QPushButton *morseConvertButton;
    QPlainTextEdit *morseTextEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(673, 375);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionOpen_Morse_Code = new QAction(MainWindow);
        actionOpen_Morse_Code->setObjectName(QStringLiteral("actionOpen_Morse_Code"));
        actionSave_Morse_Code = new QAction(MainWindow);
        actionSave_Morse_Code->setObjectName(QStringLiteral("actionSave_Morse_Code"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        normalTextEdit = new QPlainTextEdit(centralWidget);
        normalTextEdit->setObjectName(QStringLiteral("normalTextEdit"));

        horizontalLayout->addWidget(normalTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textConvertButton = new QPushButton(centralWidget);
        textConvertButton->setObjectName(QStringLiteral("textConvertButton"));

        verticalLayout->addWidget(textConvertButton);

        morseConvertButton = new QPushButton(centralWidget);
        morseConvertButton->setObjectName(QStringLiteral("morseConvertButton"));

        verticalLayout->addWidget(morseConvertButton);


        horizontalLayout->addLayout(verticalLayout);

        morseTextEdit = new QPlainTextEdit(centralWidget);
        morseTextEdit->setObjectName(QStringLiteral("morseTextEdit"));

        horizontalLayout->addWidget(morseTextEdit);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen_Morse_Code);
        menuFile->addAction(actionSave_Morse_Code);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open Text File", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save Text File", 0));
        actionOpen_Morse_Code->setText(QApplication::translate("MainWindow", "Open Morse Code", 0));
        actionSave_Morse_Code->setText(QApplication::translate("MainWindow", "Save Morse Code", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        textConvertButton->setText(QApplication::translate("MainWindow", "Convert Text to Morse Code", 0));
        morseConvertButton->setText(QApplication::translate("MainWindow", "Convert Morse Code to Text", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
