/* File: SystemSetting.h */

#ifndef __SYSTEMSETTING_H__
#define __SYSTEMSETTING_H__

#include <stdio.h>
#include <string.h>  
#include <windows.h>

HANDLE handler;  // ����������ܼơA����������������
COORD xyPoint;  // Windows�Ϊ�x, y�y�Ы��A
CONSOLE_CURSOR_INFO cursorInfo;  // �������Ъ���T�c�������c

void selfCls();  // �ۦ漶�g���M�ſù�

#endif