#include"EZ_list.h"
#include"EZ_vector.h"
#include<vector>
#include<iostream>
#include<algorithm>
using std::cout;
using std::endl;

class list_test{
public:
	list_test(){ cout << "constructor" << endl; }
	list_test(const list_test&){ cout << "copy constructor" << endl; }
	~list_test(){ cout << "destructor" << endl; }
};

int main()
{
	list<int> ilst;

	for (int i(0); i != 6; ++i)
	{
		ilst.push_back(i);
	}

	auto iter = ilst.begin();
	for (int i(0); i != 4; ++i)
		++iter;

	ilst.insert(iter, 999);

	for (auto n : ilst)
	{
		cout << n << " "; 
	}

	cout << endl;
	cout << endl;

	for (int i(0); i != 9; ++i)
	{
		ilst.push_back(i);
	}

	for (auto n : ilst)
	{
		cout << n << " "; 
	}

	cout << endl;
	cout << endl;

	ilst.erase(ilst.begin());
	for (auto n : ilst)
	{
		cout << n << " "; 
	}

	cout << endl;
	cout << endl;

	cout << "size" << ilst.size() << endl << endl;
	
	ilst.remove(1);
	for (auto n : ilst)
	{
		cout << n << " "; 
	}

	cout << endl;
	cout << endl;

	ilst.clear();

	cout << ilst.size() << endl << endl;

	for (int i = 0; i <= 100; ++i)
	{
		ilst.push_back(i / 30);
	}

	for (auto n : ilst)
	{
		cout << n << " "; 
	}

	cout << endl;
	cout << endl;

	ilst.unique();
	for (auto n : ilst)
	{
		cout << n << " "; 
	}

	cout << endl;
	cout << endl;
	
	list<int> ilst2;
	for (int i(0); i != 9; ++i)
	{
		ilst2.push_back(i);
	}

	ilst2.splice(ilst2.begin(), ilst);

	for (auto n : ilst2)
	{
		cout << n << " "; 
	}

	cout << endl;
	cout << "size of ilst: " << ilst.size() << endl;
	cout << endl;

	ilst.clear();
	ilst2.clear();

	for (int i(0); i < 10; i += 2)
		ilst.push_back(i);
	for (int i(1); i < 10; i += 2)
		ilst2.push_back(i);

	ilst.merge(ilst2);

	for (auto n : ilst)
		cout << n << " ";

	cout << endl << endl;

	ilst.reverse();

	for (auto n : ilst)
		cout << n << " ";

	cout << endl << endl;

	ilst.sort();

	for (auto n : ilst)
		cout << n << " ";

	cout << endl << endl;

	ilst.clear();

	list<list_test> tlst;
	list_test z;
	for (int i(0); i != 7; ++ i)
		tlst.push_back(z);
	tlst.clear();

	system("pause");
	return 0;
}