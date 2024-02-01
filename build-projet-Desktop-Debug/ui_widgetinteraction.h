/********************************************************************************
** Form generated from reading UI file 'widgetinteraction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETINTERACTION_H
#define UI_WIDGETINTERACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetInteraction
{
public:
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *listContacts;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *Contenu;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bAnnuler;
    QPushButton *bValider;

    void setupUi(QWidget *WidgetInteraction)
    {
        if (WidgetInteraction->objectName().isEmpty())
            WidgetInteraction->setObjectName(QString::fromUtf8("WidgetInteraction"));
        WidgetInteraction->resize(725, 486);
        WidgetInteraction->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget_3 = new QWidget(WidgetInteraction);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(-4, 0, 731, 381));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listContacts = new QComboBox(horizontalLayoutWidget_3);
        listContacts->setObjectName(QString::fromUtf8("listContacts"));

        horizontalLayout->addWidget(listContacts);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        Contenu = new QLineEdit(horizontalLayoutWidget_3);
        Contenu->setObjectName(QString::fromUtf8("Contenu"));

        horizontalLayout_2->addWidget(Contenu);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayoutWidget_4 = new QWidget(WidgetInteraction);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(-1, 379, 731, 111));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        bAnnuler = new QPushButton(horizontalLayoutWidget_4);
        bAnnuler->setObjectName(QString::fromUtf8("bAnnuler"));

        horizontalLayout_4->addWidget(bAnnuler);

        bValider = new QPushButton(horizontalLayoutWidget_4);
        bValider->setObjectName(QString::fromUtf8("bValider"));

        horizontalLayout_4->addWidget(bValider);


        retranslateUi(WidgetInteraction);

        QMetaObject::connectSlotsByName(WidgetInteraction);
    } // setupUi

    void retranslateUi(QWidget *WidgetInteraction)
    {
        WidgetInteraction->setWindowTitle(QCoreApplication::translate("WidgetInteraction", "Form", nullptr));
        label->setText(QCoreApplication::translate("WidgetInteraction", "Contenu de l'interaction :", nullptr));
        bAnnuler->setText(QCoreApplication::translate("WidgetInteraction", "Annuler", nullptr));
        bValider->setText(QCoreApplication::translate("WidgetInteraction", "Valider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetInteraction: public Ui_WidgetInteraction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETINTERACTION_H
