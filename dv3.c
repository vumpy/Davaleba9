#include<stdio.h>
#define MAXLINE 1000

int mgetline3(char line[], int maxline);
int any(char s1[], char s2[]);

int main(void){
	char s1[MAXLINE], s2[MAXLINE];
	int val;
	
	
	mgetline(s1, MAXLINE);
	mgetline(s2, MAXLINE);
	
	val = any(s1,s2);
	
	printf("%d", val);

	return 0;
}

int any(){
	int i,j;
	
	for(i = 0; s1[i] != '\0'; ++i) {
		for(j = 0; (s1[i] != s2[j]) && s2[j] != '\0'; ++j)
			;
		if(s2[j] != '\0' && s2[j] != '\n') {
			return i;
		}
	}
	
	return -1;
	
}
