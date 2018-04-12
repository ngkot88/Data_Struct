#include<stdio.h>
#include<stdlib.h>

int mstrcmp(char *, char*);
int main(){
	char *input1=(char *)malloc(sizeof(char)*1024);
	char *input2=(char *)malloc(sizeof(char)*1024);
	scanf("%s %s", input1, input2);
	int cmp=mstrcmp(input1, input2);
	
	return 0;
}
int mstrcmp(char *str1, char *str2){
	int result=0;

	return result;
}