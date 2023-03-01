#include "push_swap.h"

int		find_smallest(int *arr, int size)
{
	int		i;
	int		smallest;

	i = 0;
	smallest = arr[0];
	while (i < size)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}
		i++;
	}
    i = 0;
	while (arr[i] != smallest)
        i++;
    return (i);
}