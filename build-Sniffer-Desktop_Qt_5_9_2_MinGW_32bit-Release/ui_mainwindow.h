/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *showWidget;
    QLabel *label;
    QComboBox *netDevsCombo;
    QLabel *label_2;
    QPushButton *startBtn;
    QPushButton *finishBtn;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *udpEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *icmpEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *httpEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *arpEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *ipv4Edit;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *otherEdit;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QLineEdit *totalEdit;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *tcpEdit;
    QTreeWidget *protoWidget;
    QTextEdit *textEdit;
    QLineEdit *filterLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1164, 800);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        showWidget = new QTableWidget(centralWidget);
        showWidget->setObjectName(QStringLiteral("showWidget"));
        showWidget->setGeometry(QRect(40, 130, 1091, 271));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(41, 21, 61, 21));
        netDevsCombo = new QComboBox(centralWidget);
        netDevsCombo->setObjectName(QStringLiteral("netDevsCombo"));
        netDevsCombo->setGeometry(QRect(110, 20, 511, 22));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 60, 51, 21));
        startBtn = new QPushButton(centralWidget);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        startBtn->setGeometry(QRect(690, 50, 121, 31));
        finishBtn = new QPushButton(centralWidget);
        finishBtn->setObjectName(QStringLiteral("finishBtn"));
        finishBtn->setGeometry(QRect(830, 50, 121, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 600, 131, 21));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 660, 171, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        udpEdit = new QLineEdit(layoutWidget);
        udpEdit->setObjectName(QStringLiteral("udpEdit"));
        udpEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(udpEdit);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(360, 690, 171, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        icmpEdit = new QLineEdit(layoutWidget1);
        icmpEdit->setObjectName(QStringLiteral("icmpEdit"));
        icmpEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(icmpEdit);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(560, 630, 171, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        httpEdit = new QLineEdit(layoutWidget2);
        httpEdit->setObjectName(QStringLiteral("httpEdit"));
        httpEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(httpEdit);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(560, 660, 171, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        arpEdit = new QLineEdit(layoutWidget3);
        arpEdit->setObjectName(QStringLiteral("arpEdit"));
        arpEdit->setReadOnly(true);

        horizontalLayout_5->addWidget(arpEdit);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(560, 690, 171, 24));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        ipv4Edit = new QLineEdit(layoutWidget4);
        ipv4Edit->setObjectName(QStringLiteral("ipv4Edit"));
        ipv4Edit->setReadOnly(true);

        horizontalLayout_8->addWidget(ipv4Edit);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(760, 630, 171, 24));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget5);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        otherEdit = new QLineEdit(layoutWidget5);
        otherEdit->setObjectName(QStringLiteral("otherEdit"));
        otherEdit->setReadOnly(true);

        horizontalLayout_9->addWidget(otherEdit);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(760, 660, 171, 24));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget6);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_10->addWidget(label_14);

        totalEdit = new QLineEdit(layoutWidget6);
        totalEdit->setObjectName(QStringLiteral("totalEdit"));
        totalEdit->setReadOnly(true);

        horizontalLayout_10->addWidget(totalEdit);

        layoutWidget7 = new QWidget(centralWidget);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(360, 630, 171, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget7);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget7);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        tcpEdit = new QLineEdit(layoutWidget7);
        tcpEdit->setObjectName(QStringLiteral("tcpEdit"));
        tcpEdit->setReadOnly(true);

        horizontalLayout->addWidget(tcpEdit);

        protoWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        protoWidget->setHeaderItem(__qtreewidgetitem);
        protoWidget->setObjectName(QStringLiteral("protoWidget"));
        protoWidget->setGeometry(QRect(40, 410, 311, 311));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(360, 413, 771, 191));
        filterLineEdit = new QLineEdit(centralWidget);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));
        filterLineEdit->setGeometry(QRect(110, 60, 511, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1164, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\275\221\345\215\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\247\204\345\210\231", Q_NULLPTR));
        startBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\215\225\350\216\267", Q_NULLPTR));
        finishBtn->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\346\215\225\350\216\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\214\205\347\273\237\350\256\241", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "UDP\345\214\205    ", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "ICMP\345\214\205   ", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "HTTP\345\214\205   ", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "ARP\345\214\205    ", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "IPV4\345\214\205   ", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\205\266\344\273\226     ", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\345\220\210\350\256\241     ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "TCP\345\214\205    ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
