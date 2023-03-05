#include "main.h"
/**_strcat concatenate azeez and bayo **/

char *_strcat(char *azeez,char bayo)
{int i;
	int j;

	for (i=0; azeez[i] != '\0'; i++)
		for (j=0; bayo[j] != '\0'; j++)
		{
		
		azeez[i] = bayo[j]; i++}

	azeez[i] = '\0';

	return (azeez);

}

