/*
The prime factors of 13195 are 5, 7, 13, and 29
What is the largest prime factor of the number 600851475143?
*/

//idea: for loop from i:sqrt(n)
#include <stdio.h>

int main(){
    //long n = 600851475143;
    long n = 25;
    long largest_factor=0;
    for (long i=2; i*i < n; i++){
        while (n%i == 0){
            largest_factor =i;
            n/=i;
        }
    }

    //finish implementations
    
    return 0;
}