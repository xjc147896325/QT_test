#ifndef WIDGET_H
#define WIDGET_H

//#include <QWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QButtonGroup>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QButtonGroup *chk_group[2];

    QCheckBox *exclusive[3];
    QCheckBox *non_exclusive[3];

private slots:
    void chkChanged();
};

#endif // WIDGET_H
