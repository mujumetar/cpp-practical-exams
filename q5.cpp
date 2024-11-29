#include <iostream>
#include <string>
using namespace std;

struct House {
	int room_quantity;
	int established_year;
	string city;
};

int main() {
	int N;

   
	cout << "Enter the number of houses: ";
	cin >> N;

	House houses[N];

cout << endl;
	for (int i = 0; i < N; ++i) {
		cout << "Enter details for house " << i + 1 << ": " << endl;
		cout << "Number of rooms: " ;
		cin >> houses[i].room_quantity;
		cout << "Year established: ";
		cin >> houses[i].established_year;
		cin.ignore(); 
		cout << "City: ";
		getline(cin, houses[i].city);
	}

	cout << "\nHouse Details:\n";
	for (int i = 0; i < N; ++i) {
		cout << "\nHouse " << i + 1 << ":\n";
		cout << "Number of rooms: " << houses[i].room_quantity << endl;
		cout << "Year established: " << houses[i].established_year << endl;
		cout << "City: " << houses[i].city << endl;
	}

	return 0;
}
