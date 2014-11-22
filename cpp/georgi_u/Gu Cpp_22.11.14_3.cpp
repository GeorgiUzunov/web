#include <string.h>
#include <stdio.h>



int main()
{

float arr_f[10];
float max = arr_f[0];
int i;

	for ( i=0; i < 10; i++) {
		fprintf (stdout, "Enter a number:");
		fscanf (stdin, "%f", & arr_f[i]);
	}

	for ( i=0; i < 10; i++) {
		if (max < arr_f[i]) max = arr_f[i];
	}
	
	fprintf (stdout, "Max = %10.0f", max);

return 0;
}
