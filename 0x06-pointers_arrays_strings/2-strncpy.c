#include "main.h"
<<<<<<< HEAD



/**

 * _strncpy - A function that copies a string.

 *

 * @dest: pointer to destination input buffer

 * @src: pointer to source input buffer

 * @n: bytes of @src

 *

 * Return: @dest

*/


=======

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/
>>>>>>> 87446cdfa813e4ff4a79ba21e758ae97f0de3c80

char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD


	/**

	 * iterate through src array

	 * where if there is no null byte

	 * among the first n bytes of source

	 * the string placed in dest will not be

	 * null terminated

	*/

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];

	/**

	 * if the length of source is less than n

	 * write additional nullbytes to dest to

	 * ensure that a total of n bytes is written

	*/

	while (i < n)

	{

		dest[i] = '\0';

		i++;

	}


=======
	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
>>>>>>> 87446cdfa813e4ff4a79ba21e758ae97f0de3c80

	return (dest);
}
