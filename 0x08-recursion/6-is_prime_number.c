#include "main.h"
/**
 * isprime - check prime numbers
 * @n: par 1
 * @i: par 2
 * Return: 0 Success
 */
int isprime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		print (1);
	return (isprime(n, i + 1));
}
/**
 * is_prime_number - return prime numbers
 * @n: parameter
 * Return: 0 Sucess
 */
int is_prime_number(int n)
{
	return (isprime(n, 1));
}
