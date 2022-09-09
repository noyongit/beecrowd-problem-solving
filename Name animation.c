#include<stdio.h>
#include<windows.h>
int main()
{
    void gotoxy(int x, int y)
    {
        static HANDLE h = NULL;
        if(!h)
            h = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD c = { x, y };
        SetConsoleCursorPosition(h,c);
    }
    int i=5, time = 100, x1 = 5, y1 = 10, len = 10;
    for(i = 0; i<8; i++)
    {
        gotoxy(x1, y1 + i);
        printf("N");
        fflush(stdout);
        Sleep(time);
        gotoxy(x1 + i, y1 + i);
        printf("N");
        Sleep(time);
    }
    for(i = 0; i<8; i++)
    {
        x1 = 12;
        gotoxy(x1, y1 + i);
        printf("N");
        fflush(stdout);
        Sleep(time);
    }
    for(i = 0; i<8; i++)
    {
        x1 = 14,
        gotoxy(x1, y1 + i);
        printf("N");
        fflush(stdout);
        Sleep(time);
        ///O
        gotoxy(x1 + i, y1);
        printf("O");
        fflush(stdout);
        Sleep(time);
        gotoxy(x1, y1 + i);
        printf("O");
        fflush(stdout);
        Sleep(time);
    }
    for(i = 0; i<8; i++)
    {

        y1 = 17, x1 = 14;
        gotoxy(x1 + i, y1);
        printf("O");
        fflush(stdout);
        Sleep(time);
        y1 = 10, x1 = 14;
        gotoxy(x1 + i, y1);
        printf("O");
        fflush(stdout);
        Sleep(time);
        y1 = 17, x1 = 21;
        gotoxy(x1, y1-i);
        printf("O");
        fflush(stdout);
        Sleep(time);
    }
    for(i = 0; i<5; i++)
    {
        ///y
        y1 = 10, x1 = 23;
        gotoxy(x1 + i, y1 + i);
        printf("Y");
        fflush(stdout);
        Sleep(time);
        y1 = 14, x1 = 27;
        gotoxy(x1 + i, y1 - i);
        printf("Y");
        fflush(stdout);
        Sleep(time);
    }
    for(i = 0; i<3; i++)
    {
        y1 = 15, x1 = 27;
        gotoxy(x1, y1 + i);
        printf("Y");
        fflush(stdout);
        Sleep(time);
    }
    for(i = 0; i<8; i++)
    {
        ///2O
        y1 = 17, x1 = 33;
        gotoxy(x1 + i, y1);
        printf("O");
        fflush(stdout);
        Sleep(time);
        y1 = 10, x1 = 33;
        gotoxy(x1 + i, y1);
        printf("O");
        fflush(stdout);
        \
        Sleep(time);
        y1 = 10, x1 = 33;
        gotoxy(x1, y1+i);
        printf("O");
        fflush(stdout);
        Sleep(time);
        y1 = 10, x1 = 40;
        gotoxy(x1, y1+i);
        printf("O");
        fflush(stdout);
        Sleep(time);
        ///2N
        y1 = 10, x1 = 42;
        gotoxy(x1, y1+i);
        printf("N");
        fflush(stdout);
        Sleep(time);
        y1 = 10, x1 = 42;
        gotoxy(x1 + i, y1+i);
        printf("N");
        fflush(stdout);
        Sleep(time);
        y1 = 10, x1 = 49;
        gotoxy(x1, y1+i);
        printf("N");
        fflush(stdout);
        Sleep(time);

    }
    getchar();

    return 0;

}
