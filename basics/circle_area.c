#include <stdio.h>
#include <math.h> // for M_PI

int main() {
	int radius;

	// Get user input for radius
	printf("> Enter the radius: ");
	scanf("%i", &radius);

	// Calculate the circumference
	// Circumference = PI x diameter
	float circumference = (M_PI * (radius * 2));

	printf("The circumference of a circle with radius %i: %.3f\n", radius, circumference);
}

