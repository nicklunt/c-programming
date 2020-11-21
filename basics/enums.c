#include <stdio.h>

int main(int argc, char *argv[]) {

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company x;
    x = XEROX;

    enum Company g;
    g = GOOGLE;

    enum Company e;
    e = EBAY;

    // Internally enums value are stored as ints depending on the position of them in the actual enum.
    printf("%d\n%d\n%d\n", x, g, e);
}