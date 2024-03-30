#include <stdio.h>
int main(int argc, char *argv[]){
	printf("\nno of commands: %d\n",argc);
	for(int i = 0; i < argc; i++){
		printf("\narguments: %d %d\n",i,argv[i]);
	}
	return 0;
}