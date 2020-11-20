#include <stdio.h>
#include <math.h>

// Using all ints, seems cleaner and obvs less memory usage.

int main(int argc, char *argv[]) {
    // convert minutes to days

    int days = 0.0f;
    int hours = 0.0f;
    int hours_left = 0.0f;
    int mins = 0;
    int mins_left = 0;


    printf("Enter number of mins to convert to days: ");
    scanf("%d", &mins);

    hours = mins / 60;
    printf("\nDEBUG: hours = %d\n", hours);
    mins_left = mins % 60;
    printf("DEBUG: mins_left = %d\n", mins_left);

    days = hours / 24;
    printf("DEBUG: days = %d\n", days);
    hours_left = (int)hours % 24;
    printf("DEBUG: hours_left = %d\n", hours_left);

    printf("\n");

    printf("Days:       %.2d\n", days);
    printf("Hours:      %.2d\n", hours_left);
    printf("Minutes:    %.2d\n", mins_left);
}