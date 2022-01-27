// 期中考第四題(第二次改).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int number[10]{ 0 };
int cover[10]{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
int num,select;
void select2();
void select3();

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10;i++) {
        number[i] = (rand() % 10);
        for (int j = 0; j < i;j++) {
            if (number[i] == number[j]) {
                i--;
                break;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("▇  ");
    }
    printf("\n");
    for (int i = 0; i < 10;i++) {
        printf("%d  ", number[i]);
    }
    printf("\n");
    for (;;) {
        printf("(1)翻牌 (2)蓋牌 (3)結束:");
        scanf_s("%d", &select);
        if (select == 3) {
            printf("結束");
            break;
        }
        if (select == 2) {
            select2();
        }
        if (select == 1) {
            select3();
        }
    }
}

void select2() {
    printf("請輸入要覆蓋之數字");
    scanf_s("%d", &num);
    for (int i = 0; i < 10; i++) {
        if (number[i] == num) {
            cover[i] = -1;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (cover[i] == -1) {
            printf("▇  ");
        }
        else {
            printf("%d  ", number[i]);
        }
    }
}

void select3() {
    printf("請輸入要翻開之數字");
    scanf_s("%d", &num);
    for (int i = 0; i < 10; i++) {
        if (number[i] == num) {
            cover[i] = 0;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (cover[i] == -1) {
            printf("▇  ");
        }
        else {
            printf("%d  ", number[i]);
        }
    }
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
