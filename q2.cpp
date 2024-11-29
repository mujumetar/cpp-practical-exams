#include <iostream>

using namespace std;

int main() {
	int r;

	cout << "enter size: ";
	cin >> r;
	
	int a[r];
	
	for(int i=0; i<r; i++){
		cout << "a["<<i<<"]: ";
		cin >> a[i];
	}

	int min;
	
	for(int i=0; i<r; i++)
	{
		if(a[i] < min)
		{
			min = a[i]; 
		}
	}
	
	cout << "The minimum element is: " << min;
}