#include<iostream>

int main(){
	char a = 'a';
	short b = 22;
	int c = 33;
	long d = 66;
	long long e = 444;
	float f = 23.22;
	double g = 88.99;
	long double  h = 100;
	bool i = true;


	std::cout <<  "Size of fundamental data types in cpp " << std::endl;
	std::cout << std::endl;
	std::cout << "size of a char is " << sizeof(a) << std::endl;
	std::cout << "size of a short is " << sizeof(b) << std::endl;
	std::cout << "size of an int is  " << sizeof(c) << std::endl;
	std::cout << "size of an long is " << sizeof(d) << std::endl;
	std::cout << "size of an long long is " << sizeof(e) << std::endl;
	std::cout << "size of an float is " << sizeof(f) << std::endl;
	std::cout << "size of a double is " << sizeof(g) << std::endl;
	std::cout << "size of a long double is " << sizeof(h) << std::endl;
	std::cout << "size of a boolean is " << sizeof(i) << std::endl;
	std::cout << "Thanks for your time to view our program" << std::endl;
	return 0;
}

