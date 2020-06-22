#ifndef APPMENUWIDGET_H
#define APPMENUWIDGET_H

#include <QWidget>
#include <QMenuBar>
#include <QToolButton>
#include "appmenu/appmenumodel.h"
#include "appmenu/menuimporter.h"

class AppMenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AppMenuWidget(QWidget *parent = nullptr);

    void updateMenu();
    void toggleMaximizeWindow();

private:
    void onActiveWindowChanged(WId id);
    void minimizeWindow();
    void clsoeWindow();
    void maxmizeWindow();
    void restoreWindow();

private:
    AppMenuModel *m_appMenuModel;
    MenuImporter *m_menuImporter;
    QMenuBar *m_menuBar;

    QWidget *m_buttonsWidget;
    QToolButton *m_minButton;
    QToolButton *m_restoreButton;
    QToolButton *m_closeButton;
};

#endif // APPMENUWIDGET_H