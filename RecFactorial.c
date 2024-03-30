#include <stdio.h>
#include <conio.h>
int factorial(int n);
int main(){
	int num;
	printf("Enter a Number to calculate Factorial :");
	scanf("%d",&num);
	if(num == 0){
		printf("Factorial is 1");
	
	}else{
		int fact = factorial(num);
		printf("Factorial is %d",fact);
		
	}
	getch();
	return 0;
}
int factorial(int num){
	if(num == 0)
		return 1;
	else
		return (num * factorial(num - 1));
}
	