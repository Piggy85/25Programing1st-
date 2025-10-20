#pragma once

//소스 코드. 빌드 실행가능한 코드로 변환한다
//소스 파일마다 object 생성해서 최종적으로 결합을 한다. 빌드 시간에 낭비가 발생한다
//

//키보드의 입력을 구현하는 기능

#include <conio.h>      // _kbhit(), _getch() : 키 입력 감지용 입력을 받을 때 필요한 함수
#include <windows.h>    // 콘솔 화면 제어용 (커서 이동 등) 윈도우 키에 대한 입력
#include <stdio.h>

//다음과 같은 코드들이 존재한다 이 코드를 참조해서 넘겨줘라 모든 코드를 넘길 필요가 없다
//h파일과 c파일 나누어서 h파일만 전달한다 실제 파일은 C파일에다 작성한다

void hide_cursor(int hide) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); // 콘솔 핸들(출력용) 가져오기
    CONSOLE_CURSOR_INFO ci;
    ci.dwSize = 25;                 // 커서 두께 (0~100)
    ci.bVisible = hide ? FALSE : TRUE; // 0이면 보이고 1이면 숨김
    SetConsoleCursorInfo(hOut, &ci);   // 커서 정보 설정
}

// ───────────────────────────────────────────────
// 2. (x, y) 좌표로 커서를 이동하는 함수
void gotoxy(short x, short y);

// ───────────────────────────────────────────────
// 3. 현재 콘솔 창 크기(출력 가능한 영역) 가져오기
SMALL_RECT get_window_rect(void) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(hOut, &info); // 콘솔 정보 가져오기
    return info.srWindow;   // 현재 창의 좌상단, 우하단 좌표 반환
}



//총을 발사하는 게임을 만든다

int bulletMaxcount = 8;
float fireRate = 0.2f;
