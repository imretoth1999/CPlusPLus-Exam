/********************************************************************************
** Form generated from reading UI file 'ExamenOOP.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMENOOP_H
#define UI_EXAMENOOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamenOOPClass
{
public:
    QWidget *centralWidget;
    QListWidget *mainThing;
    QPushButton *sterge;
    QPushButton *update;
    QPushButton *add;
    QLineEdit *des;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ExamenOOPClass)
    {
        if (ExamenOOPClass->objectName().isEmpty())
            ExamenOOPClass->setObjectName(QStringLiteral("ExamenOOPClass"));
        ExamenOOPClass->resize(600, 400);
        centralWidget = new QWidget(ExamenOOPClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mainThing = new QListWidget(centralWidget);
        mainThing->setObjectName(QStringLiteral("mainThing"));
        mainThing->setGeometry(QRect(20, 30, 331, 221));
        sterge = new QPushButton(centralWidget);
        sterge->setObjectName(QStringLiteral("sterge"));
        sterge->setGeometry(QRect(420, 160, 75, 23));
        update = new QPushButton(centralWidget);
        update->setObjectName(QStringLiteral("update"));
        update->setGeometry(QRect(420, 230, 75, 23));
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(420, 110, 75, 23));
        des = new QLineEdit(centralWidget);
        des->setObjectName(QStringLiteral("des"));
        des->setGeometry(QRect(410, 80, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 80, 51, 16));
        ExamenOOPClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ExamenOOPClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        ExamenOOPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ExamenOOPClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ExamenOOPClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ExamenOOPClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ExamenOOPClass->setStatusBar(statusBar);

        retranslateUi(ExamenOOPClass);

        QMetaObject::connectSlotsByName(ExamenOOPClass);
    } // setupUi

    void retranslateUi(QMainWindow *ExamenOOPClass)
    {
        ExamenOOPClass->setWindowTitle(QApplication::translate("ExamenOOPClass", "ExamenOOP", nullptr));
        sterge->setText(QApplication::translate("ExamenOOPClass", "delete", nullptr));
        update->setText(QApplication::translate("ExamenOOPClass", "resolve", nullptr));
        add->setText(QApplication::translate("ExamenOOPClass", "add", nullptr));
        label->setText(QApplication::translate("ExamenOOPClass", "description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamenOOPClass: public Ui_ExamenOOPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMENOOP_H
