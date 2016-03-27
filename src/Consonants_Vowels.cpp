/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	int s=0,  k = 0, v = 0;
	if (str == "" || str==NULL)
	{
		v = 0;
		k = 0;
	}
	else
	{
		while (str[s] != '\0')
		{
			if (str[s] == 'a' || str[s] == 'e' || str[s] == 'i' || str[s] == 'o' || str[s] == 'u' || str[s] == 'A' || str[s] == 'E' || str[s] == 'I' || str[s] == 'O' || str[s] == 'U')
			{
				v++;
				s++;
			}
			else if (str[s] == '.' || str[s] == '?' || str[s] == '!' || str[s] == '@' || str[s] == '#' || str[s] == '&' || 
				str[s] == '*' || str[s] == '^' || str[s] == '(' || str[s] == ')' || str[s] == ' ' || str[s] == '0' || str[s] == '1'
				|| str[s] == '2' || str[s] == '3' || str[s] == '4' || str[s] == '5' || str[s] == '6' || str[s] == '7' || str[s] == '8' || str[s] == '9' )
			{
				s++;
			}
			else
			{
				k++;
				s++;
			}
		}
	}
	*consonants = k;
	*vowels = v;
}
			