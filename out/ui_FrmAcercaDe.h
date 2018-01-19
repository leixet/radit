/********************************************************************************
** Form generated from reading UI file 'FrmAcercaDe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMACERCADE_H
#define UI_FRMACERCADE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_FrmAcercaDe
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QPushButton *BtnCerrar;

    void setupUi(QDialog *FrmAcercaDe)
    {
        if (FrmAcercaDe->objectName().isEmpty())
            FrmAcercaDe->setObjectName(QString::fromUtf8("FrmAcercaDe"));
        FrmAcercaDe->resize(340, 500);
        FrmAcercaDe->setStyleSheet(QString::fromUtf8("  background-color: rgb(32, 39, 47);"));
        label = new QLabel(FrmAcercaDe);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 41, 31));
        label->setStyleSheet(QString::fromUtf8("image: url(:/general/iconos/cubo copy.png);"));
        label_2 = new QLabel(FrmAcercaDe);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 20, 261, 41));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 0);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textBrowser = new QTextBrowser(FrmAcercaDe);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 60, 338, 396));
        textBrowser->setStyleSheet(QString::fromUtf8("color: rgb(46, 187, 247);\n"
"background-color: rgb(0, 0, 0);"));
        textBrowser->setOpenExternalLinks(true);
        BtnCerrar = new QPushButton(FrmAcercaDe);
        BtnCerrar->setObjectName(QString::fromUtf8("BtnCerrar"));
        BtnCerrar->setGeometry(QRect(250, 470, 75, 23));
        BtnCerrar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(FrmAcercaDe);
        QObject::connect(BtnCerrar, SIGNAL(clicked()), FrmAcercaDe, SLOT(close()));

        QMetaObject::connectSlotsByName(FrmAcercaDe);
    } // setupUi

    void retranslateUi(QDialog *FrmAcercaDe)
    {
        FrmAcercaDe->setWindowTitle(QApplication::translate("FrmAcercaDe", "Quant a...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrmAcercaDe", " Radit v.1.0.4beta (edici\303\263 Linkat-Softcatal\303\240)", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("FrmAcercaDe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600;\">Copyright (C) 2010 Victor Algaba </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">Aquesta aplicaci\303\263 \303\251s programari lliure: podeu redistribuir-lo i/o modificar-lo seguint els termes de la Llic\303\250ncia P\303\272blica General GNU publicada per la Fundaci\303\263 pel Programari Lliure, ja sigui la versi\303\263 3 d'aque"
                        "sta llic\303\250ncia, o (a elecci\303\263 vostra) qualsevol versi\303\263 posterior. Aquest programa es distribueix amb l'esperan\303\247a que sigui \303\272til, per\303\262 SENSE CAP GARANTIA; ni tan sols la garantia impl\303\255cita mercantil o d'aptitud per a un prop\303\262sit determinat. Consulteu els detalls de la Llic\303\250ncia P\303\272blica General GNU per obtenir una informaci\303\263 m\303\251s detallada. Haur\303\255eu d'haver rebut una c\303\262pia de la Llic\303\250ncia P\303\272blica General GNU amb aquesta aplicaci\303\263. En cas contrari, consulteu </span><a href=\"http://www.gnu.org/licenses/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#f0f0f0;\">http://www.gnu.org/licenses</span></a><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; color:#f0f0f0;\">.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2"
                        "'; font-size:8pt;\">L'APLICACI\303\223 NO T\303\211 CAP GARANTIA, FINS ELS L\303\215MITS PERMESOS PER LES LLEIS APLICABLES. EXCEPTE QUAN S'ESTABLEIXI EL CONTRARI PER ESCRIT, EL PROPIETARI DEL COPYRIGHT I/O TERCERS PROPORCIONARAN L'APLICACI\303\223 &quot;TAL COM \303\211S&quot; SENSE GARANTIA DE CAP TIPUS, JA SIGUI EXPL\303\215CITA O IMPL\303\215CITA, INCLOENT, PER\303\222 SENSE LIMITAR-SE A, LES GARANTIES IMPL\303\215CITES MERCANTILS I D'APTITUD PER A UN PROP\303\222SIT DETERMINAT. ASSUMIU QUALSEVOL RISC RELATIU A LA QUALITAT I RENDIMENT DE L'APLICACI\303\223. SI L'APLICACI\303\223 FORA DEFECTUOSA, ASSUMIU QUALSEVOL COST DE SERVEI, REPARACI\303\223 O CORRECCI\303\223. </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.radit.org\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; text-decoration: underline; color:#ffffff;\">www.radit.org</span></a><span style=\" font-family:'MS"
                        " Shell Dlg 2'; font-size:8pt; color:#ffffff;\"> </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        BtnCerrar->setText(QApplication::translate("FrmAcercaDe", "Cerrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmAcercaDe: public Ui_FrmAcercaDe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMACERCADE_H
