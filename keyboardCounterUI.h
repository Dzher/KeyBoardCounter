#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <iostream>
#include <vector>

#ifndef _KEYBOARDCOUNTERUI_H_
#define _KEYBOARDCOUNTERUI_H_

namespace kbcUI
{
  class KeyboardCounterUI : public QTabWidget
  {
    Q_OBJECT
  public:
    KeyboardCounterUI(const QString &name, QWidget *parent = nullptr)
        : QTabWidget(parent) {}

  private:
    void initUi();

  private:
    struct UiElement
    {
      std::vector<QLabel *> key_lbls;
      std::vector<long long> key_counts;
    } ui_;
  };
} // namespace kbcUI

#endif //_KEYBOARDCOUNTERUI_H_