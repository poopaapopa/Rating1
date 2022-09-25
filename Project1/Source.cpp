#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int search(int F)
{
	int fib1 = 0, fib2 = 1, index = 1;
	while (fib2 < F)
	{
		fib2 += fib1;
		fib1 = fib2 - fib1;
		index++;
	}
	return index;
}

int main()
{
	printf("Введите натуральное число: ");
	int F = 0, flag = scanf("%d", &F);
	while (flag != 1 || F <= 0)
	{
		while (getchar() != '\n');
		printf("Ошибка. Попытайтесь ещё раз\n");
		flag = scanf("%d", &F);
	}
	printf("%d", search(F));
	return 0;
}