#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the size of the array: ";
	cin >> n;

	int arr[n]; 

	cout << "Enter " << n << " elements of the array: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "arr["<<i<<"]: ";
		cin >> arr[i];
	}

	int* ptr = arr;



	for (int i = 0; i < n; i++) {
		*(ptr + i) = *(ptr + i) * *(ptr + i);  
	}

	cout << "Array after squaring each element: ";
	for (int i = 0; i < n; i++) {
		cout << "square of: " <<  "arr["<<i<<"]: ";
		cout << arr[i] << " "; 
		cout << endl;
	}
	cout << endl;
	cout << endl;

	return 0;
}
