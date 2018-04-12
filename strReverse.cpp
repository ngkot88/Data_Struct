#include<stdio.h>
#include<stdlib.h>
void strReverse(char *);
int main(){
	char *input=(char *)malloc(sizeof(char)*1024);
	scanf("%s",input);
	strReverse(input);
	printf("%s\n",input);
	free(input);
	return 0;
}
void strReverse(char *str){
	int i = 0;
	for(i=0;str[i]!='\0';i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= ('a'-'A');  //소문자에서 대문자로
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += ('a'-'A');  //대문자에서 소문자로
		}
	}
}