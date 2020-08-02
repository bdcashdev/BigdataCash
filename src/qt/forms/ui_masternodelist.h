/********************************************************************************
** Form generated from reading UI file 'masternodelist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODELIST_H
#define UI_MASTERNODELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeList
{
public:
    QVBoxLayout *topLayout;
    QFrame *tabMyMasternodes;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_note;
    QLabel *updateNote;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidgetMyMasternodes;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *startButton;
    QPushButton *startAllButton;
    QPushButton *startMissingButton;
    QPushButton *UpdateButton;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *autoupdate_label;
    QLabel *secondsLabel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *MasternodeList)
    {
        if (MasternodeList->objectName().isEmpty())
            MasternodeList->setObjectName(QStringLiteral("MasternodeList"));
        MasternodeList->resize(767, 457);
        topLayout = new QVBoxLayout(MasternodeList);
        topLayout->setSpacing(0);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(35, 42, 35, 42);
        tabMyMasternodes = new QFrame(MasternodeList);
        tabMyMasternodes->setObjectName(QStringLiteral("tabMyMasternodes"));
        tabMyMasternodes->setLineWidth(0);
        verticalLayout = new QVBoxLayout(tabMyMasternodes);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_note = new QHBoxLayout();
        horizontalLayout_note->setObjectName(QStringLiteral("horizontalLayout_note"));
        horizontalLayout_note->setContentsMargins(-1, -1, -1, 0);
        updateNote = new QLabel(tabMyMasternodes);
        updateNote->setObjectName(QStringLiteral("updateNote"));

        horizontalLayout_note->addWidget(updateNote);


        verticalLayout_2->addLayout(horizontalLayout_note);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tableWidgetMyMasternodes = new QTableWidget(tabMyMasternodes);
        if (tableWidgetMyMasternodes->columnCount() < 7)
            tableWidgetMyMasternodes->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidgetMyMasternodes->setObjectName(QStringLiteral("tableWidgetMyMasternodes"));
        tableWidgetMyMasternodes->setMinimumSize(QSize(695, 0));
        QPalette palette;
        QBrush brush(QColor(51, 51, 51, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(85, 85, 85, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        tableWidgetMyMasternodes->setPalette(palette);
        tableWidgetMyMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMyMasternodes->setAlternatingRowColors(true);
        tableWidgetMyMasternodes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMyMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMyMasternodes->setSortingEnabled(true);
        tableWidgetMyMasternodes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidgetMyMasternodes);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        startButton = new QPushButton(tabMyMasternodes);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout_5->addWidget(startButton);

        startAllButton = new QPushButton(tabMyMasternodes);
        startAllButton->setObjectName(QStringLiteral("startAllButton"));

        horizontalLayout_5->addWidget(startAllButton);

        startMissingButton = new QPushButton(tabMyMasternodes);
        startMissingButton->setObjectName(QStringLiteral("startMissingButton"));

        horizontalLayout_5->addWidget(startMissingButton);

        UpdateButton = new QPushButton(tabMyMasternodes);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_5->addWidget(UpdateButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        autoupdate_label = new QLabel(tabMyMasternodes);
        autoupdate_label->setObjectName(QStringLiteral("autoupdate_label"));

        horizontalLayout->addWidget(autoupdate_label);

        secondsLabel = new QLabel(tabMyMasternodes);
        secondsLabel->setObjectName(QStringLiteral("secondsLabel"));

        horizontalLayout->addWidget(secondsLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);


        topLayout->addWidget(tabMyMasternodes);


        retranslateUi(MasternodeList);

        QMetaObject::connectSlotsByName(MasternodeList);
    } // setupUi

    void retranslateUi(QWidget *MasternodeList)
    {
        MasternodeList->setWindowTitle(QApplication::translate("MasternodeList", "Form", 0));
        updateNote->setText(QApplication::translate("MasternodeList", "Note: Status of your masternodes in local wallet can potentially be slightly incorrect.<br />Always wait for wallet to sync additional data and then double check from another node<br />if your node should be running but you still see \"MISSING\" in \"Status\" field.", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMyMasternodes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeList", "Alias", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMyMasternodes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeList", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMyMasternodes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeList", "Protocol", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMyMasternodes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeList", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMyMasternodes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeList", "Active", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMyMasternodes->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeList", "Last Seen (UTC)", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetMyMasternodes->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeList", "Pubkey", 0));
        startButton->setText(QApplication::translate("MasternodeList", "S&tart Alias", 0));
        startAllButton->setText(QApplication::translate("MasternodeList", "Start &All", 0));
        startMissingButton->setText(QApplication::translate("MasternodeList", "Start &MISSING", 0));
        UpdateButton->setText(QApplication::translate("MasternodeList", "&Update Status", 0));
        autoupdate_label->setText(QApplication::translate("MasternodeList", "Status will be updated automatically in (sec):", 0));
        secondsLabel->setText(QApplication::translate("MasternodeList", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MasternodeList: public Ui_MasternodeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODELIST_H
