#include <iostream>
#include <cmath>
#include<stdio.h>
#include<ctype.h>
#include<string>

using namespace std;


long long int factorial(int n) {	//the factorial number calculator
	if (n > 1) {
		return n * factorial(n - 1);		
	}
	else {
		return 1;
	}
}

long long int refactorial() {	//factorial user input and error control
	string n2 = "";
	int n = 0;
	bool digitcheck = true;
	cout << endl << "Enter a non negative factorial (max 20)" << endl;
	cout << "!";
	cin >> n2;		//user input for what to factorialize
	cout << endl;
		for (int i = 0; i < n2.length(); i++) {		//checks if user input is a number
			digitcheck = isdigit(n2[i]);
			if (!digitcheck) {		//breaks out of loop if user input is not a number
				break;
			}
		}

		if (digitcheck) {		//another check if user input is a number
			n = stoi(n2);		//converts user input string to integer so i can actually use it
			if (n > -1 && n < 21) {		//checks if user input is a valid number since everything bellow 0 is undefined and the program cant handle numbers bigger than 20
				return factorial(n);
			}
			else {		//code restarts if user input is not a valid number
				cout << "please only enter valid numbers" << endl;
				return refactorial();

			}
		}
		else {		//code restarts if user input is not a number
			cout << "please only enter numbers" << endl;
			return refactorial();
	}	
}
int addpolynomial() {
	int p1array[4] = {}; //polynomial 1
	int p2array[4] = {}; //polynomial 2
	int arraycheck = 0;
	cout << endl << "ax^3 + bx^2 + cx + d" << endl;
	cout << "please enter the a, b, c and d values of you first polynomial (enter 0 if you dont have one of the segments)" << endl;

	for (int i = 0; i < 4; i++) {	//user input for the first polynomial
		if (i == 0) {
			cout << "a = ";
		}
		if (i == 1) {
			cout << "b = ";
		}
		if (i == 2) {
			cout << "c = ";
		}
		if (i == 3) {
			cout << "d = ";
		}
		cin >> p1array[i];		//checks if user input is a polynomial. i wanted to use digitcheck here put then you cant enter "-" which might be needed
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			arraycheck = 1;
			break;
		}
	}
	if (arraycheck == 1) {		//restarts code if user input is not a number
		cout << "please only enter numbers" << endl;
		addpolynomial();
		return 0;
	}
	cout << "your first polynomial: " << p1array[0] << "x^3 + " << p1array[1] << "x^2 + " << p1array[2] << "x + " << p1array[3] << endl;
	cout << "please enter the a, b, c and d values of your second polynomial (enter 0 if you dont have one of the segments)" << endl;
	for (int i = 0; i < 4; i++) {	//same thing except with the second polynomial
		if (i == 0) {
			cout << "a = ";
		}
		if (i == 1) {
			cout << "b = ";
		}
		if (i == 2) {
			cout << "c = ";
		}
		if (i == 3) {
			cout << "d = ";
		}
		cin >> p2array[i];
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			arraycheck = 1;
			break;
		}
	}
	if (arraycheck == 1) { //restarts the code if user input is not a number. i could not figure out how to only ask for the second polynomial without making it stupidly difficult so i settled for just restarting the code
		cout << "please only enter numbers" << endl << "please re-enter both polynomials" << endl;
		addpolynomial();
		return 0;
	}
	cout << "your second polynomial: " << p2array[0] << "x^3 + " << p2array[1] << "x^2 + " << p2array[2] << "x + " << p2array[3] << endl;

	int a = p1array[0] + p2array[0];	//add all the numbers togethor in the same power and print it out
	int b = p1array[1] + p2array[1];
	int c = p1array[2] + p2array[2];
	int d = p1array[3] + p2array[3];

	cout << endl << "poly1 + poly2 = " << a << "x^3 + " << b << "x^2 + " << c << "x + " << d << endl;
	return 0;
}
int subpolynomial() { //exactly the same as the function above except the plusses are now minuses, so im not writing all that
	int p1array[4] = {};
	int p2array[4] = {};
	int arraycheck = 0;
	cout << endl << "ax^3 + bx^2 + cx + d" << endl;
	cout << "please enter the a, b, c and d values of you first polynomial (enter 0 if you dont have one of the segments)" << endl;

	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			cout << "a = ";
		}
		if (i == 1) {
			cout << "b = ";
		}
		if (i == 2) {
			cout << "c = ";
		}
		if (i == 3) {
			cout << "d = ";
		}
		cin >> p1array[i];
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			arraycheck = 1;
			break;
		}
	}
	if (arraycheck == 1) {
		cout << "please only enter numbers" << endl;
		subpolynomial();
		return 0;
	}
	cout << "your first polynomial: " << p1array[0] << "x^3 + " << p1array[1] << "x^2 + " << p1array[2] << "x + " << p1array[3] << endl;
	cout << "please enter the a, b, c and d values of your second polynomial (enter 0 if you dont have one of the segments)" << endl;
	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			cout << "a = ";
		}
		if (i == 1) {
			cout << "b = ";
		}
		if (i == 2) {
			cout << "c = ";
		}
		if (i == 3) {
			cout << "d = ";
		}
		cin >> p2array[i];
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			arraycheck = 1;
			break;
		}
	}
	if (arraycheck == 1) { //also exactly the same as the above until the actual calculations
		cout << "please only enter numbers" << endl << "please re-enter both polynomials" << endl;
		subpolynomial();
		return 0;
	}
	cout << "your second polynomial: " << p2array[0] << "x^3 + " << p2array[1] << "x^2 + " << p2array[2] << "x + " << p2array[3] << endl;

	int a = p1array[0] - p2array[0];
	int b = p1array[1] - p2array[1];
	int c = p1array[2] - p2array[2];
	int d = p1array[3] - p2array[3];

	cout << endl << "poly1 - poly2 = " << a << "x^3 + " << b << "x^2 + " << c << "x + " << d << endl;
	return 0;
}
int multipolynomial() {
	int p1array[4] = {};
	int p2array[4] = {};
	int arraycheck = 0;
	cout << endl << "ax^3 + bx^2 + cx + d" << endl;
	cout << "please enter the a, b, c and d values of you first polynomial (enter 0 if you dont have one of the segments)" << endl;

	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			cout << "a = ";
		}
		if (i == 1) {
			cout << "b = ";
		}
		if (i == 2) {
			cout << "c = ";
		}
		if (i == 3) {
			cout << "d = ";
		}
		cin >> p1array[i];
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			arraycheck = 1;
			break;
		}
	}
	if (arraycheck == 1) {
		cout << "please only enter numbers" << endl;
		multipolynomial();
		return 0;
	}
	cout << "your first polynomial: " << p1array[0] << "x^3 + " << p1array[1] << "x^2 + " << p1array[2] << "x + " << p1array[3] << endl;
	cout << "please enter the a, b, c and d values of your second polynomial (enter 0 if you dont have one of the segments)" << endl;
	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			cout << "a = ";
		}
		if (i == 1) {
			cout << "b = ";
		}
		if (i == 2) {
			cout << "c = ";
		}
		if (i == 3) {
			cout << "d = ";
		}
		cin >> p2array[i];
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			arraycheck = 1;
			break;
		}
	}
	if (arraycheck == 1) {
		cout << "please only enter numbers" << endl << "please re-enter both polynomials" << endl;
		multipolynomial();
		return 0;
	}
	cout << "your second polynomial: " << p2array[0] << "x^3 + " << p2array[1] << "x^2 + " << p2array[2] << "x + " << p2array[3] << endl;
		int a = p1array[0] * p2array[0]; //multiplies all segments with all the other segments for a metric fuck ton of results
		int b = p1array[0] * p2array[1];
		int c = p1array[0] * p2array[2]; 
		int d = p1array[0] * p2array[3]; 

		int e = p1array[1] * p2array[0];
		int f = p1array[1] * p2array[1];
		int g = p1array[1] * p2array[2];
		int h = p1array[1] * p2array[3];

		int i = p1array[2] * p2array[0];
		int j = p1array[2] * p2array[1];
		int k = p1array[2] * p2array[2];
		int l = p1array[2] * p2array[3];

		int m = p1array[3] * p2array[0]; 
		int n = p1array[3] * p2array[1]; 
		int o = p1array[3] * p2array[2];
		int p = p1array[3] * p2array[3];	//prints out all the values in the right power
		cout << endl << "poly1 * poly2 = " << a << "x^6 + " << b + e << "x^5 + " << c + f + i << "x^4 + " << d + g + j + m << "x^3 + " << h + k + n << "x^2 + " << l + o << "x + " << p << endl;
		return 0;
		
}
int repolynomial() {	//the main menu for the polynomial calculator
	string opcheck;
	int opvalue = 0;
	int digitcheck;
	cout << endl << "what do you want to do?" << endl;
	cout << "enter (1) for addition" << endl;
	cout << "enter (2) for subtraction" << endl;
	cout << "enter (3) for multiplication" << endl;
	cout << "enter (4) to return to main menu" << endl;
	cin >> opcheck;

	for (int i = 0; i < opcheck.length(); i++) {	//check if user input is a number
		digitcheck = isdigit(opcheck[i]);
		if (!digitcheck) {		//restarts if not number
			cout << "please only enter one of the specified numbers" << endl;
			return repolynomial();
		}
		else {
			opvalue = stoi(opcheck); 
		}
		if (opvalue < 1 || opvalue > 4) { //checks if user input is valid and restarts if not
			cout << "please only enter one of the specified numbers" << endl;
			return repolynomial();
		}else {			//decides what type of calucations to do based on the user input
			switch (opvalue) {
			case 1:
				addpolynomial();
				break;
			case 2:
				subpolynomial();
				break;
			case 3:
				multipolynomial();
				break;
			case 4:
				return 2; // returns 2 so that i can restart the entire thing or returning to the main menu
			}
		}
	}
	return 0;
}
int addition() { //basic addition, checks number, add togethor and print
	int num1;
	int num2;
	cout << endl << "enter the two numbers you want to add" << endl;
	cin >> num1 >> num2;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "please only enter numbers" << endl;
		return addition();
	}
	else {
		cout << "= " << num1 + num2;
		return 0;
	}
}
int subtraction() {  //basic subtraction, checks number, subtract and print
	int num1;
	int num2;
	cout << endl << "enter the two numbers you want to subtract" << endl;
	cin >> num1 >> num2;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "please only enter numbers" << endl;
		return subtraction();
	}
	else {
		cout << "= " << num1 - num2;
		return 0;
	}
}
int division() { //basic division, checks number, divides and print
	int num1;
	int num2;
	cout << endl << "enter the two numbers you want to divide" << endl;
	cin >> num1 >> num2;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "please only enter numbers" << endl;
		return division();
	}
	else {
		cout << "= " << num1 / num2;
		return 0;
	}
}
int multiplication() { //basic multiplication, checks number, multiplies and print
	int num1;
	int num2;
	cout << endl << "enter the two numbers you want to multiply" << endl;
	cin >> num1 >> num2;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "please only enter numbers" << endl;
		return multiplication();
	}else{
		cout << "= " << num1 * num2;
		return 0;
	}
}
int simplemath() { // the main menu for the simple math operation
	string opcheck;
	int opvalue = 0;
	int digitcheck;
	cout << endl << "what do you want to do?" << endl;
	cout << "enter (1) for addition" << endl;
	cout << "enter (2) for subtraction" << endl;
	cout << "enter (3) for division" << endl;
	cout << "enter (4) for multiplication" << endl;
	cout << "enter (5) to return to main menu" << endl;
	cin >> opcheck; //asks for type of calucation operation

	for (int i = 0; i < opcheck.length(); i++) {	//checks  if number
		digitcheck = isdigit(opcheck[i]);
		if (!digitcheck) { //restarts if not number
			cout << "please only enter one of the specified numbers" << endl;
			return simplemath();
		}
		else {
			opvalue = stoi(opcheck);
		}
		if (opvalue < 1 || opvalue > 5) { // restarts if not valid number
			cout << "please only enter one of the specified numbers" << endl;
			return simplemath();
		}
		else { //calls the the right function for the type of operation
			switch (opvalue) {
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				division();
				break;
			case 4:
				multiplication();
				break;
			case 5:
				return 2; // returns 2 so that i can restart the entire thing or returning to the main menu
			}
		}
	}
	return 0;
}

int main() { // main menu function
	string opcheck;
	int opvalue;
	bool digitcheck = true;
	int mainm1 = 0;
	int mainm2 = 0;
	cout << endl << "What type of operation do you want to do?" << endl;
	cout << "Enter (1) for factorial" << endl;
	cout << "Enter (2) for polynomial" << endl;
	cout << "Enter (3) for simple math equations" << endl;
	cout << "Enter (4) to exit program" << endl;
	cin >> opcheck; //asks for what type of operation the user wants to do

	for (int i = 0; i < opcheck.length(); i++) { //checks if number
		digitcheck = isdigit(opcheck[i]);
		if (!digitcheck) { // restarts if not
			cout << "please only enter numbers" << endl;
			main();
		}
		else {
			opvalue = stoi(opcheck); // checks if user input is valid
			if (opvalue < 1 || opvalue > 4) {
				cout << "Please only enter specified numbers" << endl << endl;
				main();
			}

			switch (opvalue) { // calls for the function needed for the type of operation
			case 1:
				cout << "= " << refactorial() << endl;
				break;
			case 2:
				mainm1 = repolynomial();
				if (mainm1 == 2) { //if function returns 2 goes back to the main menu
					main();
				}
				break;
			case 3:
				mainm2 = simplemath();
				if (mainm2 == 2) {
					main();
				}
				break;
			case 4:
				break;
			}
		}
	}
}