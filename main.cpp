#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

typedef long long ll;

void FixConsoleWindow()
{
    HWND consoleWindow = GetConsoleWindow();
    LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
    style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
    SetWindowLong(consoleWindow, GWL_STYLE, style);
}

// View
void GotoXY(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
COORD GetConsoleCursorPosition(HANDLE hConsoleOutput)
{
    CONSOLE_SCREEN_BUFFER_INFO cbsi;
    if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))
    {
        return cbsi.dwCursorPosition;
    }
    else
    {
        // The function failed. Call GetLastError() for details.
        COORD invalid = {0, 0};
        return invalid;
    }
}
// View

int main()
{
    FixConsoleWindow();
    cout << "Hello World";
    while (true)
    {
        if (_kbhit())
        {
            switch (_getch())
            {
            case 'a':
                cout << 'a';
                break;
            case 'w':
                cout << 'w';
                break;
            case 's':
                cout << 's';
                break;
            case 'd':
                cout << 'd';
                break;
            default:
                break;
            };
        }
    }
    return 0;
}
