#ifndef TCHAT_H
#define TCHAT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Tchat; }
QT_END_NAMESPACE

class Tchat : public QMainWindow
{
    Q_OBJECT

public:
    Tchat(QWidget *parent = nullptr);
    ~Tchat();

private:
    Ui::Tchat *ui;
};
#endif // TCHAT_H
