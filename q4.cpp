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
	cout << endl;
	cout << "squares: - " << endl;
	
	for(int j=0;j < r; j++) 
	{
		cout << a[j] * a[j] << endl;
	}

}