#include<stdio.h>
int hours;
int mins;
float seconds;

int main(){
	printf("Tell me the time!!!\n");
	printf("What's the hour/s value: ");
	fflush(stdout);
	scanf("%d", &hours);
	while ((hours<0)||(hours>23)){
		printf("What's the hour/s value: ");
		fflush(stdout);
		scanf("%d", &hours);
	}

	printf("What's the minute/s value: ");
	fflush(stdout);
	scanf("%d", &mins);
	while ((mins<0)||(mins>59)){
		printf("What's the minute/s value: ");
		fflush(stdout);
		scanf("%d", &mins);
	}

	printf("What's the second/s value: ");
	fflush(stdout);
	scanf("%f", &seconds);
	while ((seconds<0.0)||(seconds>=60.0)){
		printf("What's the second/s value: ");
		fflush(stdout);
		scanf("%f", &seconds);
	}

	printf("The entered time is: %d hours %d minutes and %0.4f seconds", hours, mins,seconds);
	return 0;

}