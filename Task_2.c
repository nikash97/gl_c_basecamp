#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]){		//function main with parameters to accept command-line arguments
    int N, D, L;                        //initialize: amount of spans, length of a single span, total length of wires
    N = strtoimax(argv[1], NULL, 0);    //read command-line arguments to integers
    D = strtoimax(argv[2], NULL, 0);

    L = 0.5*(N*N+N)*D;      //The total length of wires can be calculated as total number of spans multiplied by their
							//length D. The number of spans, according to the bridge's "blueprint" can be defined as 
							//sum of arithmetic progression, where first element is 1, last N, and the amount of
							//terms in progression also N. Sn = (a1+aN)*N/2

    printf("%d", L);
}