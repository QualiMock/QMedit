#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QMenu *fileMenu;
    QMenu *editMenu;

    QAction *fileOpen;
    QAction *fileSave;
    QAction *fileSaveAs;
    QAction *copyFromFile;

    QAction *editAction;
};
#endif // MAINWINDOW_H
