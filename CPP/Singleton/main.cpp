#include <iostream>
#include "GameSetting.h"

GameSetting * GameSetting::_instance = NULL;

void someFunction () {
    GameSetting *setting = GameSetting::getInstace();
    setting->displaySetting();
}

int main() {

    GameSetting *setting = GameSetting::getInstace();
    setting->displaySetting();
    setting->setBrighness(100);

    someFunction();
    return 0;
}