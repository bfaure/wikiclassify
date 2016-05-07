/********************************************************************************
** Form generated from reading UI file 'progresswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSWINDOW_H
#define UI_PROGRESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_progresswindow
{
public:
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QLabel *articles_parsed_label;
    QLabel *total_articles_parsed;
    QLabel *done_label;
    QLabel *good_title;
    QLabel *good_title_2;
    QLabel *good_title_3;
    QLabel *good_title_4;
    QLabel *good_label;
    QLabel *bad_label;
    QLabel *reg_label;
    QLabel *redir_label;
    QLabel *image_label;
    QLabel *articles_parsed_label_2;
    QLabel *bytes_processed;

    void setupUi(QDialog *progresswindow)
    {
        if (progresswindow->objectName().isEmpty())
            progresswindow->setObjectName(QStringLiteral("progresswindow"));
        progresswindow->resize(541, 445);
        progressBar = new QProgressBar(progresswindow);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(50, 366, 441, 41));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        pushButton = new QPushButton(progresswindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 406, 113, 32));
        articles_parsed_label = new QLabel(progresswindow);
        articles_parsed_label->setObjectName(QStringLiteral("articles_parsed_label"));
        articles_parsed_label->setGeometry(QRect(40, 230, 131, 21));
        total_articles_parsed = new QLabel(progresswindow);
        total_articles_parsed->setObjectName(QStringLiteral("total_articles_parsed"));
        total_articles_parsed->setGeometry(QRect(190, 230, 161, 21));
        total_articles_parsed->setFrameShape(QFrame::StyledPanel);
        total_articles_parsed->setFrameShadow(QFrame::Plain);
        done_label = new QLabel(progresswindow);
        done_label->setObjectName(QStringLiteral("done_label"));
        done_label->setGeometry(QRect(30, 343, 461, 20));
        good_title = new QLabel(progresswindow);
        good_title->setObjectName(QStringLiteral("good_title"));
        good_title->setGeometry(QRect(20, 270, 101, 16));
        good_title_2 = new QLabel(progresswindow);
        good_title_2->setObjectName(QStringLiteral("good_title_2"));
        good_title_2->setGeometry(QRect(140, 270, 101, 16));
        good_title_3 = new QLabel(progresswindow);
        good_title_3->setObjectName(QStringLiteral("good_title_3"));
        good_title_3->setGeometry(QRect(270, 270, 101, 16));
        good_title_4 = new QLabel(progresswindow);
        good_title_4->setObjectName(QStringLiteral("good_title_4"));
        good_title_4->setGeometry(QRect(410, 270, 111, 16));
        good_label = new QLabel(progresswindow);
        good_label->setObjectName(QStringLiteral("good_label"));
        good_label->setGeometry(QRect(20, 300, 101, 21));
        good_label->setFrameShape(QFrame::StyledPanel);
        good_label->setFrameShadow(QFrame::Plain);
        bad_label = new QLabel(progresswindow);
        bad_label->setObjectName(QStringLiteral("bad_label"));
        bad_label->setGeometry(QRect(140, 300, 101, 21));
        bad_label->setFrameShape(QFrame::StyledPanel);
        bad_label->setFrameShadow(QFrame::Plain);
        reg_label = new QLabel(progresswindow);
        reg_label->setObjectName(QStringLiteral("reg_label"));
        reg_label->setGeometry(QRect(270, 300, 101, 21));
        reg_label->setFrameShape(QFrame::StyledPanel);
        reg_label->setFrameShadow(QFrame::Plain);
        redir_label = new QLabel(progresswindow);
        redir_label->setObjectName(QStringLiteral("redir_label"));
        redir_label->setGeometry(QRect(410, 300, 101, 21));
        redir_label->setFrameShape(QFrame::StyledPanel);
        redir_label->setFrameShadow(QFrame::Plain);
        image_label = new QLabel(progresswindow);
        image_label->setObjectName(QStringLiteral("image_label"));
        image_label->setGeometry(QRect(190, 25, 221, 161));
        articles_parsed_label_2 = new QLabel(progresswindow);
        articles_parsed_label_2->setObjectName(QStringLiteral("articles_parsed_label_2"));
        articles_parsed_label_2->setGeometry(QRect(40, 198, 141, 21));
        bytes_processed = new QLabel(progresswindow);
        bytes_processed->setObjectName(QStringLiteral("bytes_processed"));
        bytes_processed->setGeometry(QRect(190, 198, 161, 21));
        bytes_processed->setFrameShape(QFrame::StyledPanel);
        bytes_processed->setFrameShadow(QFrame::Plain);

        retranslateUi(progresswindow);

        QMetaObject::connectSlotsByName(progresswindow);
    } // setupUi

    void retranslateUi(QDialog *progresswindow)
    {
        progresswindow->setWindowTitle(QApplication::translate("progresswindow", "Parsing Information", 0));
        pushButton->setText(QApplication::translate("progresswindow", "View Folder", 0));
        articles_parsed_label->setText(QApplication::translate("progresswindow", "Total Articles Parsed", 0));
        total_articles_parsed->setText(QString());
        done_label->setText(QString());
        good_title->setText(QApplication::translate("progresswindow", "Good Articles", 0));
        good_title_2->setText(QApplication::translate("progresswindow", "Bad Articles", 0));
        good_title_3->setText(QApplication::translate("progresswindow", "Regular Articles", 0));
        good_title_4->setText(QApplication::translate("progresswindow", "Redirect Articles", 0));
        good_label->setText(QString());
        bad_label->setText(QString());
        reg_label->setText(QString());
        redir_label->setText(QString());
        image_label->setText(QString());
        articles_parsed_label_2->setText(QApplication::translate("progresswindow", "Total Bytes Processed", 0));
        bytes_processed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class progresswindow: public Ui_progresswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSWINDOW_H
