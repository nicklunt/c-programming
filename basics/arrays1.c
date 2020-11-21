#include <stdio.h>
#define SIZE 5

int main(int argc, char* argv[]) {

    int i;
    float v, n[ SIZE ];

    for(i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &n[ i ]);
    }

    for(i = 0; i < SIZE; i++) {
        v = n[ i ];
        printf("%15.3f%15.3f%15.3f\n", v, v*v, v*v*v);
    }

    return 0;
}