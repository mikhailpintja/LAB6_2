// Lab6_2.c: Пошук мінімальний елемент серед елементів, якi знаходяться вище бічної дiагоналi квардартного масиву
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
	setlocale(LC_CTYPE, "ukr");
	const int Low = -100, High = 100, n = 7;
	unsigned int i, j;
	int a[7][7], min;
	srand(time(0));
	for (i = 0; i <= (n - 1); i++)
	{
		for (j = 0; j <= (n - 1); j++)
		{
			a[i][j] = Low + rand() % (High - Low + 1);
		}
	}
	min = 0;

	for (i = 0; i <= (n - 1); i++)
	{
		for (j = 0; j <= (n - 1); j++)
		{
			if (i + j<n - 1 && min > a[i][j]) min = a[i][j];
		}
	}
	printf("\n Згенерована матриця: \n \n");
	for (i = 0; i <= (n - 1); i++)
	{
		if (i != 3) printf("\t | ");
		if (i == 3) printf(" A[%d,%d]= | ", n, n);
		for (j = 0; j <= (n - 1); j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\b\b\b\b\b\b| \n");
	}
	printf("\n Мiнiмальне значення серед елементiв, якi знаходяться вище бiчної сторони масива МIN=%d", min);
	int getch(); getch();
	return 0;
}
