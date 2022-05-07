#ifndef AUTOADDEVENT_H
#define AUTOADDEVENT_H

#include <QDialog>
#include <QDate>
#include <QTime>

namespace Ui {
class AutoAddEvent;
}

class AutoAddEvent : public QDialog
{
    Q_OBJECT

public:
    explicit AutoAddEvent(QWidget *parent = nullptr);
    ~AutoAddEvent();
    void getNewAutoEventParams(QString& summary, QDate& endDate, int& spanTime);

    void accept();
private:
    Ui::AutoAddEvent *ui;
};

#endif // AUTOADDEVENT_H
