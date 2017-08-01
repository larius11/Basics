#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int foo = 3;
	int bar = 5;

	for(int i = 1; i < 101; i++) {

		char buffer[8];

	 	if (i%foo == 0){strcpy(buffer,"Fizz");}
	 	if (i%bar == 0){strcpy(buffer,"Buzz");}
	 	if (strcmp(buffer,"") == 0){itoa(i,buffer,10);}

	 	printf("%s\n",buffer);
	}
	return 0;
}