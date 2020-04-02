#include<iostream>
using namespace std;


int main(){
		int length;
		int breadth;
		int area;
		int perimeter;


	cout << "Enter the lenght of rectangle " << endl;	
	cin >> length;
	cout << "Enter the breadth for a reactangle " << endl;
	cin >> breadth;

	area = length * breadth;
	perimeter = 2*(length+breadth);

	cout << "The area is " << area << endl;
	cout << "The perimeter is " << perimeter << endl;

	return 0;

}
