#include <stdio.h>

#define LOWER 0     // lower limit to table
#define UPPER 300   // upper limit
#define STEP  20    // step size
 
main()
{
	/* print Fahrenheit-Celsius table */
	float fahr, celsius;
	
	printf("Fahr to Celsius!\n");
	
	fahr = UPPER;
	while (fahr >= LOWER) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr - STEP;
	}
}


