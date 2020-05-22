#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]){
    int N, D, S;                        //initialize variables: amount of steps, K-th number, result
    N = strtoimax(argv[1], NULL, 0);    //read command-line arguments to integers
    D = strtoimax(argv[2], NULL, 0);

    S = 0.5*(N*N+N)*D;                  //To explain why

    printf("%d", S);
}