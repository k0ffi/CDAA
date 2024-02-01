/********************************************************************************
** Form generated from reading UI file 'widgetupdate.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETUPDATE_H
#define UI_WIDGETUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUpdate
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *oNom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *oPrenom;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *nNom;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_12;
    QLineEdit *nPrenom;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *nEntreprise;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *nPhoto;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLineEdit *nEmail;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *bAnnuler;
    QPushButton *bValider;

    void setupUi(QWidget *WidgetUpdate)
    {
        if (WidgetUpdate->objectName().isEmpty())
            WidgetUpdate->setObjectName("WidgetUpdate");
        WidgetUpdate->resize(760, 516);
        WidgetUpdate->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(WidgetUpdate);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 381, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        oNom = new QLineEdit(verticalLayoutWidget);
        oNom->setObjectName("oNom");

        horizontalLayout_5->addWidget(oNom);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_3->addWidget(label_11);

        oPrenom = new QLineEdit(verticalLayoutWidget);
        oPrenom->setObjectName("oPrenom");

        horizontalLayout_3->addWidget(oPrenom);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayoutWidget_2 = new QWidget(WidgetUpdate);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(380, 0, 381, 381));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");

        horizontalLayout_8->addWidget(label_6);

        nNom = new QLineEdit(verticalLayoutWidget_2);
        nNom->setObjectName("nNom");

        horizontalLayout_8->addWidget(nNom);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName("label_12");

        horizontalLayout_13->addWidget(label_12);

        nPrenom = new QLineEdit(verticalLayoutWidget_2);
        nPrenom->setObjectName("nPrenom");

        horizontalLayout_13->addWidget(nPrenom);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_9->addWidget(label_7);

        nEntreprise = new QLineEdit(verticalLayoutWidget_2);
        nEntreprise->setObjectName("nEntreprise");

        horizontalLayout_9->addWidget(nEntreprise);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName("label_8");

        horizontalLayout_10->addWidget(label_8);

        nPhoto = new QLineEdit(verticalLayoutWidget_2);
        nPhoto->setObjectName("nPhoto");

        horizontalLayout_10->addWidget(nPhoto);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName("label_9");

        horizontalLayout_11->addWidget(label_9);

        nEmail = new QLineEdit(verticalLayoutWidget_2);
        nEmail->setObjectName("nEmail");

        horizontalLayout_11->addWidget(nEmail);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayoutWidget = new QWidget(WidgetUpdate);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(-1, 379, 761, 141));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bAnnuler = new QPushButton(horizontalLayoutWidget);
        bAnnuler->setObjectName("bAnnuler");

        horizontalLayout->addWidget(bAnnuler);

        bValider = new QPushButton(horizontalLayoutWidget);
        bValider->setObjectName("bValider");

        horizontalLayout->addWidget(bValider);


        retranslateUi(WidgetUpdate);

        QMetaObject::connectSlotsByName(WidgetUpdate);
    } // setupUi

    void retranslateUi(QWidget *WidgetUpdate)
    {
        WidgetUpdate->setWindowTitle(QCoreApplication::translate("WidgetUpdate", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetUpdate", "Nom \303\240 modifier : ", nullptr));
        label_11->setText(QCoreApplication::translate("WidgetUpdate", "Pr\303\251nom \303\240 modifier :", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetUpdate", "Nouveau nom :", nullptr));
        label_12->setText(QCoreApplication::translate("WidgetUpdate", "Nouveau pr\303\251nom :", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetUpdate", "Nouvelle Entreprise :", nullptr));
        label_8->setText(QCoreApplication::translate("WidgetUpdate", "Nouvelle Photo : ", nullptr));
        label_9->setText(QCoreApplication::translate("WidgetUpdate", "Nouvel Email : ", nullptr));
        bAnnuler->setText(QCoreApplication::translate("WidgetUpdate", "Annuler", nullptr));
        bValider->setText(QCoreApplication::translate("WidgetUpdate", "Valider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetUpdate: public Ui_WidgetUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUPDATE_H
