//============================================================================
// Name        : 11_If-Else.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : If-Else statements, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//output a menu - control sequences like \n new line or \t for tab or \" for a double quote
	cout << "1.\tAdd new record." << endl;
	cout << "2.\tDelete record." << endl;
	cout << "3.\tView record." << endl;
	cout << "4.\tSearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	//TEST for selection and console input
	//if(value == 5){
	//	cout << "Application quitting . . ." << endl;
	//}

	//TEST for restrictive selection
	if (value < 3) {
		cout << "Insufficient privileges to use these menu options." << endl;
	}
	else {
		cout << "Privilege level sufficient" << endl;
	}
	if(value == 5){
		cout << "Quitting" << endl;
	}
	else{
		cout << "Not quitting" << endl;
	}
	return 0;
}
