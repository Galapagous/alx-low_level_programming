#include "main.h"

/**
 * swap_int - function entry point.
 * Description : function to swap two integers values using pointers.
 * @a : first parameters to be swap.
 * @b : second parameter to be swap.
 * @ holder - a temporary storage of integer before use.
 *
 **/

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = *&holder;
}
