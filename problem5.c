#include<stdio.h>
/*
    problem 5: find smallest positive number evenly 
    divisible by all numbers from 1 to 20
*/

//probably the most inefficient solution
int main(){
    int divisible = 1;
    int n = 1;
    while (1){
        for(int i = 2; i <= 21; i++){
            if(n % i != 0){
                divisible = 0;
                break;
            }
        }
        if(divisible == 1){
            printf("ans: %d\n", n);
            break;
        }
        divisible = 1;
        n++;
    }
}


