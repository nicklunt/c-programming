#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    // convert minutes to days

    int days = 0.0f;
    float hours = 0.0f;
    float hours_left = 0.0f;
    int mins = 0;
    float mins_left = 0;


    printf("Enter number of mins to convert to days: ");
    scanf("%d", &mins);

    hours = mins / 60;
    printf("\nDEBUG: hours = %f\n", hours);
    mins_left = mins % 60;
    printf("DEBUG: mins_left = %f\n", mins_left);

    days = hours / 24;
    printf("DEBUG: days = %d\n", days);
    hours_left = (int)hours % 24;
    printf("DEBUG: hours_left = %f", hours_left);

    printf("\n\n");

    printf("Days:       %d\n", days);
    printf("Hours:      %.2f\n", hours_left);
    printf("Minutes:    %.2f\n", mins_left);
}