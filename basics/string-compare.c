#include <stdio.h>
#include <string.h>

/*
strcmp(a, b);
Returns     < 0 if a < b
            0 if a = b
            > 0 if a > b

See www.asciitable.com

Could use 
    strncmp(str1, str2, number_of_bytes_to_compare)
    memcmp(*any_pointer, *any_pointer, number_of_bytes_to_compare)
*/

int main(int argc, char *argv[]) {
    char s1[] = "a";
    char s2[] = "b";

    int res = strcmp(s1, s2);
    if(res < 0)
        printf("%s is greater than %s\n", s2, s1);
    else if(res == 0)
        printf("%s and %s are equal\n");
    else
        printf("%s is greater than %s\n", s1, s2);
}