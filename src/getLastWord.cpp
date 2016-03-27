/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int n = 0, i=0,k=0;
	while (str[i] != '\0')
	{
		n++;
		i++;
	}
	char *str1 = (char*)malloc(sizeof(char*)*(n));
	for ( i = n; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			while (str[i] != '\0')
			{
				str1[k] = str[i + 1];
				k++; i++;
			}
			break;
		}
	}str1[k] = '\0';
	return str1;
	}



	
