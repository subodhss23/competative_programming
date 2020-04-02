#include<iostream>
#include<math.h>
using namespace std;

int main(){

	int side_a, side_b, side_c;
	float s;
	float a;

	cout << "enter side a " << endl;
	cin >> side_a;
	cout << "Enter side b " << endl;
	cin >> side_b;
	cout << "Enter side c " << endl;
	cin >> side_c;

	s = (side_a + side_b + side_c) / 2;

	cout << "The semi parameter is " << s << endl;

	a = sqrt(s*(s-side_a) * s*(s-side_b) * s*(s-side_c));

	cout << "The area is " << a << endl;

	cout << "Thanks for choosing your 100% accurate app " << endl;

	return 0;

}	
