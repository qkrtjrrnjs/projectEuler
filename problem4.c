#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    problem 4: find largest palindrome made from product of two 3-digit numbers
*/

int isPalindrome();
int main(){
    
    int largestPal = 0;   

    //Looping through and finding the largest palindrome product 
    for(int i = 999; i > 0; i--){
        for(int j = 999; j > 0; j--){
            if(isPalindrome(i*j) == 1){
                if(largestPal < i * j)
                    largestPal = i * j;
                break;
            }
        }
    }
    printf("ans: %d\n", largestPal);
}

int isPalindrome(n){
    char * str = (char*)malloc(sizeof(char)* 1000000);
    sprintf(str, "%d", n);
    for(int i = 0; i < strlen(str) / 2; i++){
        if(str[i] != str[strlen(str) - 1 - i])
            return 0;
    }
    return 1;
}
