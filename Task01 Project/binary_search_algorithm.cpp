#include "binary_search_algorithm.h"

bool binary_find_value(int* arr, int size, int value) {
	
	int first = 0;
	int last = size - 1;

	while (first <= last) {
		int mid = (first + last) / 2;

		if (arr[mid] == value) {
			return true;
		}
		else if (arr[mid] < value) {
			last = mid - 1;
		}
		else{
			first = mid + 1;
		}

	}

	return false;
}