#include "util.h"
#include "linear_search_algoriths.h"
#include "binary_search_algorithm.h"
#define BUF 100

int main() {

	//int arr[BUF];

	//int size;
	//cout << "Enter size of array: ";
	//cin >> size;

	int arr[]{ 1,2,3,4,5,6,7,8,9,10,13,20,30,35,36 };
	int size = 15;

	int value;
	cout << "Enter find value: ";
	cin >> value;

	init(arr, size, -20, 50);
	cout << "\nArray: " << convert(arr, size) << endl;

	string msg = binary_find_value(arr, size, value) ? "YES" : "NO";
	//string msg = find_value(arr, size, value) == 1 ? "YES" : "NO";
	cout << "\nAnswer: " << msg << endl;

	cout << "First value index is "
		<< find_first_value_index(arr, size, value) << ".\n";

	cout << "Last value index is "
		<< find_last_value_index(arr, size, value) << ".\n";

	cout << "Count of value: "
		<< count_value(arr, size, value) << ".\n";

	cout << "Binary find value: "
		<< binary_find_value(arr, size, value) << endl;

	return 0;
}