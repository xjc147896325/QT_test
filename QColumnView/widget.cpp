#include "widget.h"
#include <QStandardItem>
#include <QColumnView>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QStandardItemModel *model = new QStandardItemModel;

    QStandardItem *name = new QStandardItem("Name");
    QStandardItem *firstName = new QStandardItem("First Name");
    QStandardItem *lastName = new QStandardItem("Last Name");

    name->appendRow(firstName);
    name->appendRow(lastName);
    model->appendRow(name);

    QStandardItem *xiao = new QStandardItem("xiao");
    QStandardItem *jingcheng = new QStandardItem("jingcheng");

    firstName->appendRow(xiao);
    lastName->appendRow(jingcheng);

    QStandardItem *address = new QStandardItem("Address");
    QStandardItem *city = new QStandardItem("City");
    QStandardItem *state = new QStandardItem("State");
    QStandardItem *country = new QStandardItem("Country");

    address->appendRow(city);
    address->appendRow(state);
    address->appendRow(country);
    model->appendRow(address);

    QColumnView * columnView = new QColumnView;
    columnView->setModel(model);


    QVBoxLayout *vLayout = new QVBoxLayout(this);
    vLayout->addWidget(columnView);
}

Widget::~Widget()
{
}

