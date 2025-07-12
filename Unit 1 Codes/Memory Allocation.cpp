#include<iostream>

int main() {
	int* arr = new int[10]; // Allocate memory for an array of 10 integers
// Initialize the array
	for (int i = 0; i<10; ++i) {
		arr[i] = i + 1;
	}
// Print the array elements
	for (int i = 0; i<10; ++i) {
		std::cout << arr[i] <<" "; // Output: 1 2 3 4 5 6 7 8 9 10
	}
	std::cout << std::endl;
	delete[] arr; // Deallocate the array memory
return 0;
}

