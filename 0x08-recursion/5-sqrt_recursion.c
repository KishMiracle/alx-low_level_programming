#include "main.h"

/**
 * _my_sqrt - returns the natural square root of a number
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1.
 */

int _my_sqrt(int num, int root)
{
	if (root * root > num)
		return (-1);
	if (root * root == num)
		return (root);
	return (_my_sqrt(num, ++root));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @num: The number to find the square root of.
 * Return: square root of n else -1
 */

int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	return (_my_sqrt(num, 1));
}
