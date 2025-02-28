bool find_value(int* arr, int size, int value) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value) {
			return true;
		}

	}

	return false;
}

int find_first_value_index(int* arr, int size, int value) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value) {
			return i;
		}

	}

	return -1;
}

int find_last_value_index(int* arr, int size, int value) {

	for (int i = size - 1; i != 0; i--)
	{
		if (arr[i] == value) {
			return i;
		}
	}

	return -1;
}

int count_value(int* arr, int size, int value) {

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value) {
			count++;
		}
	}

	return count;
}

