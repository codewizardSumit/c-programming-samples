#include <stdio.h>
#include <string.h>
int main(){
	int count;
	
	printf("how many subject's marks, do you want to Enter :");
	scanf("%d",&count);
	if(count <= 0){
		printf("Please Enter a valid number.");
		return 1;
		}
	printf("\nPlease Enter the Subjects Below");
	int marks[count];
	char sub[count][50];
	for(int i = 0; i < count; i++){
		printf("\nSubject %d : ",i + 1);
		scanf("%s", &sub[i]);
		printf("\nEnter marks for %s : ",sub[i]);
		scanf("%d",&marks[i]);
		}
	printf("\nYour marks for the following subjects\n");
	for(int i = 0; i < count; i++){
		printf("%s : %d\n",sub[i], marks[i]);
		} 
	float avg;
	int sum(0);
	for(int i = 0; i < count; i++){
		
		sum += marks[i];
		
		}
	avg = (float)sum/count;
	printf("\nThe Average mark you got are %.2f",avg);
		

	return 0;

}
		