#ifndef ACCOUNTVIEW_H
#define ACCOUNTVIEW_H

#include <QWidget>

namespace Ui {
class accountview;
}

class accountview : public QWidget
{
    Q_OBJECT

public:
    explicit accountview(QWidget *parent = nullptr);
    ~accountview();

private:
    Ui::accountview *ui;
};

#endif // ACCOUNTVIEW_H
