#pragma once
template <class T>
void sort(T arr[3])
{
	
	int i, j, temp;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//return arr;
}
