#include <stdio.h>
#include <string.h>

int main() {

	char buffer[8];
	int foo = 3;
	int bar = 5;

	for(int i = 1; i < 101; i++) {
		strcpy(buffer,"");
	 	if (i%foo == 0){strcat(buffer,"Fizz");}
	 	if (i%bar == 0){strcat(buffer,"Buzz");}
	 	if (strcmp(buffer,"") == 0){printf("%i\n",i);}
	 	else{printf("%s\n",buffer);}	 	
	}
	return 0;
}