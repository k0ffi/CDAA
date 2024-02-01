/********************************************************************************
** Form generated from reading UI file 'widgetcontact.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETCONTACT_H
#define UI_WIDGETCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetContact
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nom;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *prenom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *entreprise;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *photo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *email;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *bannuler;
    QPushButton *bValider;

    void setupUi(QWidget *WidgetContact)
    {
        if (WidgetContact->objectName().isEmpty())
            WidgetContact->setObjectName("WidgetContact");
        WidgetContact->resize(819, 627);
        WidgetContact->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(WidgetContact);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 821, 621));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nom = new QLineEdit(verticalLayoutWidget);
        nom->setObjectName("nom");

        horizontalLayout->addWidget(nom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        prenom = new QLineEdit(verticalLayoutWidget);
        prenom->setObjectName("prenom");

        horizontalLayout_7->addWidget(prenom);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        entreprise = new QLineEdit(verticalLayoutWidget);
        entreprise->setObjectName("entreprise");

        horizontalLayout_2->addWidget(entreprise);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        photo = new QLineEdit(verticalLayoutWidget);
        photo->setObjectName("photo");

        horizontalLayout_5->addWidget(photo);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        email = new QLineEdit(verticalLayoutWidget);
        email->setObjectName("email");

        horizontalLayout_4->addWidget(email);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        bannuler = new QPushButton(verticalLayoutWidget);
        bannuler->setObjectName("bannuler");

        horizontalLayout_6->addWidget(bannuler);

        bValider = new QPushButton(verticalLayoutWidget);
        bValider->setObjectName("bValider");

        horizontalLayout_6->addWidget(bValider);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(verticalLayout_3);


        retranslateUi(WidgetContact);

        QMetaObject::connectSlotsByName(WidgetContact);
    } // setupUi

    void retranslateUi(QWidget *WidgetContact)
    {
        WidgetContact->setWindowTitle(QCoreApplication::translate("WidgetContact", "Form", nullptr));
        label->setText(QCoreApplication::translate("WidgetContact", "Nom :", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetContact", "Pr\303\251nom :", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetContact", "Entreprise :", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetContact", "Photo :", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetContact", "Email :", nullptr));
        bannuler->setText(QCoreApplication::translate("WidgetContact", "Annuler", nullptr));
        bValider->setText(QCoreApplication::translate("WidgetContact", "Valider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetContact: public Ui_WidgetContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETCONTACT_H
