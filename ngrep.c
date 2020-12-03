#include <stdio.h>
#include <string.h>

/*
 * TODO
 * 	Remove leading whitespace from the output search result
 * 	Make the file to search arg[2], and error if the file does not exist or is not readable
 * 		
*/

int main(int argc, char *argv[]) {

    FILE *file_to_read;                                     // file to read, hard coded at the moment
    int max_buffer = 2048;
    char c[max_buffer];                                     // save the current line here
    char search_pattern[max_buffer];                        // what to search for, currently case sensitive only
    int line_number = 1;                                    // we want to output the line number when we find a match

    if(argc == 2) {
        strcpy(search_pattern, argv[1]);                    // we have argv[1] so use that as the search pattern
    } else {
        strcpy(search_pattern, "file_");                    // we don't have argv[1] so ..
    }

    file_to_read = fopen("ngrep.c", "r");                  // open hard coded file
    if(file_to_read == NULL) return(1);                     // return 1 and exit if file not found

    while(!feof(file_to_read)) {                            // while not at end of file
        if(fgets(c, max_buffer, file_to_read)) {            // get then next line
            if(strstr(c, search_pattern)) {                 // search
                printf("%d: %s", line_number, c);           // print if found
            }
        line_number++;
        }
    }

    fclose(file_to_read);

	return 0;
}

