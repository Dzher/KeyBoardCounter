#include <QtWidgets/QTabWidget>
#include <iostream>

#ifndef _KEYBOARDCOUNTERUI_H_
#    define _KEYBOARDCOUNTERUI_H_
namespace kbcUI {
class KeyboardCounterUI : public QTabWidget
{
    Q_OBJECT
public:
    KeyboardCounterUI(const QString& name, QWidget* parent = nullptr)
        : QTabWidget(parent)
    {}

private:
};
}   // namespace kbcUI

#endif   //_KEYBOARDCOUNTERUI_H_