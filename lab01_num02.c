#include<stdio.h>
int x;
int y=0;

int main()
{
	printf("Let's get the Average of Five Numbers.\n");
	printf("First Number: ");
	fflush(stdout);
	scanf("%d", &x);
	y = y + x;

	printf("Second Number: ");
	fflush(stdout);
	scanf("%d", &x);
	y = y + x;

	printf("Third Number: ");
	fflush(stdout);
	scanf("%d", &x);
	y = y + x;

	printf("Fourth Number: ");
	fflush(stdout);
	scanf("%d", &x);
	y = y + x;

	printf("Fifth Number: ");
	fflush(stdout);
	scanf("%d", &x);
	y = y + x;

	printf("Ave: %0.2f", y/5.0);
	return 0;
}