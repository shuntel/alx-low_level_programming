#include "main.h"
<<<<<<< HEAD



/**

 * reverse_array - a function that reverses the

 *                content of an array of integers

 *

 * @a: pointer to int array

 * @n: is the number of elements to swap

 *

 * Return: nothing

*/


=======

/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/
>>>>>>> 87446cdfa813e4ff4a79ba21e758ae97f0de3c80

void reverse_array(int *a, int n)
{
<<<<<<< HEAD

	int temp, s, e;



	s = 0;

	e = n - 1;

	/**

	 * set value in array a in temp

	 * then place the last array in

	 * the first array then place

	 * value in temp to last array

	*/

	while (s < e)

	{

		temp = a[s];

		a[s] = a[e];

		a[e] = temp;

		s++;

		e--;

=======
	int temp, s, e;

	s = 0;
	e = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	*/
	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
>>>>>>> 87446cdfa813e4ff4a79ba21e758ae97f0de3c80
	}
}
