#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strcat(char *, char *);
int main(){
	char *input1=(char *)malloc(sizeof(char)*1024);
	char *input2=(char *)malloc(sizeof(char)*1024);
	char *result;
	scanf("%s %s", input1, input2);
	result = strcat(input1, input2);
	printf("%s\n",result);
	free(input1);
	free(input2);
	free(result);
	return 0;
	
}
char *strcat(char *str1, char *str2){
	char *result;
	int size1, size2 ,i;
	size1=strlen(str1);
	size2=strlen(str2);
	result=(char *)malloc(sizeof(char)*(size1 + size2)+1);

	for(i=0; str1[i]!='\0'; i++)
		result[i]=str1[i];
	for(i=0; str2[i]!='\0'; i++)
		result[i+size1]=str2[i];
	result[i+size1]='\0';
	return result;
}