#include "keyboardCounterUI.h"

using namespace kbcUI;

KeyboardCounterUI::KeyboardCounterUI(const QString &name, QWidget *parent) : QTabWidget(parent)
{
    this->setObjectName(name);
    initUi();
}

void KeyboardCounterUI::initUi()
{
    this->setWindowTitle("KeyCounter");
}
