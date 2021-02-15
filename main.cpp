#include <algorithm>
#include "my_lab.h"


int main()
{
	int array_length;
	std::cout << "enter array length: ";
	std::cin >> array_length;
	int* array = new int[array_length];
	for(int i = 0; i < array_length; ++i)
	{
		std::cout << "a[" << i << "] = ";
		std::cin >> array[i];
	}
	std::sort(array,array+array_length);
	for (int i = 0;i < array_length; ++i)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
	int destination_number;
	std::cout << "enter destination number: ";
	std::cin >> destination_number;
	std::cout << "the closest number in array is: "<< binary_search(destination_number,array,array_length);
	return 0;
}
