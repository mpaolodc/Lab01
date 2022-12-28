#include<stdio.h>
int x;
int y;

int main()
{
	printf("Let's reverse 3 integers: ");
	fflush(stdout);
	scanf("%d", &x);
	while (x/1000 != 0){
		printf("Let's reverse 3 integers: ");
		fflush(stdout);
		scanf("%d", &x);
	}
	for (int i = 0; i < 3; i++){
		y = x%10;
		x = (x-y)/10;
		printf("%d",y);	
	}
	return 0;

}