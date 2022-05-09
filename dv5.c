#include<stdio.h>

int mstrindex(char source[], char searchfor[]);

int main(void){
	char line[] = "Diax es aris chemi davaleba";
	char pattern[] = "Diax";
	
	int found;
	
	found = mstrindex(line, pattern);
	
	printf("Found the right index: %d\n", found);

}


