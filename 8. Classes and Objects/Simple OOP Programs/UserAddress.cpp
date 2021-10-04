#include <iostream>
#include <conio.h>

using namespace std;

class Address {
	public:
		string name, street, city, state;
		int houseNum, apttNum, postalCode;
		bool isApttNumAdded;
	
	void getDetails() {
		this->isApttNumAdded = false;
		char temp;
		cout << "Enter name: ";
		getline(cin, this->name);
		cout << "Enter house number: ";
		cin >> this->houseNum;
		
		cout << "Enter street: ";
		getline(cin, this->street);
		cout << "Would you like to add apartment number? Enter 'Y' to add, otherwise 'N' to skip: ";
		cin >> temp;
		if(temp == 'Y') this->isApttNumAdded = true;
		if(this->isApttNumAdded) {
			cout << "Enter apartment number: ";
			cin >> this->apttNum;
		}
		cout << "Enter city: ";
		getline(cin, this->city);
		cout << "Enter state: ";
		getline(cin, this->state);
		cout << "Enter postal code: ";
		cin >> this->postalCode;
	}
	
	void printAddress() {
		cout << this->street << endl;
		cout << this->city << ", " << this->state << ", " << this->postalCode << endl;
	}
};

int main() {
	Address address;
	address.getDetails();
	address.printAddress();
	return 1;
}
