#include <stdio.h>
#include <stdlib.h>
void ShowMarks(int[][6],int NumberOfStudent);
void InputArray(int [][6],int NumberOfStudent);
int main(){
	
	int NumberOfStudent;
	printf("How many student mark is to be input? \nplease Enter: ");
	scanf("%d",&NumberOfStudent);
	printf("\nEnter Marks up to Six Subjects");
	int marks[NumberOfStudent][6];
	InputArray(marks,NumberOfStudent);
	ShowMarks(marks,NumberOfStudent);
	
	return 0;
	
}
void InputArray(int arr[][6],int NumberOfStudent){
	for(int i = 0; i < NumberOfStudent; i++){
		for(int j = 0; j < 6; j++){
			printf("\nEnter marks for student %d, and Subject %d :", i+1,j+1);
		
			scanf("%d",&arr[i][j]);
		}
		
	}
}	
void ShowMarks(int showM[][6], int NumberOfStudent){
	int StudentNumber;
	char ch;
	do{
		printf("Which student's mark do you want to see?\nEnter Student Number :");
		scanf("%d", &StudentNumber);
		if(StudentNumber <= 0 || StudentNumber > NumberOfStudent){
			printf("Invalid student Number");
			return;
		}	
		
		printf("Marks for Student %d\n", StudentNumber);
		for(int i = 0; i < 6; i++)
			printf("Subject %d : %d\n", i+1,showM[StudentNumber - 1][i]);
			
		while(getchar()!='\n');
		
		printf("\nDo you want to check marks for another student (y/n) : ");
		scanf(" %c", &ch);
	}while(ch == 'Y' || ch == 'y');
}