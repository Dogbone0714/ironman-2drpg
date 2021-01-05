/* File: SystemSetting.c */

#include "SystemSetting.h"

void selfCls()  // 此清空螢幕原理是直接將光標帶到第一個位置，再直接更新畫面
{
    handler = GetStdHandle(STD_OUTPUT_HANDLE);  // 取得標準輸出的handle
    xyPoint.X = 0;  // 希望x, y座標都能到0的位置
    xyPoint.Y = 0;
    SetConsoleCursorPosition(handler, xyPoint);  // 將座標設置到該位置
    cursorInfo.bVisible = FALSE;  // 光標設為不可見
    cursorInfo.dwSize = 1;  // 光標大小用不到，先設為1
    SetConsoleCursorInfo(handler, &cursorInfo);  // 設置光標資訊
}

