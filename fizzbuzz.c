#include <stdio.h>

main() {

	for(int i = 1; i < 101; i++) {
		char fizz[] = "Fizz";
		char buzz[] = "Buzz";
		char fizzBuzz[] = "FizzBuzz";

	 	if (i%3 == 0){
	 		if (i%5 == 0){
	 			printf("%s\n",fizzBuzz);
	 		}else{
	 			printf("%s\n",fizz);
	 		}
	 	}else if(i%5 == 0){
	 		printf("%s\n",buzz);
	 	}else {
	 		printf("%i\n",i);
	 	}
	}
	return 0;
}