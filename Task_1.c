#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(int argc, char *argv[]){		//function main with parameters to accept command-line arguments
    int N, K, S;                        //initialize variables: amount of steps, K-th number, result
    N = strtoimax(argv[1], NULL, 0);    //read command-line arguments to integers
    K = strtoimax(argv[2], NULL, 0);
    S = fmod(N,(K+1));                  //S will temporarily contain remainder of N/(K+1) division, will be needed further

	//The description of a task was not very clear for me, so I noticed a pattern using examples
	
	//If remainder S is 0 (result of N/(K+1) division is a whole number), then return result of division
    if (S==0)
        S = N/(K+1);
    else                                //otherwise return the integer part of division + 1
        S = floor(N/(K+1))+1;

    printf("%d", S);
}