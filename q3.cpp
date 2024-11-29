#include <iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Enter a 3-digit number: ";
	cin >> num;
	
	int hundreds = num / 100;          
	int tens = (num / 10) % 10;         
	int ones = num % 10;             
	


 if (num < 100 || num > 999) {
		cout << "Please enter a valid 3-digit number!" << endl;
	} else {
		
		cout << "Reversed number: " << ones << tens << hundreds << endl;
	}
	
	return 0;
}