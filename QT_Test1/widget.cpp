#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QString str1[3] = {"study", "sleep", "kill time"};
    QString str2[3] = {"Programming", "Bed", "stand by"};

    int xpos = 50;
    int ypos = 50;

    chk_group[0] = new QButtonGroup(this);
    chk_group[1] = new QButtonGroup(this);

    for(int i = 0; i < 3; i++)
    {
        exclusive[i] = new QCheckBox(str1[i], this);
        exclusive[i]->setGeometry(xpos, ypos, 100, 30);
        chk_group[0]->addButton(exclusive[i]);

        non_exclusive[i] = new QCheckBox(str2[i], this);
        non_exclusive[i]->setGeometry(xpos+120, ypos, 100, 30);
        chk_group[1]->addButton(non_exclusive[i]);

        connect(exclusive[i], SIGNAL(clicked()), this, SLOT(chkChanged()));

        ypos += 60;
    }

    chk_group[0]->setExclusive(true);
    chk_group[1]->setExclusive(false);

    exclusive[0]->setIcon(QIcon("D:/USER/Desktop/QT/QT_practice/QT_Test1/resources/browser.png"));
    exclusive[1]->setIcon(QIcon("D:/USER/Desktop/QT/QT_practice/QT_Test1/resources/calendar.png"));
    exclusive[2]->setIcon(QIcon("D:/USER/Desktop/QT/QT_practice/QT_Test1/resources/chat.png"));

    non_exclusive[0]->setIcon(QIcon("D:/USER/Desktop/QT/QT_practice/QT_Test1/resources/editor.png"));
    non_exclusive[1]->setIcon(QIcon("D:/USER/Desktop/QT/QT_practice/QT_Test1/resources/mail.png"));
    non_exclusive[2]->setIcon(QIcon("D:/USER/Desktop/QT/QT_practice/QT_Test1/resources/users.png"));
//相对路径不行 怀疑工作目录不对
}
void Widget::chkChanged()
{
    for(int i = 0; i < 3; i++)
    {
        if(exclusive[i]->checkState())
        {
            qDebug("checkbox %d selected", i+1);
        }
    }
}
Widget::~Widget()
{

}

