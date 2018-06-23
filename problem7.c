#include<stdio.h>
#include<math.h>
/*
    problem 7: Find the 10001st prime number
*/
int main(){
    int ans = 2;
    int primeNums = 0;
    int isPrime = 0;

    while(1){
        for(int i = 1; i <= sqrt(ans); i++){
            if(ans % i == 0){
                isPrime++;
            }
        }
        if(isPrime < 2){ //checks if num is prime 
            primeNums++;
            printf("%dth prime is %d\n", primeNums, ans);
        }
        if(primeNums == 10001)
            break;
        isPrime = 0;
        ans++;
    } 
}

