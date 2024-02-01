/********************************************************************************
** Form generated from reading UI file 'widgetretirer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETRETIRER_H
#define UI_WIDGETRETIRER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetRetirer
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *bAnnuler;
    QPushButton *bValider;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *nom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *prenom;

    void setupUi(QWidget *widgetRetirer)
    {
        if (widgetRetirer->objectName().isEmpty())
            widgetRetirer->setObjectName("widgetRetirer");
        widgetRetirer->resize(651, 453);
        widgetRetirer->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget = new QWidget(widgetRetirer);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(-1, 349, 651, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bAnnuler = new QPushButton(horizontalLayoutWidget);
        bAnnuler->setObjectName("bAnnuler");

        horizontalLayout->addWidget(bAnnuler);

        bValider = new QPushButton(horizontalLayoutWidget);
        bValider->setObjectName("bValider");

        horizontalLayout->addWidget(bValider);

        verticalLayoutWidget = new QWidget(widgetRetirer);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 651, 351));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        nom = new QLineEdit(verticalLayoutWidget);
        nom->setObjectName("nom");

        horizontalLayout_3->addWidget(nom);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        prenom = new QLineEdit(verticalLayoutWidget);
        prenom->setObjectName("prenom");

        horizontalLayout_2->addWidget(prenom);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(widgetRetirer);

        QMetaObject::connectSlotsByName(widgetRetirer);
    } // setupUi

    void retranslateUi(QWidget *widgetRetirer)
    {
        widgetRetirer->setWindowTitle(QCoreApplication::translate("widgetRetirer", "Form", nullptr));
        bAnnuler->setText(QCoreApplication::translate("widgetRetirer", "Annuler", nullptr));
        bValider->setText(QCoreApplication::translate("widgetRetirer", "Valider", nullptr));
        label_2->setText(QCoreApplication::translate("widgetRetirer", "Donnez le nom du contact \303\240 supprimer :", nullptr));
        label->setText(QCoreApplication::translate("widgetRetirer", "Donnez le pr\303\251nom du contact \303\240 supprimer :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widgetRetirer: public Ui_widgetRetirer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETRETIRER_H
