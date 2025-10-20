#pragma once

int 키();

int 키()
{
    char avatar = '@'; // 화면에 표시할 문자
    SMALL_RECT win = get_window_rect(); // 콘솔 창 크기 확인
    short x = (win.Left + win.Right) / 2; // 화면 중앙 x좌표
    short y = (win.Top + win.Bottom) / 2; // 화면 중앙 y좌표
    short px = x, py = y; // 이전 위치 저장용 변수

    system("title C 콘솔 이동 - 방향키 + WASD (종료: Q)"); // 창 제목 설정
    hide_cursor(1); // 커서 숨기기

    gotoxy(x, y);      // 커서 이동
    putchar(avatar);   // '@' 출력
    fflush(stdout);    // 즉시 화면 반영

    // ───────────────────────────────────────────────
    // 5. 무한 루프 (입력 받을 때마다 위치 갱신)
    for (;;) {
        if (_kbhit()) {   // 키가 눌렸는지 확인 (입력 버퍼 비어있지 않으면 true)
            int ch = _getch(); // 키 입력(즉시, 엔터 없이)

            // ── 방향키 처리 ─────────────────────────────
            if (ch == 224 || ch == 0) {   // 방향키는 2바이트로 들어옴
                int arrow = _getch();      // 두 번째 바이트 읽기
                switch (arrow) {
                case 72: y--; break; // ↑ 위로 이동
                case 80: y++; break; // ↓ 아래로 이동
                case 75: x--; break; // ← 왼쪽으로 이동
                case 77: x++; break; // → 오른쪽으로 이동
                default: break;
                }
            }
            // ── 일반 키(WASD) 처리 ──────────────────────
            else {
                switch (ch) {
                case 'w': case 'W': y--; break; // 위로 이동
                case 's': case 'S': y++; break; // 아래로 이동
                case 'a': case 'A': x--; break; // 왼쪽으로 이동
                case 'd': case 'D': x++; break; // 오른쪽으로 이동

                    // Q 입력 시 종료
                case 'q': case 'Q':
                    hide_cursor(0); // 커서 다시 보이기
                    gotoxy(0, get_window_rect().Bottom); // 커서를 아래로 이동
                    printf("\n종료합니다.\n");
                    return 0;
                default: break;
                }
            }

            // ── 콘솔 크기 변경 시 다시 확인 ──────────────
            win = get_window_rect();

            // ── 경계 처리 (화면 밖으로 나가지 않게) ──────
            if (x < win.Left)  x = win.Left;
            if (x > win.Right) x = win.Right;
            if (y < win.Top)   y = win.Top;
            if (y > win.Bottom)y = win.Bottom;

            // ── 이전 위치 지우기 ───────────────────────
            gotoxy(px, py); putchar(' '); // 공백으로 덮어 지움

            // ── 새 위치 그리기 ────────────────────────
            gotoxy(x, y); putchar(avatar);
            fflush(stdout); // 즉시 반영

            // ── 현재 위치를 다음 루프에서 이전 위치로 저장
            px = x;
            py = y;
        }

        Sleep(1); // 너무 빠른 반복 방지 (CPU 점유율 낮추기)
    }
}

