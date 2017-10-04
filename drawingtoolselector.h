#ifndef DRAWINGTOOLSELECTOR_H
#define DRAWINGTOOLSELECTOR_H

#include <QWidget>
#include "tool.h"

namespace Ui {
class DrawingToolSelector;
}

class DrawingToolSelector : public QWidget
{
    Q_OBJECT

public:
    explicit DrawingToolSelector(QWidget *parent = 0);
    ~DrawingToolSelector();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::DrawingToolSelector *ui;
    void setAllButtonsFalse();

signals:

};

#endif // DRAWINGTOOLSELECTOR_H
