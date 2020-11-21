#include <stdio.h>
#include <string.h> // fgets
#include <stdlib.h> // atoi

#define PI 3.1415926535

int main() {
	char radius[16];

	// Get user input for radius
	printf("> Enter the radius: ");
	fgets(radius, sizeof(radius), stdin);

	// Remove the dangling '\n' from radius
	radius[strlen(radius) -1] = '\0';

	int r;
	r = atoi(radius);
	// Circumference = PI x diameter
	float circumference = (PI * (r * 2));

	printf("The circumference of a circle with radius %i: %.3f\n", r, circumference);

	return 0;
}

