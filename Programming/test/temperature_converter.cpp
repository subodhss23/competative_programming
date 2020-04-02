#include<iostream>
using namespace std;

int main(){
	int option;
	int temp;
	float new_temp;

	cout << "welcome to temperature converting app" << endl;
	cout << "1. Celcius to Farenheit" << endl;
	cout << "2. Farenheit  to  Celcius" << endl;
	cin >> option;

	if(option == 1){
		cout << "Enter the temperature to change into Farenheit." << endl;
		cin >> temp;

		new_temp = (temp * 9.0/5.0) + 32;

		cout << "Temperatite in Farenheit is "<< new_temp  << endl;			
} else if (option == 2){
		cout << "Enter the temperature to change in Celcius." << endl;
		cin >> temp;

		new_temp = (temp - 32) * 5.0/9.0;
		cout << "Temperature in Celcius is " << new_temp << endl;	
} else {
		cout << "not a valid option" << endl;
	}

	return 0;

}
