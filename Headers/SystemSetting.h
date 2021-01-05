/* File: SystemSetting.h */

#ifndef __SYSTEMSETTING_H__
#define __SYSTEMSETTING_H__

#include <stdio.h>
#include <string.h>  
#include <windows.h>

HANDLE handler;  // 控制視窗的變數，視為視窗的控制把手
COORD xyPoint;  // Windows用的x, y座標型態
CONSOLE_CURSOR_INFO cursorInfo;  // 有關光標的資訊構成的結構

void selfCls();  // 自行撰寫的清空螢幕

#endif