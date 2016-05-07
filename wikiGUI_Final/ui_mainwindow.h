/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *wiki_image;
    QTabWidget *tabWidget;
    QWidget *tab;
    QSpinBox *articles_per_file;
    QLabel *label;
    QPushButton *parse_txt_start_button;
    QCheckBox *create_file_system;
    QCheckBox *parse_formatting;
    QLineEdit *directory_input;
    QLabel *label_2;
    QLineEdit *datadump_input;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *warning_label;
    QFrame *line;
    QSpinBox *tot_art_box;
    QLabel *label_3;
    QCheckBox *hashfile_checkbox;
    QCheckBox *headers_checkbox;
    QCheckBox *equal_counts;
    QFrame *line_2;
    QCheckBox *good_check;
    QCheckBox *bad_check;
    QCheckBox *redirect_check;
    QCheckBox *regular_check;
    QCheckBox *multiple_checkbox;
    QCheckBox *titles_checkbox;
    QWidget *tab_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(531, 687);
        MainWindow->setWindowOpacity(1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        wiki_image = new QLabel(centralWidget);
        wiki_image->setObjectName(QStringLiteral("wiki_image"));
        wiki_image->setGeometry(QRect(190, -10, 231, 171));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 180, 511, 461));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        articles_per_file = new QSpinBox(tab);
        articles_per_file->setObjectName(QStringLiteral("articles_per_file"));
        articles_per_file->setGeometry(QRect(16, 280, 70, 24));
        articles_per_file->setMinimum(1);
        articles_per_file->setMaximum(250);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 284, 151, 16));
        parse_txt_start_button = new QPushButton(tab);
        parse_txt_start_button->setObjectName(QStringLiteral("parse_txt_start_button"));
        parse_txt_start_button->setGeometry(QRect(170, 380, 151, 32));
        create_file_system = new QCheckBox(tab);
        create_file_system->setObjectName(QStringLiteral("create_file_system"));
        create_file_system->setGeometry(QRect(10, 240, 161, 20));
        create_file_system->setToolTipDuration(-1);
        create_file_system->setCheckable(true);
        create_file_system->setChecked(true);
        parse_formatting = new QCheckBox(tab);
        parse_formatting->setObjectName(QStringLiteral("parse_formatting"));
        parse_formatting->setGeometry(QRect(10, 22, 156, 20));
        directory_input = new QLineEdit(tab);
        directory_input->setObjectName(QStringLiteral("directory_input"));
        directory_input->setGeometry(QRect(370, 240, 110, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 320, 131, 16));
        datadump_input = new QLineEdit(tab);
        datadump_input->setObjectName(QStringLiteral("datadump_input"));
        datadump_input->setGeometry(QRect(370, 317, 110, 21));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(194, 236, 161, 32));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(193, 314, 160, 32));
        warning_label = new QLabel(tab);
        warning_label->setObjectName(QStringLiteral("warning_label"));
        warning_label->setGeometry(QRect(10, 353, 471, 16));
        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 183, 471, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tot_art_box = new QSpinBox(tab);
        tot_art_box->setObjectName(QStringLiteral("tot_art_box"));
        tot_art_box->setGeometry(QRect(10, 80, 91, 21));
        tot_art_box->setMinimum(1);
        tot_art_box->setMaximum(2000000);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(114, 82, 161, 16));
        hashfile_checkbox = new QCheckBox(tab);
        hashfile_checkbox->setObjectName(QStringLiteral("hashfile_checkbox"));
        hashfile_checkbox->setGeometry(QRect(10, 210, 131, 21));
        headers_checkbox = new QCheckBox(tab);
        headers_checkbox->setObjectName(QStringLiteral("headers_checkbox"));
        headers_checkbox->setGeometry(QRect(10, 120, 181, 20));
        equal_counts = new QCheckBox(tab);
        equal_counts->setObjectName(QStringLiteral("equal_counts"));
        equal_counts->setGeometry(QRect(310, 26, 181, 20));
        line_2 = new QFrame(tab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(280, 30, 16, 141));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        good_check = new QCheckBox(tab);
        good_check->setObjectName(QStringLiteral("good_check"));
        good_check->setGeometry(QRect(310, 63, 151, 20));
        bad_check = new QCheckBox(tab);
        bad_check->setObjectName(QStringLiteral("bad_check"));
        bad_check->setGeometry(QRect(310, 90, 151, 20));
        redirect_check = new QCheckBox(tab);
        redirect_check->setObjectName(QStringLiteral("redirect_check"));
        redirect_check->setGeometry(QRect(310, 117, 171, 20));
        regular_check = new QCheckBox(tab);
        regular_check->setObjectName(QStringLiteral("regular_check"));
        regular_check->setGeometry(QRect(310, 144, 161, 20));
        multiple_checkbox = new QCheckBox(tab);
        multiple_checkbox->setObjectName(QStringLiteral("multiple_checkbox"));
        multiple_checkbox->setGeometry(QRect(10, 150, 211, 20));
        titles_checkbox = new QCheckBox(tab);
        titles_checkbox->setObjectName(QStringLiteral("titles_checkbox"));
        titles_checkbox->setGeometry(QRect(10, 50, 171, 20));
        tabWidget->addTab(tab, QString());
        parse_txt_start_button->raise();
        create_file_system->raise();
        parse_formatting->raise();
        label->raise();
        articles_per_file->raise();
        directory_input->raise();
        label_2->raise();
        datadump_input->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        warning_label->raise();
        line->raise();
        tot_art_box->raise();
        label_3->raise();
        hashfile_checkbox->raise();
        headers_checkbox->raise();
        equal_counts->raise();
        line_2->raise();
        good_check->raise();
        bad_check->raise();
        redirect_check->raise();
        regular_check->raise();
        multiple_checkbox->raise();
        titles_checkbox->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(create_file_system, SIGNAL(clicked()), directory_input, SLOT(setFocus()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WikiClassify Parsing Module", 0));
        wiki_image->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Desired Articles per File", 0));
        parse_txt_start_button->setText(QApplication::translate("MainWindow", "Start Parsing", 0));
        create_file_system->setText(QApplication::translate("MainWindow", "Create new filesystem?", 0));
        parse_formatting->setText(QApplication::translate("MainWindow", "Parse out formatting?", 0));
        directory_input->setText(QString());
        directory_input->setPlaceholderText(QApplication::translate("MainWindow", "...", 0));
        label_2->setText(QApplication::translate("MainWindow", "Data Dump XML File", 0));
        datadump_input->setText(QString());
        datadump_input->setPlaceholderText(QApplication::translate("MainWindow", "...", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Select Base Directory", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Select Data Dump File", 0));
        warning_label->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Total Articles to Compile", 0));
        hashfile_checkbox->setText(QApplication::translate("MainWindow", "Create Hashfile?", 0));
        headers_checkbox->setText(QApplication::translate("MainWindow", "Include Article Headers?", 0));
        equal_counts->setText(QApplication::translate("MainWindow", "Ensure equal class counts", 0));
        good_check->setText(QApplication::translate("MainWindow", "Save 'Good' Articles", 0));
        bad_check->setText(QApplication::translate("MainWindow", "Save 'Bad' Articles", 0));
        redirect_check->setText(QApplication::translate("MainWindow", "Save 'Redirect' Articles", 0));
        regular_check->setText(QApplication::translate("MainWindow", "Save 'Regular' Articles", 0));
        multiple_checkbox->setText(QApplication::translate("MainWindow", "Folder for Each Classification", 0));
        titles_checkbox->setText(QApplication::translate("MainWindow", "Specified Titles Only", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Parse (txt)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Parse (HTML)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
