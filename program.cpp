#include <iostream>
#include "list.cpp"
#include "list.h"
using namespace std;

int main()
{
	cout << "Char type" << endl;
	List<char> mylist_char;		
	mylist_char.pushToHead('y');
	mylist_char.pushToHead('a');
	mylist_char.pushToHead('m');
	cout << endl << "pushToHead : ";
	mylist_char.print();
	cout << endl;
	mylist_char.pushToTail('p');
	mylist_char.pushToTail('a');
	mylist_char.pushToTail('t');
	cout << "pushToTail : ";
	mylist_char.print();
	cout << endl;
	cout << endl << "popHead : " << mylist_char.popHead() << endl;
	cout << "popTail : " << mylist_char.popTail() << endl;
	cout << "list after pop : ";
	mylist_char.print();
	cout << endl;
	char input;
	cout << endl << "Enter the alphabet : ";
	cin >> input;
	if (mylist_char.search(input) == 1)
	{
		cout << input << " found!" << endl;
	}
	else
	{
		cout << input << " not found." << endl;
	}
	mylist_char.~List();
	cout << endl;

	cout << "int type" << endl;
	List<int> mylist_int;
	mylist_int.pushToHead(6);
	mylist_int.pushToHead(0);
	mylist_int.pushToHead(3);
	mylist_int.pushToHead(6);
	cout << endl << "pushToHead : ";
	mylist_int.print();
	cout << endl;
	mylist_int.pushToTail(1);
	mylist_int.pushToTail(5);
	mylist_int.pushToTail(0);
	mylist_int.pushToTail(3);
	mylist_int.pushToTail(5);
	cout << "pushToTail : ";
	mylist_int.print();
	cout << endl;
	cout << endl << "popHead : " << mylist_int.popHead() << endl;
	cout << "popTail : " << mylist_int.popTail() << endl;
	cout << "list after pop : ";
	mylist_int.print();
	cout << endl;

	int num_int;
	cout << endl << "Enter the number(int) : ";
	cin >> num_int;
	if (mylist_int.search(num_int) == 1)
	{
		cout << num_int << " found!" << endl;
	}
	else
	{
		cout << num_int << " not found." << endl;
	}
	mylist_int.~List();
	cout << endl;

	cout << "float type" << endl;
	List<float> mylist_float;
	mylist_float.pushToHead(3.33);
	mylist_float.pushToHead(2.22);
	mylist_float.pushToHead(1.11);
	cout << endl << "pushToHead : ";
	mylist_float.print();
	cout << endl;
	mylist_float.pushToTail(4.44);
	mylist_float.pushToTail(5.55);
	mylist_float.pushToTail(6.66);
	cout << "pushToTail : ";
	mylist_float.print();
	cout << endl;
	cout << endl << "popHead : " << mylist_float.popHead() << endl;
	cout << "popTail : " << mylist_float.popTail() << endl;
	cout << "list after pop : ";
	mylist_float.print();
	cout << endl;

	float num_float;
	cout << endl << "Enter the num(float) : ";
	cin >> num_float;
	if (mylist_float.search(num_float) == 1)
	{
		cout << num_float << " found!" << endl;
	}
	else
	{
		cout << num_float << " not found." << endl;
	}
	mylist_float.~List();
	cout << endl;

	cout << "double type" << endl;
	List<double> mylist_double;
	mylist_double.pushToHead(9.1011);
	mylist_double.pushToHead(5.678);
	mylist_double.pushToHead(1.234);
	cout << endl << "pushToHead : ";
	mylist_double.print();
	cout << endl;
	mylist_double.pushToTail(12.1314);
	mylist_double.pushToTail(15.1617);
	mylist_double.pushToTail(18.1920);
	cout << "pushToTail : ";
	mylist_double.print();
	cout << endl;
	cout<< endl << "popHead : " << mylist_double.popHead() << endl;
	cout << "popTail : " << mylist_double.popTail() << endl;
	cout << "list after pop : ";
	mylist_double.print();
	cout << endl;
	double num_double;
	cout << endl << "Enter the num(double) : ";
	cin >> num_double;
	if (mylist_double.search(num_double) == 1)
	{
		cout << num_double << " found!" << endl;
	}
	else
	{
		cout << num_double << " not found." << endl;
	}
	mylist_double.~List();
	cout << endl;
}
