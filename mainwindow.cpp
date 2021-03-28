#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fileMenu = new QMenu("File");
    editMenu = new QMenu("Edit");

    fileOpen = new QAction("Open", fileMenu);
    fileSave = new QAction("Save", fileMenu);
    fileSaveAs = new QAction("Save as", fileMenu);

    ui->menubar->addMenu(fileMenu);
    ui->menubar->addMenu(editMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

