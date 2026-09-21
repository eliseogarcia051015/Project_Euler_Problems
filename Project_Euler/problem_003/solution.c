/*
The prime factors of 13195 are 5, 7, 13, and 29
What is the largest prime factor of the number 600851475143?
*/

//idea: for loop from i:sqrt(n)
#include <stdio.h>

int main(){
    //long n = 600851475143;
    long n = 25;
    for (long i=0; i*i < n; i++){
        printf("%ld\n",i);
    }
    return 0;
}