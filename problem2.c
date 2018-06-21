#include <stdio.h>

int solver();

int main(){
	printf("ans: %d\n", solver());
}

int solver(){	
	int sum = 0, fib1 = 1, fib2 = 2, new;

	while(fib2 < 4000000){ 
	    if(fib2 % 2 == 0){
			sum+=fib2;
		}
        new = fib1 + fib2;
        fib1 = fib2;
        fib2 = new;
	}

	return sum;
}


