#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    cout << "Izhar Ul Haq" <<endl;
    fstream file;
    file.open("izhar.txt", ios::in | ios::out | ios::app);
    if(!file.is_open())
    {
    	cout << "The File is not opened!!!" <<endl;
	}
	else{
		cout << "File opened successfully!!!" <<endl;
		cout << "Now we are writing to the file" <<endl;
		file << "I am not from England!!!"<<endl;
		file.seekg(0);
		string line;
		while(file.good())
		{
			getline(file,line);
			cout << line <<endl;
		}
	}
    return 0;
}

