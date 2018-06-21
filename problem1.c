#include<stdio.h>

/*
	Problem 1:  Multiples of 3 and 5
*/

int solver();

int main(){
	printf("ans: %d\n", solver());
}

int  solver(){
	int sum = 0;
	for(int i = 3; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0)
			sum+=i;
	}
	return sum;
}
