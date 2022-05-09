#include<stdio.h>

int mgetline3(char s[], int lim){
	int i,c;
	
	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i]=c;
		
	if(c=='\n')
		s[i++] = c;
	
	s[i] = '\0';

}
