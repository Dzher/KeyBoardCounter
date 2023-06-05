#include "keyboardCounterUI.h"
#include <QtWidgets/QApplication>

// #ifndef _KEYBOARDCOUNTERMAIN_H_
// #define _KEYBOARDCOUNTERMAIN_H_

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    kbcUI::KeyboardCounterUI *kbc_wdgt = new kbcUI::KeyboardCounterUI("keyboardCounterUI");
    kbc_wdgt->show();
    return app.exec();
}

// #endif //_KEYBOARDCOUNTERMAIN_H_