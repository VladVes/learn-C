#include <stdio.h>
int main()
{
	/* print the table of map fahrenheit to celsius */
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 10;

	fahr = lower;
	printf("Fahrenheit to Celsius map\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf ("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
