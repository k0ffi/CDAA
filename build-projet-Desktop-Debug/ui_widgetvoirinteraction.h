/********************************************************************************
** Form generated from reading UI file 'widgetvoirinteraction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETVOIRINTERACTION_H
#define UI_WIDGETVOIRINTERACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetVoirInteraction
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *listContacts;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bAnnuler;
    QPushButton *bValider;

    void setupUi(QWidget *WidgetVoirInteraction)
    {
        if (WidgetVoirInteraction->objectName().isEmpty())
            WidgetVoirInteraction->setObjectName(QString::fromUtf8("WidgetVoirInteraction"));
        WidgetVoirInteraction->resize(619, 420);
        WidgetVoirInteraction->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget = new QWidget(WidgetVoirInteraction);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, -1, 621, 321));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listContacts = new QComboBox(horizontalLayoutWidget);
        listContacts->setObjectName(QString::fromUtf8("listContacts"));

        horizontalLayout_2->addWidget(listContacts);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        plainTextEdit = new QPlainTextEdit(horizontalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout_3->addWidget(plainTextEdit);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayoutWidget_4 = new QWidget(WidgetVoirInteraction);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(-1, 319, 621, 101));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        bAnnuler = new QPushButton(horizontalLayoutWidget_4);
        bAnnuler->setObjectName(QString::fromUtf8("bAnnuler"));

        horizontalLayout_4->addWidget(bAnnuler);

        bValider = new QPushButton(horizontalLayoutWidget_4);
        bValider->setObjectName(QString::fromUtf8("bValider"));

        horizontalLayout_4->addWidget(bValider);


        retranslateUi(WidgetVoirInteraction);

        QMetaObject::connectSlotsByName(WidgetVoirInteraction);
    } // setupUi

    void retranslateUi(QWidget *WidgetVoirInteraction)
    {
        WidgetVoirInteraction->setWindowTitle(QCoreApplication::translate("WidgetVoirInteraction", "Form", nullptr));
        label->setText(QCoreApplication::translate("WidgetVoirInteraction", "Contenu de l'interaction :", nullptr));
        bAnnuler->setText(QCoreApplication::translate("WidgetVoirInteraction", "Annuler", nullptr));
        bValider->setText(QCoreApplication::translate("WidgetVoirInteraction", "Valider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetVoirInteraction: public Ui_WidgetVoirInteraction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETVOIRINTERACTION_H
