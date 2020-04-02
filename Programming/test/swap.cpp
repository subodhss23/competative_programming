#include<iostream>
using namespace std;

int main(){
	int a = 22;
	int b = 33;
	int temp;
	
	cout << "before swapping " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "after swapping " << endl;
	
	temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;

}
