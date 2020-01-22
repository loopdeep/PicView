#include "mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow()
{
    m_imgLabel = nullptr;
    m_img = nullptr;
    m_vBtn = nullptr;
    m_hBtn = nullptr;
    m_rotBtn = nullptr;

    m_fileMenu = nullptr;
    m_editMenu = nullptr;
    m_helpMenu = nullptr;

    m_fileToolBar = nullptr;
    m_editToolBar = nullptr;
    m_helpToolBar = nullptr;

    m_openAct = nullptr;
    m_exitAct = nullptr;

    m_vAct = nullptr;
    m_hAct = nullptr;
    m_rotAct = nullptr;

    m_aboutAct = nullptr;

    initWindow();
    this->setWindowTitle("Pic View");
}

void MainWindow::initWindow()
{
    this->setFixedWidth(800);
    this->setFixedHeight(600);

    m_fileMenu = new QMenu(this);
    m_editMenu = new QMenu(this);
    m_helpMenu = new QMenu(this);

    // 填充菜单子节点
    m_openAct = new QAction(this);
    m_exitAct = new QAction(this);


    QVBoxLayout *vlayout = new QVBoxLayout(this);
    this->setWindowTitle("PIC VIEW");
}

