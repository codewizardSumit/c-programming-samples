#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char source[] = "Hello welcome to the world of C.";
	unsigned int str_len = strlen(source);
	char target[str_len + 1];
	char *Return = strcpy(target,source);
	printf("Source = %s\nTarget = %s\n", source,Return);
	
	return 0;
}