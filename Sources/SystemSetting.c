/* File: SystemSetting.c */

#include "SystemSetting.h"

void selfCls()  // ���M�ſù���z�O�����N���бa��Ĥ@�Ӧ�m�A�A������s�e��
{
    handler = GetStdHandle(STD_OUTPUT_HANDLE);  // ���o�зǿ�X��handle
    xyPoint.X = 0;  // �Ʊ�x, y�y�г����0����m
    xyPoint.Y = 0;
    SetConsoleCursorPosition(handler, xyPoint);  // �N�y�г]�m��Ӧ�m
    cursorInfo.bVisible = FALSE;  // ���г]�����i��
    cursorInfo.dwSize = 1;  // ���Фj�p�Τ���A���]��1
    SetConsoleCursorInfo(handler, &cursorInfo);  // �]�m���и�T
}

