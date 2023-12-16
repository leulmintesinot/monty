#include "monty.h"

unsigned int _abs(int);
int get_numbase_len(unsigned int num, unsigned int base);
void fill_numbase_buff(unsigned int num, unsigned int base,
		char *buff, int buff_size);

/**
 * get_int - gets a character pointer to new string containing int
 * @num: number to convert to string
 *
 * Return: character pointer to newly created string or NULL
 */
char *get_int(int num)
{
	unsigned int temp;
	int len = 0;
	long num_l = 0;
	char *new_ptr;


	temp = _abs(num);
	len = get_numbase_len(temp, 10);


	if (num < 0 || num_l < 0)
		len++;
	new_ptr = malloc(len + 1);
	if (!new_ptr)
		return (NULL);


	fill_numbase_buff(temp, 10, new_ptr, len);
		if (num < 0 || num_l < 0)
			new_ptr[0] = '-';
	return (new_ptr);
}


/**
 * _abs - gets the absolute value of an integer
 * @i: int to get absolute value of
 *
 * Return: unsigned integer abs of i
 */
unsigned int _abs(int i)
{
	if (i < 0)
		return (-(unsigned int)i);
	return ((unsigned int)i);
}


/**
 * get_numbase_len - gets length of buffer needed for an unsigned int
 * @num: number to get length needed for
 * @base: base of number used by buffer
 *
 * Return: integer with length of buffer needed
 */
int get_numbase_len(unsigned int num, unsigned int base)
{
	int len = 1;


	while (num > base - 1)
	{
		len++;
		num /= base;
	}
	return (len);
}


/**
 * fill_numbase_buff - fills buffer with correct numbers
 * @num: to convert to string given base
 * @base: of number used in conversion
 * @buff: to fill with result of conversion
 * @buff_size: of buffer in bytes
 *
 * Return: always void.
 */
void fill_numbase_buff(unsigned int num, unsigned int base,
		char *buff, int buff_size)
{
	int rem, i = buff_size - 1;


	buff[buff_size] = '\0';
	while (i >= 0)
	{
		rem = num % base;
		if (rem > 9)
			buff[i] = rem + 87;
		else
			buff[i] = rem + '0';
		num /= base;
		i--;
	}
}
