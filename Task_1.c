#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(int argc, char *argv[]){
    int N, K, S;                        //initialize variables: amount of steps, K-th number, result
    N = strtoimax(argv[1], NULL, 0);    //read command-line arguments to integers
    K = strtoimax(argv[2], NULL, 0);
    S = fmod(N,(K+1));                  //S will temporarily contain remainder of division

    if (S==0)                           //if remainder is 0 (S is whole number), return result of division
        S = N/(K+1);
    else                                //otherwise return the integer part of S + 1
        S = floor(N/(K+1))+1;

    printf("%d", S);
    return S;
}

