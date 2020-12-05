#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    // print header just for output
    printf("%5s \n", "PROC");

    int id = fork();
    if(id == -1) {
        return 1;
    }

    // if(id == 0) {
    //     printf("Hello from child process: %d\n", id);
    // } else {
    //     printf("Hello from main process: %d\n", id);
    // }

    // printf("\n");

    // Get child process to print 1..5, and main process to print 6..10
    // Child process is always 0
    int n, i;

    if (id == 0) {
        n = 1;
    } else {
        n = 6;
    }

    // write 1..5 with the child process
    if (id != 0) {
        // child process always == 0
        // so tell main proces to wait for child process to finish
        wait();
    }
    
    for(i = n; i < n + 5; i++){
        printf("%5d %d",id, i);
        printf("\n");
    }

    // print a new line when the main process has finished writing 6..10
    if(id != 0) {
        printf("Main Finished\n");
        fflush(stdout);
    } else {
        printf("Child Finished\n");
    }

    return 0;
}