#include <stdio.h>
#include <conio.h>
void firstNatural(int current,int num){
	
	if(current > num)
		return;
	printf("%d ", current);
	firstNatural(current+1,num);
	
	
}
int main(){
	int num;
	printf("Enter number upto print Natural Numbers : ");
	scanf("%d", &num);
	if(num <= 0)
		printf("Please Enter a +Ve Value");
	printf("Natural Number :\n");
	firstNatural(1,num);
	getch();
	return 0;
}