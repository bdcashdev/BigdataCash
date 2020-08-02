/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *labelImmatureText;
    QLabel *labelWalletStatus;
    QLabel *labelPendingText;
    QLabel *labelWatchImmature;
    QLabel *labelWalletStatusSpacer1;
    QLabel *labelWatchPending;
    QLabel *labelWatchonly;
    QLabel *labelTotal;
    QLabel *labelBalance;
    QFrame *lineWatchBalance;
    QLabel *labelSpendable;
    QLabel *labelImmature;
    QLabel *labelWatchAvailable;
    QFrame *lineSpendableBalance;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelBalanceText;
    QLabel *lineBalances;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchTotal;
    QLabel *labelTotalText;
    QLabel *labelWalletStatusSpacer2;
    QFrame *frameObfuscation;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QLabel *lineObfuscation;
    QLabel *labelObfuscationSyncStatus;
    QPushButton *runAutoDenom;
    QSpacerItem *verticalSpacer_4;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *obfuscationEnabled;
    QHBoxLayout *horizontalLayout_6;
    QProgressBar *obfuscationProgress;
    QLabel *obfuscationValue;
    QSpacerItem *horizontalSpacer;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QLabel *label_8;
    QLabel *labelAmountRounds;
    QLabel *label_9;
    QLabel *labelSubmittedDenom;
    QLabel *label_7;
    QFrame *lineLastMessage;
    QLabel *obfuscationStatus;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *toggleObfuscation;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *obfuscationAuto;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *obfuscationReset;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QLabel *lineTransactions;
    QLabel *labelTransactionsStatus;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(960, 685);
        OverviewPage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setSpacing(0);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(35, 42, 35, 42);
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(25);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(365, 16777215));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));
        labelImmatureText->setIndent(0);

        gridLayout->addWidget(labelImmatureText, 7, 0, 1, 1);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWalletStatus->setIndent(0);

        gridLayout->addWidget(labelWalletStatus, 5, 0, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));
        labelPendingText->setIndent(0);

        gridLayout->addWidget(labelPendingText, 6, 0, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QStringLiteral("0.00 BDCASH"));
        labelWatchImmature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 7, 2, 1, 1);

        labelWalletStatusSpacer1 = new QLabel(frame);
        labelWalletStatusSpacer1->setObjectName(QStringLiteral("labelWalletStatusSpacer1"));

        gridLayout->addWidget(labelWalletStatusSpacer1, 5, 1, 1, 1);

        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QStringLiteral("0.00 BDCASH"));
        labelWatchPending->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 6, 2, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QStringLiteral("0.00 BDCASH"));
        labelTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 9, 1, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("0.00 BDCASH"));
        labelBalance->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 2, 1, 1, 1);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setBaseSize(QSize(27, 2));
        lineWatchBalance->setLineWidth(2);
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 8, 2, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QStringLiteral("0.00 BDCASH"));
        labelImmature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 7, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QStringLiteral("0.00 BDCASH"));
        labelWatchAvailable->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 2, 2, 1, 1);

        lineSpendableBalance = new QFrame(frame);
        lineSpendableBalance->setObjectName(QStringLiteral("lineSpendableBalance"));
        lineSpendableBalance->setFrameShape(QFrame::HLine);
        lineSpendableBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpendableBalance, 8, 0, 1, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));
        labelBalanceText->setEnabled(true);
        labelBalanceText->setMinimumSize(QSize(122, 55));
        QFont font1;
        font1.setFamily(QStringLiteral("Volte"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        labelBalanceText->setFont(font1);
        labelBalanceText->setLineWidth(0);
        labelBalanceText->setIndent(0);

        verticalLayout_5->addWidget(labelBalanceText);

        lineBalances = new QLabel(frame);
        lineBalances->setObjectName(QStringLiteral("lineBalances"));
        lineBalances->setMinimumSize(QSize(27, 2));
        lineBalances->setMaximumSize(QSize(27, 2));
        QFont font2;
        font2.setPointSize(1);
        lineBalances->setFont(font2);

        verticalLayout_5->addWidget(lineBalances);


        gridLayout->addLayout(verticalLayout_5, 2, 0, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QStringLiteral("0.00 BDCASH"));
        labelUnconfirmed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 6, 1, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QStringLiteral("0.00 BDCASH"));
        labelWatchTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 9, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        labelTotalText->setIndent(0);

        gridLayout->addWidget(labelTotalText, 9, 0, 1, 1);

        labelWalletStatusSpacer2 = new QLabel(frame);
        labelWalletStatusSpacer2->setObjectName(QStringLiteral("labelWalletStatusSpacer2"));

        gridLayout->addWidget(labelWalletStatusSpacer2, 5, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_2->addWidget(frame);

        frameObfuscation = new QFrame(OverviewPage);
        frameObfuscation->setObjectName(QStringLiteral("frameObfuscation"));
        frameObfuscation->setMinimumSize(QSize(0, 350));
        frameObfuscation->setMaximumSize(QSize(365, 16777215));
        frameObfuscation->setLayoutDirection(Qt::LeftToRight);
        frameObfuscation->setFrameShape(QFrame::NoFrame);
        frameObfuscation->setFrameShadow(QFrame::Plain);
        frameObfuscation->setLineWidth(0);
        verticalLayout_7 = new QVBoxLayout(frameObfuscation);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_2 = new QLabel(frameObfuscation);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(130, 55));
        label_2->setFont(font1);
        label_2->setIndent(0);

        verticalLayout_6->addWidget(label_2);

        lineObfuscation = new QLabel(frameObfuscation);
        lineObfuscation->setObjectName(QStringLiteral("lineObfuscation"));
        lineObfuscation->setMinimumSize(QSize(27, 2));
        lineObfuscation->setMaximumSize(QSize(27, 2));
        lineObfuscation->setFont(font2);

        verticalLayout_6->addWidget(lineObfuscation);


        gridLayout_2->addLayout(verticalLayout_6, 0, 0, 1, 1);

        labelObfuscationSyncStatus = new QLabel(frameObfuscation);
        labelObfuscationSyncStatus->setObjectName(QStringLiteral("labelObfuscationSyncStatus"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelObfuscationSyncStatus->sizePolicy().hasHeightForWidth());
        labelObfuscationSyncStatus->setSizePolicy(sizePolicy2);
        labelObfuscationSyncStatus->setStyleSheet(QStringLiteral(""));
        labelObfuscationSyncStatus->setText(QStringLiteral("(out of sync)"));
        labelObfuscationSyncStatus->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelObfuscationSyncStatus, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 5);
        gridLayout_2->setColumnStretch(1, 5);

        verticalLayout_7->addLayout(gridLayout_2);

        runAutoDenom = new QPushButton(frameObfuscation);
        runAutoDenom->setObjectName(QStringLiteral("runAutoDenom"));
        runAutoDenom->setMaximumSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 238, 238, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 246, 246, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 119, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 159, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        runAutoDenom->setPalette(palette);
        runAutoDenom->setFocusPolicy(Qt::NoFocus);
        runAutoDenom->setAutoFillBackground(true);
        runAutoDenom->setFlat(true);

        verticalLayout_7->addWidget(runAutoDenom);

        verticalSpacer_4 = new QSpacerItem(100, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(20, -1, 20, -1);
        label_6 = new QLabel(frameObfuscation);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 18));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        obfuscationEnabled = new QLabel(frameObfuscation);
        obfuscationEnabled->setObjectName(QStringLiteral("obfuscationEnabled"));
        obfuscationEnabled->setMinimumSize(QSize(0, 18));

        formLayout->setWidget(0, QFormLayout::FieldRole, obfuscationEnabled);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        obfuscationProgress = new QProgressBar(frameObfuscation);
        obfuscationProgress->setObjectName(QStringLiteral("obfuscationProgress"));
        obfuscationProgress->setMinimumSize(QSize(110, 18));
        obfuscationProgress->setValue(0);
        obfuscationProgress->setAlignment(Qt::AlignCenter);
        obfuscationProgress->setInvertedAppearance(false);
        obfuscationProgress->setFormat(QStringLiteral(""));

        horizontalLayout_6->addWidget(obfuscationProgress);

        obfuscationValue = new QLabel(frameObfuscation);
        obfuscationValue->setObjectName(QStringLiteral("obfuscationValue"));
        obfuscationValue->setMinimumSize(QSize(0, 18));
        QFont font3;
        font3.setFamily(QStringLiteral("DejaVu Sans"));
        font3.setPointSize(12);
        obfuscationValue->setFont(font3);
        obfuscationValue->setText(QStringLiteral("0%"));

        horizontalLayout_6->addWidget(obfuscationValue);

        horizontalSpacer = new QSpacerItem(40, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_6);

        labelAnonymizedText = new QLabel(frameObfuscation);
        labelAnonymizedText->setObjectName(QStringLiteral("labelAnonymizedText"));
        labelAnonymizedText->setMinimumSize(QSize(0, 18));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(frameObfuscation);
        labelAnonymized->setObjectName(QStringLiteral("labelAnonymized"));
        labelAnonymized->setMinimumSize(QSize(0, 18));
        labelAnonymized->setFont(font);
        labelAnonymized->setText(QStringLiteral("0.00 BDCASH"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelAnonymized);

        label_8 = new QLabel(frameObfuscation);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 18));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        labelAmountRounds = new QLabel(frameObfuscation);
        labelAmountRounds->setObjectName(QStringLiteral("labelAmountRounds"));
        labelAmountRounds->setMinimumSize(QSize(0, 18));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelAmountRounds);

        label_9 = new QLabel(frameObfuscation);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 18));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        labelSubmittedDenom = new QLabel(frameObfuscation);
        labelSubmittedDenom->setObjectName(QStringLiteral("labelSubmittedDenom"));
        labelSubmittedDenom->setMinimumSize(QSize(0, 18));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelSubmittedDenom);

        label_7 = new QLabel(frameObfuscation);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(0, 18));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);


        verticalLayout_7->addLayout(formLayout);

        lineLastMessage = new QFrame(frameObfuscation);
        lineLastMessage->setObjectName(QStringLiteral("lineLastMessage"));
        lineLastMessage->setFrameShape(QFrame::HLine);
        lineLastMessage->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(lineLastMessage);

        obfuscationStatus = new QLabel(frameObfuscation);
        obfuscationStatus->setObjectName(QStringLiteral("obfuscationStatus"));
        obfuscationStatus->setMinimumSize(QSize(288, 43));
        obfuscationStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        obfuscationStatus->setWordWrap(true);

        verticalLayout_7->addWidget(obfuscationStatus);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        toggleObfuscation = new QPushButton(frameObfuscation);
        toggleObfuscation->setObjectName(QStringLiteral("toggleObfuscation"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toggleObfuscation->sizePolicy().hasHeightForWidth());
        toggleObfuscation->setSizePolicy(sizePolicy3);
        toggleObfuscation->setMinimumSize(QSize(214, 36));

        horizontalLayout_4->addWidget(toggleObfuscation);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(40, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        obfuscationAuto = new QPushButton(frameObfuscation);
        obfuscationAuto->setObjectName(QStringLiteral("obfuscationAuto"));
        sizePolicy3.setHeightForWidth(obfuscationAuto->sizePolicy().hasHeightForWidth());
        obfuscationAuto->setSizePolicy(sizePolicy3);
        obfuscationAuto->setMinimumSize(QSize(102, 23));

        horizontalLayout_3->addWidget(obfuscationAuto);

        horizontalSpacer_11 = new QSpacerItem(10, 23, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        obfuscationReset = new QPushButton(frameObfuscation);
        obfuscationReset->setObjectName(QStringLiteral("obfuscationReset"));
        sizePolicy3.setHeightForWidth(obfuscationReset->sizePolicy().hasHeightForWidth());
        obfuscationReset->setSizePolicy(sizePolicy3);
        obfuscationReset->setMinimumSize(QSize(102, 23));
        obfuscationReset->setLayoutDirection(Qt::LeftToRight);
        obfuscationReset->setAutoFillBackground(false);

        horizontalLayout_3->addWidget(obfuscationReset);

        horizontalSpacer_7 = new QSpacerItem(40, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(frameObfuscation);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 55));
        label_4->setFont(font1);
        label_4->setLineWidth(0);

        verticalLayout_8->addWidget(label_4);

        lineTransactions = new QLabel(frame_2);
        lineTransactions->setObjectName(QStringLiteral("lineTransactions"));
        lineTransactions->setMinimumSize(QSize(27, 2));
        lineTransactions->setMaximumSize(QSize(27, 2));
        lineTransactions->setFont(font2);

        verticalLayout_8->addWidget(lineTransactions);


        verticalLayout_9->addLayout(verticalLayout_8);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral(""));
        labelTransactionsStatus->setLineWidth(0);
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(labelTransactionsStatus);


        verticalLayout->addLayout(verticalLayout_9);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listTransactions->sizePolicy().hasHeightForWidth());
        listTransactions->setSizePolicy(sizePolicy4);
        listTransactions->setMaximumSize(QSize(16777215, 16777215));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setFrameShadow(QFrame::Plain);
        listTransactions->setLineWidth(0);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the BIGDATACASH network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", 0));
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
        labelWalletStatusSpacer1->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", 0));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", 0));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelBalanceText->setText(QApplication::translate("OverviewPage", "AVAILABLE:", 0));
        lineBalances->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0));
        labelWalletStatusSpacer2->setText(QString());
        label_2->setText(QApplication::translate("OverviewPage", "OBFUSCATION", 0));
        lineObfuscation->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelObfuscationSyncStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the BIGDATACASH network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        runAutoDenom->setText(QString());
        label_6->setText(QApplication::translate("OverviewPage", "Status:", 0));
        obfuscationEnabled->setText(QApplication::translate("OverviewPage", "Enabled/Disabled", 0));
        labelAnonymizedText->setText(QApplication::translate("OverviewPage", "Obfuscation Balance:", 0));
        label_8->setText(QApplication::translate("OverviewPage", "Amount and Rounds:", 0));
        labelAmountRounds->setText(QApplication::translate("OverviewPage", "0 BDCASH / 0 Rounds", 0));
        label_9->setText(QApplication::translate("OverviewPage", "Submitted Denom:", 0));
#ifndef QT_NO_TOOLTIP
        labelSubmittedDenom->setToolTip(QApplication::translate("OverviewPage", "The denominations you submitted to the Masternode.<br>To mix, other users must submit the exact same denominations.", 0));
#endif // QT_NO_TOOLTIP
        labelSubmittedDenom->setText(QApplication::translate("OverviewPage", "n/a", 0));
        label_7->setText(QApplication::translate("OverviewPage", "Completion:", 0));
        obfuscationStatus->setText(QApplication::translate("OverviewPage", "(Last Message)", 0));
        toggleObfuscation->setText(QApplication::translate("OverviewPage", "Start/Stop Obfuscation", 0));
#ifndef QT_NO_TOOLTIP
        obfuscationAuto->setToolTip(QApplication::translate("OverviewPage", "Try to manually submit a Obfuscation request.", 0));
#endif // QT_NO_TOOLTIP
        obfuscationAuto->setText(QApplication::translate("OverviewPage", "Try Mix", 0));
#ifndef QT_NO_TOOLTIP
        obfuscationReset->setToolTip(QApplication::translate("OverviewPage", "Reset the current status of Obfuscation (can interrupt Obfuscation if it's in the process of Mixing, which can cost you money!)", 0));
#endif // QT_NO_TOOLTIP
        obfuscationReset->setText(QApplication::translate("OverviewPage", "Reset", 0));
        label_4->setText(QApplication::translate("OverviewPage", "RECENT TRANSACTIONS", 0));
        lineTransactions->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the BIGDATACASH network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
