

bool find_value(int* arr, int size, int value) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value) {
			return true;
		}

	}

	return false;
}