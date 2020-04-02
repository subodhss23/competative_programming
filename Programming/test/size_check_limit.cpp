#include<iostream>
#include<climits>

using namespace std;

int main(){
	long long int  a;

	cout << "enter a number to check the limit " << endl;
	cin >> a;
	
	if (a <= INT_MAX && a >= INT_MIN) {
		cout << "the value of a is " << a << endl;
		cout << "within limit" << endl;
	} else {
		 cout << "out of limit" << endl;
	}
	return 0;
}
