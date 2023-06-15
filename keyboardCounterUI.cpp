#include "keyboardCounterUI.h"
#include "keyboardConfig.h"
#include <QStyle>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpacerItem>

using namespace kbcUI;

KeyboardCounterUI::KeyboardCounterUI(const QString &name, QWidget *parent) : QTabWidget(parent)
{
    this->setObjectName(name);
    initUi();
    setupLayout();
}

void KeyboardCounterUI::initUi()
{
    this->setWindowTitle("KeyCounter");
    this->setWindowIcon(style()->standardIcon(QStyle::SP_DriveCDIcon));
    this->resize(300, 450);
    initKeyLabels();
}

void KeyboardCounterUI::initKeyLabels()
{
    for (auto &each : kbcConfig::keyboardConfig::kUpperLetterArray)
    {
        ui_.key_pbts.push_back(new QPushButton(QString(each), this));
    }
}

void KeyboardCounterUI::initKeyCounts() {}

void KeyboardCounterUI::setupLayout()
{
    QVBoxLayout *main_v_lyt = new QVBoxLayout();
    QHBoxLayout *letter_h_lyt = new QHBoxLayout();
    for (auto *letter_pbt : ui_.key_pbts)
    {
        letter_pbt->setFixedWidth(20);
        letter_h_lyt->addWidget(letter_pbt);
    }
    main_v_lyt->addLayout(letter_h_lyt);
    this->setLayout(main_v_lyt);
}