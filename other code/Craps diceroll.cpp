// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
int rollDice(), sum, sumf,x=0;

int main()
{
	for (;;) {
		srand(time(NULL));
		sum = rollDice();
		if (sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10) {
			sumf = sum;
			for (;;) {
				sum = rollDice();
				if (sum == sumf) {
					printf("players wins\n");
					x = 1;
					break;
				}
				if (sum == 7) {
					printf("player loses\n");
					x = 1;
					break;
				}
			}
		}
		if (x == 1) {
			x = 0;
			break;
		}
	    if (sum == 7 || sum == 11) {
				printf("players wins\n");
				break;
			}
		if (sum == 2 || sum == 3 || sum == 12) {
				printf("players loses\n");
				break;
			}
		
	}

}

int rollDice() 
{
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;
	printf("player rolled %d+%d=%d\n", dice1, dice2, dice1 + dice2);
	return dice1 + dice2;
}