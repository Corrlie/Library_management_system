#ifndef DIALOGDBDIAGRAM_H
#define DIALOGDBDIAGRAM_H

#include <QDialog>

namespace Ui {
class DialogDbDiagram;
}

class DialogDbDiagram : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDbDiagram(QWidget *parent = nullptr);
    ~DialogDbDiagram();

private:
    Ui::DialogDbDiagram *ui;
};

#endif // DIALOGDBDIAGRAM_H
