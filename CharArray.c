#include <stdio.h>
#include <stdlib.h>

int main(){
	char MyFamily[6][16];
	int count;
	for(count = 0; count < 6;count++){
		printf("Enter the name of family members %d:",count+1);
		scanf("%15s",MyFamily[count]);
	}
	printf("\n\t\t___________Here are your family members\t\t___________\n\n");
	int i;
	for(i = 0; i< 6;i++){
		printf("family members %d,%s:\n",i+1, MyFamily[i]);
	}
	return 0;
} 