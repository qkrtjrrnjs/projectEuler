#include<stdio.h>
/*
    problem 9: There exists exactly one pythagorean triplet for which a + b + c = 1000. Find the product abc.

    ***Constructing Pythagorean Triples***
                    m < n
                a = n^2 - m^2
                b = 2nm
                c = n^2 + m^2
*/
int main(){
    for(int a = 1; a < 1000; a++){
        for(int b = a + 1; b < 1000; b++){
            int c = 1000 - b - a;
            if(a * a + b * b == c * c){
                printf("ans: %d\n", a * b * c);
                break;
            }
        }
    }
}
