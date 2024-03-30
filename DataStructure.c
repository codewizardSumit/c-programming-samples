#include <stdio.h>
int main(){
	struct student{
		char name[50];
		int rollno;
		int sno;
	};
	struct student Sumit = { name : "Sumit Kumar", rollno : 23, sno : 2323};
	printf("Name of the student %s\nRoll No. of the student %d\nSR No. of the student %d\n",Sumit.name, Sumit.name, Sumit.rollno, Sumit.sno);
	
	struct Date{
		int day;
		int month;
		int year;
	};
	struct Date Today = { day : 15, month : 8, year : 2023};
    printf("Today date is %d\\%d\\%d",Today.day,Today.month,Today.year);
	struct Date *ptr1;
	struct student *ptr2;
	ptr1 = &Today;
	ptr2 = &Sumit;
	printf("\nthe name from Student is %s\nthe day from Date %d", ptr2 -> name, ptr1 -> day);
	
	
	
		
	return 0;

}