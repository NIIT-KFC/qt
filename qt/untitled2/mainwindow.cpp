#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTranslator *m_Translator;
        m_Translator= new QTranslator();
        m_Translator->load("../untitled2/english.qm");
        qApp->installTranslator(m_Translator);
        ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionChinese_Simplify_triggered()
{
    QTranslator *m_Translator;
    m_Translator= new QTranslator();
    m_Translator->load("../untitled2/simplify.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);


}

void MainWindow::on_actionChinese_Traditional_triggered()
{
    QTranslator *m_Translator;
    m_Translator= new QTranslator();
    m_Translator->load("../untitled2/traditional.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator *m_Translator;
    m_Translator= new QTranslator();
    m_Translator->load("../untitled2/english.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);}

void MainWindow::on_actionJapanese_triggered()
{
    QTranslator *m_Translator;
    m_Translator= new QTranslator();
    m_Translator->load("../untitled2/japanese.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionFrench_triggered()
{
    QTranslator *m_Translator;
    m_Translator= new QTranslator();
    m_Translator->load("../untitled2/french.qm");
    qApp->installTranslator(m_Translator);
    ui->retranslateUi(this);
}
