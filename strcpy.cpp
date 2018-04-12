#include<stdlib.h>
#include<stdio.h>
void strcpy(char*,char*);
int main(){
	char *src="Hello, nice to meet you";
	char *des=(char*)malloc(sizeof(char)*1024);

	strcpy(des,src);
	printf("%s\n",des);

	
	return 0;
}
void strcpy(char *des, char *src){
	int i=0;
	for(; src[i]!='\0';i++)
		des[i]=src[i];
	des[i]='\0';
}