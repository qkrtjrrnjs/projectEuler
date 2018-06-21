#include <stdio.h>
#include <math.h>
/*
    problem 3: largest prime factor of 600851475143
*/
void solver();
int main(){
    solver();
}

void solver(){
    long n = 600851475143;
    while(n % 2 == 0){
        n /= 2;
        printf("%ld ", n);        
    }
    for(int i = 3; i < sqrt(n); i+=2){
        while(n % i == 0){
            n /= i;
            printf("%ld ", n);
        }
    }     
}


