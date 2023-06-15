#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
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
    KeyboardCounterUI(const QString &name, QWidget *parent = nullptr);
    ~KeyboardCounterUI() = default;

  private:
    void initUi();
    void initKeyLabels();
    void initKeyCounts();
    void setupLayout();

  private:
    struct UiElement
    {
      std::vector<QPushButton *> key_pbts;
      std::vector<QLabel *> key_counts;
    } ui_;
  };
} // namespace kbcUI

#endif //_KEYBOARDCOUNTERUI_H_