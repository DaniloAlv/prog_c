#include <stdio.h>

main (){
	float f, c;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	f = lower;
	while (f <= upper) {
		c = 5*(f-32)/9;
		printf ("%3.0f\t %6.2f\n", f, c);
		f = f + step;
	}
}