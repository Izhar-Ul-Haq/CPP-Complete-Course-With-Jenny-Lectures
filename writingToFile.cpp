#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	cout << "Izhar Ul Haq";
	ofstream file;
	file.open("izhar.txt");
	if(!file.is_open())
	{
		cout << "Sorry the file is not opened!!!" <<endl;
	} 
	else{
		cout << "The File is opened, successfully"<< endl;
		file << "I am in Lahore" << endl;
		file << "I am not American" << endl;
		file.close();
		cout << "Successfully written to the File" << endl;
	}
	return 0;
}

