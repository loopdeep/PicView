#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QPixmap>
#include <QPushButton>
#include <QLabel>
#include <QMenuBar>
#include <QMenu>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();

signals:

public slots:

protected:
    void initWindow();

private:
    QLabel *m_imgLabel;
    QImage *m_img;
    QPushButton *m_vBtn;
    QPushButton *m_hBtn;
    QPushButton *m_rotBtn;

    QMenu *m_fileMenu;
    QMenu *m_editMenu;
    QMenu *m_helpMenu;

    QToolBar *m_fileToolBar;
    QToolBar *m_editToolBar;
    QToolBar *m_helpToolBar;

    QAction *m_openAct;
    QAction *m_exitAct;

    QAction *m_vAct;
    QAction *m_hAct;
    QAction *m_rotAct;
    QAction *m_aboutAct;
};

#endif // MAINWINDOW_H
