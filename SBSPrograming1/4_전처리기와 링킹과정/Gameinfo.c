#include "GameInput.h"

void gotoxy(short x, short y) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { x, y };               // 커서 위치 구조체
    SetConsoleCursorPosition(hOut, pos); // 실제 커서 이동
}