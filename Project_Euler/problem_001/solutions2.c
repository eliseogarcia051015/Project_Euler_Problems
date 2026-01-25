#include <stdio.h>

// Optimized solution using arithmetic series formula
// sum_of_x^1 = n(n+1)/2
// total_sum_of_multiples = sum_3 + sum_5 - sum_15

// Let k be some number (3, 5, or 15)
// Let N be the limit
// All multiples of k below N: k, 2k, 3k, ..., pk
// where pk < N, so p = floor((N-1)/k)
// Sum of multiples: S = k + 2k + 3k + ... + pk = k * (1 + 2 + ... + p) = k * p(p+1)/2

long long sumMultiples(int multiple, int limit){
    if (multiple > limit || multiple <= 0 || limit <= 0) //simple edge cases
        return 0;

    long long p = (limit - 1) / multiple;
    return (long long)multiple * p * (p + 1) / 2;
}

int main(){
    int limit = 1000;
    long long sum = sumMultiples(3, limit)
                  + sumMultiples(5, limit)
                  - sumMultiples(15, limit);

    printf("Sum of multiples of 3 or 5 below %d is %lld\n", limit, sum);
    return 0;
}
