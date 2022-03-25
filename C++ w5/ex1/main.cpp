#include <iostream>﻿
#ifdef _WIN32
#include <conio.h>
#endif // _WIN32
#include "playground.h"
using namespace std;

int main()
{
    playground playGround(5);
    
    cout << "請使用方向鍵 ↑、↓ 增加、減少人數，按下 ESC 離開程式" << endl << endl;
    cout << "目前空地人數：" << playGround.getcurrencount()<< endl;

#ifndef _WIN32
    system("stty -icanon");
#endif // !_WIN32

    char key;
    do
    {
#ifdef _WIN32
        key = _getch();
#else
        key = getchar();
#endif // _WIN32
        if (key == (char)224)   // determine whether the direction keys pressed
        {
#ifdef _WIN32
            key = _getch();
#else
            key = getchar();
#endif // _WIN32
            if (key == (char)72)        // Arrow UP
            {
                if (playGround.addcount() == false)
                {
                    cout << "空地人數已滿！" << endl;
                    continue;
                }
            }
            else if (key == (char)80)   // Arrow DOWN
            {
                if (playGround.decreasecount() == false)
                {
                    cout << "空地沒有人！" << endl;
                    continue;
                }
            }
        }
        cout << "目前空地人數：" << playGround.getcurrencount() << endl;
    } while (key != (char)27);    // press ESC to terminate program
    return 0;
}
