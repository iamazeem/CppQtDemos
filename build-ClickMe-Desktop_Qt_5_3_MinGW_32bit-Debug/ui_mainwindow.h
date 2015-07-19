/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblClickMe;
    QGroupBox *grpPlayground;
    QPushButton *btnClickMe;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setMouseTracking(true);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblClickMe = new QLabel(centralWidget);
        lblClickMe->setObjectName(QStringLiteral("lblClickMe"));
        lblClickMe->setGeometry(QRect(4, 4, 793, 61));
        QFont font;
        font.setPointSize(20);
        lblClickMe->setFont(font);
        lblClickMe->setStyleSheet(QStringLiteral("color: rgb(255, 85, 0);"));
        lblClickMe->setAlignment(Qt::AlignCenter);
        grpPlayground = new QGroupBox(centralWidget);
        grpPlayground->setObjectName(QStringLiteral("grpPlayground"));
        grpPlayground->setGeometry(QRect(3, 68, 793, 529));
        grpPlayground->setMouseTracking(false);
        grpPlayground->setFocusPolicy(Qt::NoFocus);
        grpPlayground->setFlat(false);
        btnClickMe = new QPushButton(grpPlayground);
        btnClickMe->setObjectName(QStringLiteral("btnClickMe"));
        btnClickMe->setGeometry(QRect(8, 8, 120, 40));
        btnClickMe->setStyleSheet(QLatin1String("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Click Me!", 0));
        lblClickMe->setText(QApplication::translate("MainWindow", "Click on the Click Me! button if you can!", 0));
        grpPlayground->setTitle(QString());
        btnClickMe->setText(QApplication::translate("MainWindow", "Click Me!", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
