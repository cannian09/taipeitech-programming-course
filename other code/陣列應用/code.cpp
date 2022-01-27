#include <iostream>
#include <stdio.h>
#define responses_size 40
#define freqency_size  10
int count = 1, number=0, score;
int main()
{
	int responses[responses_size]{0};
	int frequency[freqency_size];
	for (size_t i = 0; i < 10; i++) {
		frequency[i] = 0;
	}
	for (int i = 0; i < 40;) {
		printf("please enter response number(1~10) %d \n", count);
		scanf_s("%d", &number);
		if (1 <= number && number <= 10) {
			responses[i] = number;
			/*printf("%d", responses[i]);*/
			count++;
			i++;
		}
	}
	for (size_t i = 0; i < 40; i++) {
		score = responses[i];
		for (size_t j = 0; j < 10; j++) {
			if (score == (j + 1)) {
				frequency[j]++;
		}
		}
	}
	printf("number    frequency\n");
	for (size_t i = 1, j = 0; i < 11; i++) {
		printf("%6u%13d\n", i, frequency[j]);
		j++;
	}
}