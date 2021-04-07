#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hboxLayout = new QHBoxLayout();
    QPushButton *btn[6];

    QString btnstr[6] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(int i = 0; i < 6; i++)
    {
        btn[i] = new QPushButton(btnstr[i]);
        hboxLayout->addWidget(btn[i]);//不知道
    }

    QVBoxLayout *vboxLayout = new QVBoxLayout();
    QPushButton *vbtn[6];

    QString vbtnStr[3] = {"Movie", "Dream", "Animation"};

    for(int i = 0; i < 3; i++)
    {
        vbtn[i] = new QPushButton(vbtnStr[i]);
        vboxLayout->addWidget(vbtn[i]);
    }

    QGridLayout *gridLayout = new QGridLayout();
    QPushButton *gbtn[5];

    QString gbtnStr[6] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(int i = 0; i < 6; i++)
    {
        gbtn[i] = new QPushButton(gbtnStr[i]);
    }

    gridLayout->addWidget(gbtn[0], 0, 0);
    gridLayout->addWidget(gbtn[1], 0, 1);
    gridLayout->addWidget(gbtn[2], 1, 0, 1, 3);
    gridLayout->addWidget(gbtn[3], 2, 0);
    gridLayout->addWidget(gbtn[4], 2, 1);

    QVBoxLayout *defaultLayout = new QVBoxLayout();

    defaultLayout->addLayout(hboxLayout);
    defaultLayout->addLayout(vboxLayout);
    defaultLayout->addLayout(gridLayout);

    setLayout(defaultLayout);
}

Widget::~Widget()
{
}

