/********************************************************************************
** Form generated from reading UI file 'Dardulator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DARDULATOR_H
#define UI_DARDULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DardulatorClass
{
public:
    QAction *actionCopy;
    QAction *actionPaste;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *btnDivide;
    QPushButton *btnMultiply;
    QLabel *lblOverflow;
    QLabel *lblMemory;
    QPushButton *btn1;
    QPushButton *btnPi;
    QPushButton *btnMSet;
    QPushButton *btnMRecall;
    QPushButton *btnSqrt;
    QPushButton *btnBackspace;
    QPushButton *btn4;
    QPushButton *btnMPlus;
    QPushButton *btn6;
    QPushButton *btnCE;
    QPushButton *btn9;
    QPushButton *btn8;
    QPushButton *btnMinus;
    QPushButton *btn2;
    QPushButton *btnSign;
    QPushButton *btnPlus;
    QPushButton *btn0;
    QPushButton *btnDot;
    QPushButton *btnPower;
    QPushButton *btnC;
    QPushButton *btn7;
    QLabel *lblError;
    QPushButton *btn3;
    QPushButton *btnMMinus;
    QPushButton *btnMClear;
    QPushButton *btnEqual;
    QPushButton *pushButton;
    QPushButton *btn5;
    QLineEdit *txtDisplay;
    QMenuBar *menuBar;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DardulatorClass)
    {
        if (DardulatorClass->objectName().isEmpty())
            DardulatorClass->setObjectName(QStringLiteral("DardulatorClass"));
        DardulatorClass->resize(560, 399);
        actionCopy = new QAction(DardulatorClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(DardulatorClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        centralWidget = new QWidget(DardulatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 401, 325));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnDivide = new QPushButton(gridLayoutWidget);
        btnDivide->setObjectName(QStringLiteral("btnDivide"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDivide->sizePolicy().hasHeightForWidth());
        btnDivide->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnDivide, 4, 3, 1, 1);

        btnMultiply = new QPushButton(gridLayoutWidget);
        btnMultiply->setObjectName(QStringLiteral("btnMultiply"));
        sizePolicy.setHeightForWidth(btnMultiply->sizePolicy().hasHeightForWidth());
        btnMultiply->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnMultiply, 5, 3, 1, 1);

        lblOverflow = new QLabel(gridLayoutWidget);
        lblOverflow->setObjectName(QStringLiteral("lblOverflow"));
        QFont font;
        font.setPointSize(10);
        lblOverflow->setFont(font);
        lblOverflow->setFrameShape(QFrame::Box);
        lblOverflow->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblOverflow, 1, 3, 1, 1);

        lblMemory = new QLabel(gridLayoutWidget);
        lblMemory->setObjectName(QStringLiteral("lblMemory"));
        lblMemory->setFont(font);
        lblMemory->setFrameShape(QFrame::Box);
        lblMemory->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblMemory, 1, 2, 1, 1);

        btn1 = new QPushButton(gridLayoutWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn1, 6, 0, 1, 1);

        btnPi = new QPushButton(gridLayoutWidget);
        btnPi->setObjectName(QStringLiteral("btnPi"));
        sizePolicy.setHeightForWidth(btnPi->sizePolicy().hasHeightForWidth());
        btnPi->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnPi, 5, 4, 1, 1);

        btnMSet = new QPushButton(gridLayoutWidget);
        btnMSet->setObjectName(QStringLiteral("btnMSet"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnMSet->sizePolicy().hasHeightForWidth());
        btnMSet->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btnMSet, 2, 2, 1, 1);

        btnMRecall = new QPushButton(gridLayoutWidget);
        btnMRecall->setObjectName(QStringLiteral("btnMRecall"));
        sizePolicy1.setHeightForWidth(btnMRecall->sizePolicy().hasHeightForWidth());
        btnMRecall->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btnMRecall, 2, 1, 1, 1);

        btnSqrt = new QPushButton(gridLayoutWidget);
        btnSqrt->setObjectName(QStringLiteral("btnSqrt"));
        sizePolicy.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnSqrt, 3, 4, 1, 1);

        btnBackspace = new QPushButton(gridLayoutWidget);
        btnBackspace->setObjectName(QStringLiteral("btnBackspace"));
        sizePolicy1.setHeightForWidth(btnBackspace->sizePolicy().hasHeightForWidth());
        btnBackspace->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btnBackspace, 3, 0, 1, 1);

        btn4 = new QPushButton(gridLayoutWidget);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn4, 5, 0, 1, 1);

        btnMPlus = new QPushButton(gridLayoutWidget);
        btnMPlus->setObjectName(QStringLiteral("btnMPlus"));
        sizePolicy1.setHeightForWidth(btnMPlus->sizePolicy().hasHeightForWidth());
        btnMPlus->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btnMPlus, 2, 3, 1, 1);

        btn6 = new QPushButton(gridLayoutWidget);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn6, 5, 2, 1, 1);

        btnCE = new QPushButton(gridLayoutWidget);
        btnCE->setObjectName(QStringLiteral("btnCE"));
        sizePolicy.setHeightForWidth(btnCE->sizePolicy().hasHeightForWidth());
        btnCE->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnCE, 3, 1, 1, 1);

        btn9 = new QPushButton(gridLayoutWidget);
        btn9->setObjectName(QStringLiteral("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn9, 4, 2, 1, 1);

        btn8 = new QPushButton(gridLayoutWidget);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn8, 4, 1, 1, 1);

        btnMinus = new QPushButton(gridLayoutWidget);
        btnMinus->setObjectName(QStringLiteral("btnMinus"));
        sizePolicy.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnMinus, 6, 3, 1, 1);

        btn2 = new QPushButton(gridLayoutWidget);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn2, 6, 1, 1, 1);

        btnSign = new QPushButton(gridLayoutWidget);
        btnSign->setObjectName(QStringLiteral("btnSign"));
        sizePolicy.setHeightForWidth(btnSign->sizePolicy().hasHeightForWidth());
        btnSign->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnSign, 7, 1, 1, 1);

        btnPlus = new QPushButton(gridLayoutWidget);
        btnPlus->setObjectName(QStringLiteral("btnPlus"));
        sizePolicy.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnPlus, 7, 3, 1, 1);

        btn0 = new QPushButton(gridLayoutWidget);
        btn0->setObjectName(QStringLiteral("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn0, 7, 0, 1, 1);

        btnDot = new QPushButton(gridLayoutWidget);
        btnDot->setObjectName(QStringLiteral("btnDot"));
        sizePolicy.setHeightForWidth(btnDot->sizePolicy().hasHeightForWidth());
        btnDot->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnDot, 7, 2, 1, 1);

        btnPower = new QPushButton(gridLayoutWidget);
        btnPower->setObjectName(QStringLiteral("btnPower"));
        sizePolicy.setHeightForWidth(btnPower->sizePolicy().hasHeightForWidth());
        btnPower->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnPower, 3, 3, 1, 1);

        btnC = new QPushButton(gridLayoutWidget);
        btnC->setObjectName(QStringLiteral("btnC"));
        sizePolicy.setHeightForWidth(btnC->sizePolicy().hasHeightForWidth());
        btnC->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnC, 3, 2, 1, 1);

        btn7 = new QPushButton(gridLayoutWidget);
        btn7->setObjectName(QStringLiteral("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn7, 4, 0, 1, 1);

        lblError = new QLabel(gridLayoutWidget);
        lblError->setObjectName(QStringLiteral("lblError"));
        lblError->setFont(font);
        lblError->setFrameShape(QFrame::Box);
        lblError->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblError, 1, 4, 1, 1);

        btn3 = new QPushButton(gridLayoutWidget);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn3, 6, 2, 1, 1);

        btnMMinus = new QPushButton(gridLayoutWidget);
        btnMMinus->setObjectName(QStringLiteral("btnMMinus"));
        sizePolicy1.setHeightForWidth(btnMMinus->sizePolicy().hasHeightForWidth());
        btnMMinus->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btnMMinus, 2, 4, 1, 1);

        btnMClear = new QPushButton(gridLayoutWidget);
        btnMClear->setObjectName(QStringLiteral("btnMClear"));
        sizePolicy1.setHeightForWidth(btnMClear->sizePolicy().hasHeightForWidth());
        btnMClear->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btnMClear, 2, 0, 1, 1);

        btnEqual = new QPushButton(gridLayoutWidget);
        btnEqual->setObjectName(QStringLiteral("btnEqual"));
        sizePolicy.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnEqual, 6, 4, 2, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton, 4, 4, 1, 1);

        btn5 = new QPushButton(gridLayoutWidget);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btn5, 5, 1, 1, 1);

        txtDisplay = new QLineEdit(gridLayoutWidget);
        txtDisplay->setObjectName(QStringLiteral("txtDisplay"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txtDisplay->sizePolicy().hasHeightForWidth());
        txtDisplay->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(12);
        txtDisplay->setFont(font1);
        txtDisplay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtDisplay->setReadOnly(true);

        gridLayout_2->addWidget(txtDisplay, 0, 0, 1, 5);

        gridLayout_2->setRowStretch(0, 40);
        gridLayout_2->setRowStretch(1, 30);
        gridLayout_2->setRowStretch(2, 30);
        gridLayout_2->setRowStretch(3, 30);
        gridLayout_2->setRowStretch(4, 30);
        gridLayout_2->setRowStretch(5, 30);
        gridLayout_2->setRowStretch(6, 30);
        gridLayout_2->setRowStretch(7, 30);
        gridLayout_2->setColumnStretch(0, 50);
        gridLayout_2->setColumnStretch(1, 50);
        gridLayout_2->setColumnStretch(2, 50);
        gridLayout_2->setColumnStretch(3, 50);
        gridLayout_2->setColumnStretch(4, 50);
        gridLayout_2->setColumnMinimumWidth(0, 50);
        gridLayout_2->setColumnMinimumWidth(1, 50);
        gridLayout_2->setColumnMinimumWidth(2, 50);
        gridLayout_2->setColumnMinimumWidth(3, 50);
        gridLayout_2->setColumnMinimumWidth(4, 50);
        gridLayout_2->setRowMinimumHeight(0, 40);
        gridLayout_2->setRowMinimumHeight(1, 30);
        gridLayout_2->setRowMinimumHeight(2, 30);
        gridLayout_2->setRowMinimumHeight(3, 30);
        gridLayout_2->setRowMinimumHeight(4, 30);
        gridLayout_2->setRowMinimumHeight(5, 30);
        gridLayout_2->setRowMinimumHeight(6, 30);
        gridLayout_2->setRowMinimumHeight(7, 30);
        DardulatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DardulatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 560, 21));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        DardulatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DardulatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DardulatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DardulatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DardulatorClass->setStatusBar(statusBar);

        menuBar->addAction(menuEdit->menuAction());
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);

        retranslateUi(DardulatorClass);

        QMetaObject::connectSlotsByName(DardulatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *DardulatorClass)
    {
        DardulatorClass->setWindowTitle(QApplication::translate("DardulatorClass", "Dardulator", nullptr));
        actionCopy->setText(QApplication::translate("DardulatorClass", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("DardulatorClass", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("DardulatorClass", "Paste", nullptr));
        btnDivide->setText(QApplication::translate("DardulatorClass", "/", nullptr));
        btnMultiply->setText(QApplication::translate("DardulatorClass", "x", nullptr));
        lblOverflow->setText(QApplication::translate("DardulatorClass", "O", nullptr));
        lblMemory->setText(QApplication::translate("DardulatorClass", "M", nullptr));
        btn1->setText(QApplication::translate("DardulatorClass", "1", nullptr));
#ifndef QT_NO_SHORTCUT
        btn1->setShortcut(QApplication::translate("DardulatorClass", "1", nullptr));
#endif // QT_NO_SHORTCUT
        btnPi->setText(QApplication::translate("DardulatorClass", "\317\200", nullptr));
        btnMSet->setText(QApplication::translate("DardulatorClass", "MS", nullptr));
#ifndef QT_NO_SHORTCUT
        btnMSet->setShortcut(QApplication::translate("DardulatorClass", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        btnMRecall->setText(QApplication::translate("DardulatorClass", "MR", nullptr));
#ifndef QT_NO_SHORTCUT
        btnMRecall->setShortcut(QApplication::translate("DardulatorClass", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        btnSqrt->setText(QApplication::translate("DardulatorClass", "\342\210\232", nullptr));
        btnBackspace->setText(QApplication::translate("DardulatorClass", "<--", nullptr));
#ifndef QT_NO_SHORTCUT
        btnBackspace->setShortcut(QApplication::translate("DardulatorClass", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        btn4->setText(QApplication::translate("DardulatorClass", "4", nullptr));
#ifndef QT_NO_SHORTCUT
        btn4->setShortcut(QApplication::translate("DardulatorClass", "4", nullptr));
#endif // QT_NO_SHORTCUT
        btnMPlus->setText(QApplication::translate("DardulatorClass", "M+", nullptr));
#ifndef QT_NO_SHORTCUT
        btnMPlus->setShortcut(QApplication::translate("DardulatorClass", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        btn6->setText(QApplication::translate("DardulatorClass", "6", nullptr));
#ifndef QT_NO_SHORTCUT
        btn6->setShortcut(QApplication::translate("DardulatorClass", "6", nullptr));
#endif // QT_NO_SHORTCUT
        btnCE->setText(QApplication::translate("DardulatorClass", "CE", nullptr));
        btn9->setText(QApplication::translate("DardulatorClass", "9", nullptr));
#ifndef QT_NO_SHORTCUT
        btn9->setShortcut(QApplication::translate("DardulatorClass", "9", nullptr));
#endif // QT_NO_SHORTCUT
        btn8->setText(QApplication::translate("DardulatorClass", "8", nullptr));
#ifndef QT_NO_SHORTCUT
        btn8->setShortcut(QApplication::translate("DardulatorClass", "8", nullptr));
#endif // QT_NO_SHORTCUT
        btnMinus->setText(QApplication::translate("DardulatorClass", "-", nullptr));
        btn2->setText(QApplication::translate("DardulatorClass", "2", nullptr));
#ifndef QT_NO_SHORTCUT
        btn2->setShortcut(QApplication::translate("DardulatorClass", "2", nullptr));
#endif // QT_NO_SHORTCUT
        btnSign->setText(QApplication::translate("DardulatorClass", "\302\261", nullptr));
        btnPlus->setText(QApplication::translate("DardulatorClass", "+", nullptr));
        btn0->setText(QApplication::translate("DardulatorClass", "0", nullptr));
#ifndef QT_NO_SHORTCUT
        btn0->setShortcut(QApplication::translate("DardulatorClass", "0", nullptr));
#endif // QT_NO_SHORTCUT
        btnDot->setText(QApplication::translate("DardulatorClass", ".", nullptr));
#ifndef QT_NO_SHORTCUT
        btnDot->setShortcut(QApplication::translate("DardulatorClass", ".", nullptr));
#endif // QT_NO_SHORTCUT
        btnPower->setText(QApplication::translate("DardulatorClass", "^", nullptr));
        btnC->setText(QApplication::translate("DardulatorClass", "C", nullptr));
        btn7->setText(QApplication::translate("DardulatorClass", "7", nullptr));
#ifndef QT_NO_SHORTCUT
        btn7->setShortcut(QApplication::translate("DardulatorClass", "7", nullptr));
#endif // QT_NO_SHORTCUT
        lblError->setText(QApplication::translate("DardulatorClass", "E", nullptr));
        btn3->setText(QApplication::translate("DardulatorClass", "3", nullptr));
#ifndef QT_NO_SHORTCUT
        btn3->setShortcut(QApplication::translate("DardulatorClass", "3", nullptr));
#endif // QT_NO_SHORTCUT
        btnMMinus->setText(QApplication::translate("DardulatorClass", "M-", nullptr));
#ifndef QT_NO_SHORTCUT
        btnMMinus->setShortcut(QApplication::translate("DardulatorClass", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        btnMClear->setText(QApplication::translate("DardulatorClass", "MC", nullptr));
#ifndef QT_NO_SHORTCUT
        btnMClear->setShortcut(QApplication::translate("DardulatorClass", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        btnEqual->setText(QApplication::translate("DardulatorClass", "=", nullptr));
        pushButton->setText(QApplication::translate("DardulatorClass", "1/x", nullptr));
        btn5->setText(QApplication::translate("DardulatorClass", "5", nullptr));
#ifndef QT_NO_SHORTCUT
        btn5->setShortcut(QApplication::translate("DardulatorClass", "5", nullptr));
#endif // QT_NO_SHORTCUT
        menuEdit->setTitle(QApplication::translate("DardulatorClass", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DardulatorClass: public Ui_DardulatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DARDULATOR_H
