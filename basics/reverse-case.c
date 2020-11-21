#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int i;
    char c, name[ BUFSIZ ];

    printf("Enter a line of text\n> ");

    for(i = 0; (c = getchar()) != '\n'; i++) {
        if(isupper(c) != 0)
            name[i] = tolower(c);
        else if(islower(c) != 0)
            name[i] = toupper(c);
        else 
            name[i] = c;
    }

    name[i] = '\0';

    for(i = 0; name[i] != '\0'; i++) {
        putchar(name[i]);
    }

    putchar('\n');

    return 0;
}
