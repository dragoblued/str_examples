#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <fstream>
using namespace std;
/*
template <class T> class Vector
{
	T *v;
	int sz;
	public:
		Vector(int s)
		{
			if(s <= 0 ) cout << "error";
			v = new T [sz = s];		
		}
		T & operator[] (int i);
		int size() {return sz; }
};*/
class person {
	string name;
	int age;
	public:
	person() {
		name = "Natali";
		age = 18;	
	}
	void change_name (string n){ name = n;}
	void change_age (int a){ age = a;}
	void name_cin() {
			cout<<"Name : ";
			cin >> name;
			
			cout << "Age : ";
			cin >> age;	
	}
	void operator = (person &left) {
		//cout << left.name ;
		this->name = left.name;
		this->age = left.age;
	}
	void print_(){
		cout<<name<<" "<<age<<"\n";
	}
};

int main() {
	/*person m1, m2;
	m1.name_cin();
	m1.age_cin();
	m2 = m1;
	m2.print_();*/
	/*vector <int> myVec (10);
	for (int i = 0; i < 10; i++) {
		myVec[i] = rand()%100;
		cout << myVec[i] << " ";
	}
	cout << "\n";
	sort(myVec.begin(), myVec.end());
	copy(myVec.begin(), myVec.end(), ostream_iterator<int>(cout, " "));
	vector <person> base(3);
	for (int i = 0; i < 3; i++) {
		base[i].name_cin();	
	}
	base[1] = base[0];
	for (int i = 0; i < 3; i++) {
		base[i].print_();	
	}
	//Vector < int > v1 (100);*/
	vector <int> myVec(5);
	ifstream file;
	string buf;
	file.open("cpp.txt");
	for(int i = 0; i < 5; i++) {
			file >> buf;
			myVec[i] = atoi(buf.c_str());
	}
	file.close();	
	sort(myVec.begin(),myVec.end());	
	copy(myVec.begin(), myVec.end(), ostream_iterator<int>(cout, " "));
	return 0;
}
