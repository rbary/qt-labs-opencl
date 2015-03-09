/********************************************************************************
** Form generated from reading UI file 'beziermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEZIERMAINWINDOW_H
#define UI_BEZIERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "bezierwidget.h"

QT_BEGIN_NAMESPACE

class Ui_BezierMainWindow
{
public:
    QVBoxLayout *verticalLayout;
    BezierWidget *bezierWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *useOpenCL;
    QGroupBox *localWorkSize;
    QHBoxLayout *horizontalLayout;
    QRadioButton *localWorkSizeDefault;
    QRadioButton *localWorkSize1x1;
    QRadioButton *localWorkSize1x8;
    QRadioButton *localWorkSize8x1;
    QRadioButton *localWorkSize8x8;
    QRadioButton *localWorkSize16x16;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *BezierMainWindow)
    {
        if (BezierMainWindow->objectName().isEmpty())
            BezierMainWindow->setObjectName(QString::fromUtf8("BezierMainWindow"));
        BezierMainWindow->resize(619, 405);
        verticalLayout = new QVBoxLayout(BezierMainWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bezierWidget = new BezierWidget(BezierMainWindow);
        bezierWidget->setObjectName(QString::fromUtf8("bezierWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bezierWidget->sizePolicy().hasHeightForWidth());
        bezierWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(bezierWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        useOpenCL = new QCheckBox(BezierMainWindow);
        useOpenCL->setObjectName(QString::fromUtf8("useOpenCL"));

        horizontalLayout_2->addWidget(useOpenCL);

        localWorkSize = new QGroupBox(BezierMainWindow);
        localWorkSize->setObjectName(QString::fromUtf8("localWorkSize"));
        horizontalLayout = new QHBoxLayout(localWorkSize);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        localWorkSizeDefault = new QRadioButton(localWorkSize);
        localWorkSizeDefault->setObjectName(QString::fromUtf8("localWorkSizeDefault"));

        horizontalLayout->addWidget(localWorkSizeDefault);

        localWorkSize1x1 = new QRadioButton(localWorkSize);
        localWorkSize1x1->setObjectName(QString::fromUtf8("localWorkSize1x1"));

        horizontalLayout->addWidget(localWorkSize1x1);

        localWorkSize1x8 = new QRadioButton(localWorkSize);
        localWorkSize1x8->setObjectName(QString::fromUtf8("localWorkSize1x8"));

        horizontalLayout->addWidget(localWorkSize1x8);

        localWorkSize8x1 = new QRadioButton(localWorkSize);
        localWorkSize8x1->setObjectName(QString::fromUtf8("localWorkSize8x1"));

        horizontalLayout->addWidget(localWorkSize8x1);

        localWorkSize8x8 = new QRadioButton(localWorkSize);
        localWorkSize8x8->setObjectName(QString::fromUtf8("localWorkSize8x8"));

        horizontalLayout->addWidget(localWorkSize8x8);

        localWorkSize16x16 = new QRadioButton(localWorkSize);
        localWorkSize16x16->setObjectName(QString::fromUtf8("localWorkSize16x16"));

        horizontalLayout->addWidget(localWorkSize16x16);


        horizontalLayout_2->addWidget(localWorkSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(BezierMainWindow);

        QMetaObject::connectSlotsByName(BezierMainWindow);
    } // setupUi

    void retranslateUi(QWidget *BezierMainWindow)
    {
        BezierMainWindow->setWindowTitle(QApplication::translate("BezierMainWindow", "Bezier Patch", 0, QApplication::UnicodeUTF8));
        useOpenCL->setText(QApplication::translate("BezierMainWindow", "Use OpenCL", 0, QApplication::UnicodeUTF8));
        localWorkSize->setTitle(QApplication::translate("BezierMainWindow", "Local Work Size", 0, QApplication::UnicodeUTF8));
        localWorkSizeDefault->setText(QApplication::translate("BezierMainWindow", "Default", 0, QApplication::UnicodeUTF8));
        localWorkSize1x1->setText(QApplication::translate("BezierMainWindow", "1x1", 0, QApplication::UnicodeUTF8));
        localWorkSize1x8->setText(QApplication::translate("BezierMainWindow", "1x8", 0, QApplication::UnicodeUTF8));
        localWorkSize8x1->setText(QApplication::translate("BezierMainWindow", "8x1", 0, QApplication::UnicodeUTF8));
        localWorkSize8x8->setText(QApplication::translate("BezierMainWindow", "8x8", 0, QApplication::UnicodeUTF8));
        localWorkSize16x16->setText(QApplication::translate("BezierMainWindow", "16x16", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BezierMainWindow: public Ui_BezierMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEZIERMAINWINDOW_H
