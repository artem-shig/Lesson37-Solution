#include "util.h"
#include "linear_search_algoriths.h"
#define BUF 100

int main() {

	int arr[BUF];

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	int value;
	cout << "Enter find value: ";
	cin >> value;

	init(arr, size, -20, 50);
	cout << "\nArray: " << convert(arr, size) << endl;

	string msg = find_value(arr, size, value) == 1 ? "YES" : "NO";
	cout << "Array: " << msg << endl;

	cout << "First value index is "
		<< find_first_value_index(arr, size, value) << endl;

	return 0;
}