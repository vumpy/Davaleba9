#include<stdio.h>
#include<stdlib.h>

#define YES 1
#define NO 0
#define MAXLINE 100

int mgetline(char line[], int maxline);
int htoi(char s[]);

int main(void){
	char line[MAXLINE];
	int value;
	
	mgetline(line, MAXLINE);
	value = htoi(line);
	
	printf("The value of %s is %d", line, value);
	
	return 0;
}



int htoi(char s[]){
	int hexdigit,i,inhex,n;
	i = 0;
	if(s[i] == '0'){
		++i;
		if(s[i] == 'x' || s[i] == 'X')
			++i;
	}
	n = 0;
	inhex = YES;
	
	for(;inhex==YES; ++i){
		if(s[i] >= '0' && s[i] <= '9')
			hexdigits = s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			hexdigits = s[i] - 'a' + 10
		else if(s[i]>='A' && s[i] <= 'F')
			hexdigits = s[i] = 'A' + 10;
		else
			inhex = NO;
		
		if(inhex == YES)
			n = 16 * n + hexdigits;
	
	}
	return n;
}
