#include <stdio.h>
void swap(float, float);

int main()
{
	printf("\t\t__________________PROGRAM_TO_SWAP_VALUES____________________\n\n");
	float x,y;
	printf("Enter the two numbers for swaping :");
	scanf("%f %f",&x,&y);
	printf("\nValues before swaping =  %.1f %.1f\n",x,y);
	swap(x,y);
	return 0;
}
void swap(float a, float b)
{
	float temp = a;
	a  = b ;
	b = temp;
	printf("values after swaping =  %.1f %.1f",a,b);
	return;
}
