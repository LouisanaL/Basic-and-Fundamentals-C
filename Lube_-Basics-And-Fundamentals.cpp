//code by Louisana Lube

#include <iostream>

using namespace std;

void inputArray(int arr[], int &size, const string &arrayName) {
	cout << "Enter the number of elements in " << arrayName << " array (up to 10): ";
	cin >> size;

	if (size > 10) {
		cout << "Array can have at most 10 elements.\n";
		exit(1);
	}

	cout << "Enter the elements of the " << arrayName << " array:\n";
	for (int i = 0; i < size; ++i) {
		cin >> arr[i];
	}
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[], int &mergedSize) {
	mergedSize = size1 + size2;
	for (int i = 0; i < size1; ++i) {
		mergedArr[i] = arr1[i];
	}
	for (int i = 0; i < size2; ++i) {
		mergedArr[size1 + i] = arr2[i];
	}
}

void sortDescending(int arr[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}

void printArray(int arr[], int size) {
	cout << "Merged array in descending order:\n";
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	const int MAX_ELEMENTS = 10;
	int arr1[MAX_ELEMENTS], arr2[MAX_ELEMENTS], mergedArr[2 * MAX_ELEMENTS];
	int n1, n2, mergedSize;


	inputArray(arr1, n1, "first");
	inputArray(arr2, n2, "second");

	mergeArrays(arr1, n1, arr2, n2, mergedArr, mergedSize);

	sortDescending(mergedArr, mergedSize);


	printArray(mergedArr, mergedSize);

	return 0;
}
