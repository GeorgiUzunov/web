#include <string.h>
#include <stdio.h>



int main()
{
	char s1[] = "Hello";
	char s2[15] = "How are You!";
	s1[5] = '!';
	s1[6] = '\0';
	//strcat (s1, " Georgi!");
	//strcat (s1, s2);
	
	fprintf ( stdout, "%d \n", !strcmp("Hello", "Hello") );
	fprintf ( stdout, "%c \n", *strchr("Hello", 'H') );
	
	fprintf ( stdout, "%s %d \n", s1, strlen(s1) );
	
	for (int i=0; i<strlen(s1); i++)
		{ 
		fprintf (stdout, "%c", s1[i]);
		}
		fprintf (stdout, "\n");
		
		
	for (int i=strlen(s1)-1; i>-1; i--)
		{ 
		fprintf (stdout, "%c", s1[i]);
		}
	
	return 0;
}
