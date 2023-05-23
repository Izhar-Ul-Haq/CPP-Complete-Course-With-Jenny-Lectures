class Person{
	string name;
	int age;
	public:
		Person(string name, int age){
			this -> name = name;
			this -> age = age;
			
		}
		void display()
		{
			cout << "I " << name << " is " << age << " old!!!" << endl; 
		}
};

