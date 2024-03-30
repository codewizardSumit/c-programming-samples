#include <stdio.h>
int main(){
	int number;
	printf("Enter number upto find ugly prime numbers : ");
	scanf("%d",&number);
	if(number < 1){
		printf("Enter a positive number");
		return 1;
	}
	int count = 0;
	for(int i = 2; i < number; i++){
		if(i%2 == 0)
			if(i%3 == 0)
				if(i%5 == 0){
					count +=i;
					printf("total ugly prime numbers are %d",count);
				}
	}
	return 0
}	