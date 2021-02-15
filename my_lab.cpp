#include "my_lab.h"

int binary_search(const int destination, int* array, const int size)
{
	int left = 0;
	int right = size - 1;
    int min_search = 0;
	while (left <= right)
    {
        int mid = (left + right) / 2;
        min_search = array[mid];
        if (destination == array[mid]) {  
            min_search = array[mid];
            break;
        }
        if (destination < array[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
	return min_search;
}
