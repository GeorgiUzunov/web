#include <string.h>
#include <stdio.h>


int main()
{

FILE *f = fopen("Gout.txt", "w");
fprintf (f, "Hello!\n");
fclose(f);
return 0;
}
