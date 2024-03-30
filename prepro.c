#include <stdio.h>
#include <stdlib.h>
#define NAME sumit
#define COUTRY India

int main(){
	#if NAME==sumit
		printf("Hello Sumit");
		printf("\nI love India",__LINE__);
	#elif COUNTRY != India
		printf("I love India");
	#else
		print("Hi, Who is this");
	#endif
	return 0;
	}