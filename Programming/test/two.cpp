#include<iostream>

int sum (int , int);

int sum(int a, int b){
	return a + b;
}

int main(){
	int a, b;
	std::cout << "Enter two numbers to get the sum " << std::endl;
	std::cin >> a >> b;
	
	int result;
	result = sum( a, b);
	
	std::cout << "The sum of two numbers is " << result << std::endl;

	return 0;
}
