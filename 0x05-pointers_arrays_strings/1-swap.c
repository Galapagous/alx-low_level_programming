#include "main.h"

/**
 * swap_int : function entry point.
 * Description : function to swap two integers values using pointers.
 * @a, b - pointer parameters to be swap.
 * @ holder - a temporary storage of integer before use.
 * @c - holder's pointer memory.
 *
 * */

void swap_int(int a*, int b*)
{
	int holder;
	int *c = holder;

	holder = *a;
	a* = b*;
	*b = *c;
}
