#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Gen_Story();
void Gen_Song();


int main(int argc, char* argv[]){
	
	if(argc < 2){
		printf("Usage: %s story OR song]",argv[0]);
		return 1;
	}
	if(strcmp(argv[1],"story") == 0){
		printf("\n\n\t\t__________PRESENTING STORY FOR YOU___________\n\n");
		Gen_Story();
	}else if(strcmp(argv[1],"song") == 0){
		printf("\n\n\t\t__________PRESENTING SONG FOR YOU___________\n\n");
		Gen_Song();
	}else{
		printf("Unknown Input: See\nUsage: %s [story|song]", argv[0]);
		return 1;
	}
	return 0;
}

void Gen_Story(){
	printf("Once there was a king who was very famous for his kindness.\nOne day a saint was come to the courtier of the king.\nThe saint demaanded his all the property for free.\nThe king who was famous for his kindness and honesty had given his all kingdom to the saint\nwhithout thinking anything \nafter seeing this, the saint was impressed by the king\nand gave him the boon to live one Hundred years.\n");
}
void Gen_Song(){
	printf("Can I call Baby\nCan you be friend\nDon't you worry,I'll be there\nWhen everyone is gone\nI need somebody\nWho can love me\nAt my worst\nKnowing I'm Not perfect...\n");
}