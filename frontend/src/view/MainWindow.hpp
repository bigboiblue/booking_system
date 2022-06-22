/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *leftBar;
    QVBoxLayout *verticalLayout_3;
    QLabel *leftBarTitle;
    QScrollArea *leftBarScrollArea;
    QWidget *leftBarScrollAreaContents;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *rightBar;
    QVBoxLayout *verticalLayout_4;
    QLabel *rightBarTitle;
    QScrollArea *rightBarScrollArea;
    QWidget *rightBarScrollAreaContents;
    QVBoxLayout *verticalLayout_8;
    QLabel *availableTitle;
    QWidget *availableList;
    QVBoxLayout *verticalLayout_9;
    QWidget *availableItem_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QWidget *availableItem_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_4;
    QWidget *availableItem_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_5;
    QWidget *availableItem_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_7;
    QWidget *availableItem;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *availableItem_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_9;
    QWidget *availableItem_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_10;
    QWidget *availableItem_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_6;
    QLabel *unavailableTitle;
    QTableWidget *unavailableTable;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(805, 597);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leftBar = new QWidget(centralwidget);
        leftBar->setObjectName(QString::fromUtf8("leftBar"));
        leftBar->setMaximumSize(QSize(250, 16777215));
        leftBar->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(leftBar);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        leftBarTitle = new QLabel(leftBar);
        leftBarTitle->setObjectName(QString::fromUtf8("leftBarTitle"));
        leftBarTitle->setMinimumSize(QSize(0, 50));
        leftBarTitle->setMaximumSize(QSize(16777215, 50));
        leftBarTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(225, 225, 225);\n"
"	font-size: 13pt;\n"
"}"));
        leftBarTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(leftBarTitle);

        leftBarScrollArea = new QScrollArea(leftBar);
        leftBarScrollArea->setObjectName(QString::fromUtf8("leftBarScrollArea"));
        leftBarScrollArea->setWidgetResizable(true);
        leftBarScrollAreaContents = new QWidget();
        leftBarScrollAreaContents->setObjectName(QString::fromUtf8("leftBarScrollAreaContents"));
        leftBarScrollAreaContents->setGeometry(QRect(0, 0, 213, 1030));
        verticalLayout_5 = new QVBoxLayout(leftBarScrollAreaContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(leftBarScrollAreaContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 250));
        label_6->setMaximumSize(QSize(16777215, 250));

        verticalLayout_5->addWidget(label_6);

        label = new QLabel(leftBarScrollAreaContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 250));
        label->setMaximumSize(QSize(16777215, 250));

        verticalLayout_5->addWidget(label);

        label_3 = new QLabel(leftBarScrollAreaContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 250));
        label_3->setMaximumSize(QSize(16777215, 250));

        verticalLayout_5->addWidget(label_3);

        label_2 = new QLabel(leftBarScrollAreaContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 250));
        label_2->setMaximumSize(QSize(16777215, 250));

        verticalLayout_5->addWidget(label_2);

        leftBarScrollArea->setWidget(leftBarScrollAreaContents);

        verticalLayout_3->addWidget(leftBarScrollArea);


        horizontalLayout_2->addWidget(leftBar);

        rightBar = new QWidget(centralwidget);
        rightBar->setObjectName(QString::fromUtf8("rightBar"));
        rightBar->setAutoFillBackground(false);
        verticalLayout_4 = new QVBoxLayout(rightBar);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        rightBarTitle = new QLabel(rightBar);
        rightBarTitle->setObjectName(QString::fromUtf8("rightBarTitle"));
        rightBarTitle->setMinimumSize(QSize(0, 50));
        rightBarTitle->setMaximumSize(QSize(16777215, 50));
        rightBarTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(225, 225, 225);\n"
"	font-size: 13pt;\n"
"}"));
        rightBarTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(rightBarTitle);

        rightBarScrollArea = new QScrollArea(rightBar);
        rightBarScrollArea->setObjectName(QString::fromUtf8("rightBarScrollArea"));
        rightBarScrollArea->setWidgetResizable(true);
        rightBarScrollAreaContents = new QWidget();
        rightBarScrollAreaContents->setObjectName(QString::fromUtf8("rightBarScrollAreaContents"));
        rightBarScrollAreaContents->setGeometry(QRect(0, 0, 500, 696));
        verticalLayout_8 = new QVBoxLayout(rightBarScrollAreaContents);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        availableTitle = new QLabel(rightBarScrollAreaContents);
        availableTitle->setObjectName(QString::fromUtf8("availableTitle"));
        availableTitle->setMinimumSize(QSize(0, 50));
        availableTitle->setMaximumSize(QSize(16777215, 50));

        verticalLayout_8->addWidget(availableTitle);

        availableList = new QWidget(rightBarScrollAreaContents);
        availableList->setObjectName(QString::fromUtf8("availableList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(availableList->sizePolicy().hasHeightForWidth());
        availableList->setSizePolicy(sizePolicy);
        verticalLayout_9 = new QVBoxLayout(availableList);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        availableItem_2 = new QWidget(availableList);
        availableItem_2->setObjectName(QString::fromUtf8("availableItem_2"));
        availableItem_2->setMinimumSize(QSize(0, 40));
        availableItem_2->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_3 = new QHBoxLayout(availableItem_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 20, -1);
        label_5 = new QLabel(availableItem_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(availableItem_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_9->addWidget(availableItem_2);

        availableItem_3 = new QWidget(availableList);
        availableItem_3->setObjectName(QString::fromUtf8("availableItem_3"));
        availableItem_3->setMinimumSize(QSize(0, 40));
        availableItem_3->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_5 = new QHBoxLayout(availableItem_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, -1, 20, -1);
        label_12 = new QLabel(availableItem_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(label_12);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_4 = new QPushButton(availableItem_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);


        verticalLayout_9->addWidget(availableItem_3);

        availableItem_4 = new QWidget(availableList);
        availableItem_4->setObjectName(QString::fromUtf8("availableItem_4"));
        availableItem_4->setMinimumSize(QSize(0, 40));
        availableItem_4->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_6 = new QHBoxLayout(availableItem_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(20, -1, 20, -1);
        label_13 = new QLabel(availableItem_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(0, 0));

        horizontalLayout_6->addWidget(label_13);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        pushButton_5 = new QPushButton(availableItem_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_6->addWidget(pushButton_5);


        verticalLayout_9->addWidget(availableItem_4);

        availableItem_6 = new QWidget(availableList);
        availableItem_6->setObjectName(QString::fromUtf8("availableItem_6"));
        availableItem_6->setMinimumSize(QSize(0, 40));
        availableItem_6->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_8 = new QHBoxLayout(availableItem_6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(20, -1, 20, -1);
        label_15 = new QLabel(availableItem_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(0, 0));

        horizontalLayout_8->addWidget(label_15);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        pushButton_7 = new QPushButton(availableItem_6);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_8->addWidget(pushButton_7);


        verticalLayout_9->addWidget(availableItem_6);

        availableItem = new QWidget(availableList);
        availableItem->setObjectName(QString::fromUtf8("availableItem"));
        availableItem->setMinimumSize(QSize(0, 40));
        availableItem->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(availableItem);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        label_4 = new QLabel(availableItem);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(availableItem);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_9->addWidget(availableItem);

        availableItem_7 = new QWidget(availableList);
        availableItem_7->setObjectName(QString::fromUtf8("availableItem_7"));
        availableItem_7->setMinimumSize(QSize(0, 40));
        availableItem_7->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_10 = new QHBoxLayout(availableItem_7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(20, -1, 20, -1);
        label_17 = new QLabel(availableItem_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(0, 0));

        horizontalLayout_10->addWidget(label_17);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        pushButton_9 = new QPushButton(availableItem_7);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_10->addWidget(pushButton_9);


        verticalLayout_9->addWidget(availableItem_7);

        availableItem_8 = new QWidget(availableList);
        availableItem_8->setObjectName(QString::fromUtf8("availableItem_8"));
        availableItem_8->setMinimumSize(QSize(0, 40));
        availableItem_8->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_11 = new QHBoxLayout(availableItem_8);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(20, -1, 20, -1);
        label_18 = new QLabel(availableItem_8);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(0, 0));

        horizontalLayout_11->addWidget(label_18);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        pushButton_10 = new QPushButton(availableItem_8);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_11->addWidget(pushButton_10);


        verticalLayout_9->addWidget(availableItem_8);

        availableItem_5 = new QWidget(availableList);
        availableItem_5->setObjectName(QString::fromUtf8("availableItem_5"));
        availableItem_5->setMinimumSize(QSize(0, 40));
        availableItem_5->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_7 = new QHBoxLayout(availableItem_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(20, -1, 20, -1);
        label_14 = new QLabel(availableItem_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(0, 0));

        horizontalLayout_7->addWidget(label_14);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        pushButton_6 = new QPushButton(availableItem_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_7->addWidget(pushButton_6);


        verticalLayout_9->addWidget(availableItem_5);


        verticalLayout_8->addWidget(availableList);

        unavailableTitle = new QLabel(rightBarScrollAreaContents);
        unavailableTitle->setObjectName(QString::fromUtf8("unavailableTitle"));
        unavailableTitle->setMinimumSize(QSize(0, 50));
        unavailableTitle->setMaximumSize(QSize(16777215, 50));

        verticalLayout_8->addWidget(unavailableTitle);

        unavailableTable = new QTableWidget(rightBarScrollAreaContents);
        if (unavailableTable->columnCount() < 3)
            unavailableTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        unavailableTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        unavailableTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        unavailableTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (unavailableTable->rowCount() < 1)
            unavailableTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        unavailableTable->setItem(0, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        unavailableTable->setItem(0, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        unavailableTable->setItem(0, 2, __qtablewidgetitem5);
        unavailableTable->setObjectName(QString::fromUtf8("unavailableTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(unavailableTable->sizePolicy().hasHeightForWidth());
        unavailableTable->setSizePolicy(sizePolicy1);
        unavailableTable->horizontalHeader()->setCascadingSectionResizes(false);
        unavailableTable->horizontalHeader()->setMinimumSectionSize(100);
        unavailableTable->horizontalHeader()->setDefaultSectionSize(150);
        unavailableTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        unavailableTable->horizontalHeader()->setStretchLastSection(true);
        unavailableTable->verticalHeader()->setVisible(false);

        verticalLayout_8->addWidget(unavailableTable);

        rightBarScrollArea->setWidget(rightBarScrollAreaContents);

        verticalLayout_4->addWidget(rightBarScrollArea);


        horizontalLayout_2->addWidget(rightBar);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Booking System", nullptr));
        leftBarTitle->setText(QCoreApplication::translate("MainWindow", "Categories", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        rightBarTitle->setText(QCoreApplication::translate("MainWindow", "Devices", nullptr));
        availableTitle->setText(QCoreApplication::translate("MainWindow", "Available", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Device 2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Device 2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Device 2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Device 2", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Device 2", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Device 2", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Device 2", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Device 2", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Book", nullptr));
        unavailableTitle->setText(QCoreApplication::translate("MainWindow", "Unavailable", nullptr));
        QTableWidgetItem *___qtablewidgetitem = unavailableTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Device Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = unavailableTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = unavailableTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Next Available", nullptr));

        const bool __sortingEnabled = unavailableTable->isSortingEnabled();
        unavailableTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = unavailableTable->item(0, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Device 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = unavailableTable->item(0, 1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Kyle ", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = unavailableTable->item(0, 2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "22/06/22", nullptr));
        unavailableTable->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
