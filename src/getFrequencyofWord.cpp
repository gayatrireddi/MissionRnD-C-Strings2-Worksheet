/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int count_word_in_str_way_1(char *str, char *word){
	int i = 0, j = 0, l = 0, n = 0, c = 0, k = 0, m = 0;
if (str == NULL || word == NULL){
	return 0;
}
while (str[i] != '\0')
{
	i++;
}
while (word[n] != '\0')
{
	n++;
}
for (k = 0; k <= i - n; k++)
{
	c = 1; l = 0;
	for (j = k; j < k + n; j++)
	{
		if (str[j] != word[l])
		{
			c = 0;
			break;
		}l++;
	}
	if (c == 1)m++;
}
return m;
}


int count_word_int_str_way_2_recursion(char *str, char *word){

	return 0;
}

