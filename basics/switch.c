#include <stdio.h>

int main(int argc, char *argv[]) {

    char beer = 'm';

    switch(beer) {
        case 'c':
            printf("carling");
            break;
        case 'm':
            printf("marstons");
            break;
        default:
            printf("cider drinker?");
    }

    printf("\n");
}