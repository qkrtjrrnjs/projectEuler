#include<stdio.h>
#include<math.h>
/*
    problem 6: Find the difference between the sum of the squares of the first 
    one hundred natural numbers and the square of the sum
*/
//most primitive solution
int main(){
    long squareSum = 0;
    long sumSquare = 0; 

    for(int i = 1; i <= 100; i++){
        squareSum+=pow(i, 2);
        sumSquare+=i;
    }
    sumSquare = pow(sumSquare, 2);
    
    printf("ans: %ld\n", sumSquare - squareSum);
}
