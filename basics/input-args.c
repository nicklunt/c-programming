#include <stdio.h>

int main(int argc, char *argv[]) {

    int i = 0;

    for(i = 0; i < argc; i++) {
        printf("argv[%d]\t%s\n",i, argv[i]);
    }
}