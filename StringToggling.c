#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 300
int main(){

	char strdata[size];
	printf("Please Enter an qoute to toggle it: \n");
	fgets(strdata,size,stdin);
	

	//printf("%s",strdata);
	for(int i = 0; strdata[i] != '\0'; i++){
		if(strdata[i]  >= 'A' && strdata[i] <= 'Z'){
			strdata[i] = strdata[i] + 32;
		}else if( strdata[i]  >= 'a' && strdata[i] <= 'z'){
			strdata[i] = strdata[i] - 32;
		}
	}
	printf("\nThe toggled string is %s\n", strdata);
	return 0;
}