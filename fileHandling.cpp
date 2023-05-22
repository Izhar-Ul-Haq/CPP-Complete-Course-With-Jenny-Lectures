#include <iostream>
using namespace std;
int main()
{
	cout << "Izhar Ul Haq" << endl;
	string data;
	cout << "Enter data in String" << endl;
	cin >> data;
	cout << "You entered: " << data <<endl;
	cout << "Enter another one:" << endl;
	cin >> data;
	cout << "You entered:" << data << endl;
	// The cin will only read the data before the spaces
	return 0;
}

