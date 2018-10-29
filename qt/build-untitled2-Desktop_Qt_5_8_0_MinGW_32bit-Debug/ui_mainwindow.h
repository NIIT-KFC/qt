/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDocument;
    QAction *actionTuturial;
    QAction *actionUpdate_Check;
    QAction *actionAbout_Us;
    QAction *actionClose;
    QAction *actionChinese_Simplify;
    QAction *actionChinese_Traditional;
    QAction *actionEnglish;
    QAction *actionJapanese;
    QAction *actionFrench;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuLanguage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionDocument = new QAction(MainWindow);
        actionDocument->setObjectName(QStringLiteral("actionDocument"));
        actionTuturial = new QAction(MainWindow);
        actionTuturial->setObjectName(QStringLiteral("actionTuturial"));
        actionUpdate_Check = new QAction(MainWindow);
        actionUpdate_Check->setObjectName(QStringLiteral("actionUpdate_Check"));
        actionAbout_Us = new QAction(MainWindow);
        actionAbout_Us->setObjectName(QStringLiteral("actionAbout_Us"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionChinese_Simplify = new QAction(MainWindow);
        actionChinese_Simplify->setObjectName(QStringLiteral("actionChinese_Simplify"));
        actionChinese_Traditional = new QAction(MainWindow);
        actionChinese_Traditional->setObjectName(QStringLiteral("actionChinese_Traditional"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionEnglish->setCheckable(false);
        actionEnglish->setChecked(false);
        actionJapanese = new QAction(MainWindow);
        actionJapanese->setObjectName(QStringLiteral("actionJapanese"));
        actionFrench = new QAction(MainWindow);
        actionFrench->setObjectName(QStringLiteral("actionFrench"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 150, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 150, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 150, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuLanguage = new QMenu(menuHelp);
        menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
        menuLanguage->setEnabled(true);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuHelp->addAction(actionDocument);
        menuHelp->addAction(actionTuturial);
        menuHelp->addSeparator();
        menuHelp->addAction(actionUpdate_Check);
        menuHelp->addAction(actionAbout_Us);
        menuHelp->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionChinese_Simplify);
        menuLanguage->addAction(actionChinese_Traditional);
        menuLanguage->addAction(actionJapanese);
        menuLanguage->addAction(actionFrench);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
        actionDocument->setText(QApplication::translate("MainWindow", "Document", Q_NULLPTR));
        actionTuturial->setText(QApplication::translate("MainWindow", "Tuturial", Q_NULLPTR));
        actionUpdate_Check->setText(QApplication::translate("MainWindow", "Update Check", Q_NULLPTR));
        actionAbout_Us->setText(QApplication::translate("MainWindow", "About Us", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        actionChinese_Simplify->setText(QApplication::translate("MainWindow", "Chinese(Simplify)", Q_NULLPTR));
        actionChinese_Traditional->setText(QApplication::translate("MainWindow", "Chinese(Traditional)", Q_NULLPTR));
        actionEnglish->setText(QApplication::translate("MainWindow", "English", Q_NULLPTR));
        actionJapanese->setText(QApplication::translate("MainWindow", "Japanese", Q_NULLPTR));
        actionFrench->setText(QApplication::translate("MainWindow", "French", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Apply", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Undo", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
