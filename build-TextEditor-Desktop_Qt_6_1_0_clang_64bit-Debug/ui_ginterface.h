/********************************************************************************
** Form generated from reading UI file 'ginterface.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GINTERFACE_H
#define UI_GINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ginterface
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Ginterface)
    {
        if (Ginterface->objectName().isEmpty())
            Ginterface->setObjectName(QString::fromUtf8("Ginterface"));
        Ginterface->resize(1148, 740);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/myappicoresources/myappico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/myappicoresources/myappico.ico"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/myappicoresources/myappico.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/myappicoresources/myappico.ico"), QSize(), QIcon::Disabled, QIcon::On);
        Ginterface->setWindowIcon(icon);
        actionNew = new QAction(Ginterface);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/file-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(Ginterface);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/folder-plus.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon2);
        actionSave_as = new QAction(Ginterface);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/save.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionSave_as->setIcon(icon3);
        actionPrint = new QAction(Ginterface);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/printer.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionPrint->setIcon(icon4);
        actionCopy = new QAction(Ginterface);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/copy.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(Ginterface);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/edit-2.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionPaste->setIcon(icon6);
        actionCut = new QAction(Ginterface);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/scissors.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionCut->setIcon(icon7);
        actionUndo = new QAction(Ginterface);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/arrow-left.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo->setIcon(icon8);
        actionRedo = new QAction(Ginterface);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/arrow-right.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo->setIcon(icon9);
        centralwidget = new QWidget(Ginterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(verticalLayout);

        Ginterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ginterface);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1148, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        Ginterface->setMenuBar(menubar);
        statusbar = new QStatusBar(Ginterface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Ginterface->setStatusBar(statusbar);
        toolBar = new QToolBar(Ginterface);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Ginterface->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionSave_as);
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);

        retranslateUi(Ginterface);

        QMetaObject::connectSlotsByName(Ginterface);
    } // setupUi

    void retranslateUi(QMainWindow *Ginterface)
    {
        Ginterface->setWindowTitle(QCoreApplication::translate("Ginterface", "Ginterface", nullptr));
        actionNew->setText(QCoreApplication::translate("Ginterface", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("Ginterface", "Open", nullptr));
        actionSave_as->setText(QCoreApplication::translate("Ginterface", "Save as", nullptr));
        actionPrint->setText(QCoreApplication::translate("Ginterface", "Print", nullptr));
        actionCopy->setText(QCoreApplication::translate("Ginterface", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("Ginterface", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("Ginterface", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("Ginterface", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("Ginterface", "Redo", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Ginterface", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Ginterface", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Ginterface", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ginterface: public Ui_Ginterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GINTERFACE_H
