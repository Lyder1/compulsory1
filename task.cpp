#include <iostream>
#include <cmath>
#include<stdio.h>
#include<ctype.h>
#include<string>

using namespace std;


long long int factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);		
	}
	else {
		return 1;
	}
}

long long int refactorial() {
	string n2 = "";
	int n = 0;
	bool digitcheck = true;
	cout << endl << "Enter a non negative factorial (max 20)" << endl;
	cout << "!";
	cin >> n2;
	cout << endl;
		for (int i = 0; i < n2.length(); i++) {
			digitcheck = isdigit(n2[i]);
			if (!digitcheck) {
				break;
			}
		}

		if (digitcheck) {
			n = stoi(n2);
			if (n > -1 && n < 21) {
				return factorial(n);
			}
			else {
				cout << "please only enter valid numbers" << endl;
				return refactorial();

			}
		}
		else {
			cout << "please only enter numbers" << endl;
			return refactorial();
	}	
}
int addpolynomial() {
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
		addpolynomial();
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
		addpolynomial();
		return 0;
	}
	cout << "your second polynomial: " << p2array[0] << "x^3 + " << p2array[1] << "x^2 + " << p2array[2] << "x + " << p2array[3] << endl;

	int a = p1array[0] + p2array[0];
	int b = p1array[1] + p2array[1];
	int c = p1array[2] + p2array[2];
	int d = p1array[3] + p2array[3];

	cout << endl << "poly1 + poly2 = " << a << "x^3 + " << b << "x^2 + " << c << "x + " << d << endl;
	return 0;
}
int subpolynomial() {
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
	if (arraycheck == 1) {
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
		int a = p1array[0] * p2array[0];
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
		int p = p1array[3] * p2array[3];
		cout << endl << "poly1 * poly2 = " << a << "x^6 + " << b + e << "x^5 + " << c + f + i << "x^4 + " << d + g + j + m << "x^3 + " << h + k + n << "x^2 + " << l + o + j << "x + " << p << endl;
		return 0;
}
int repolynomial() {
	string opcheck;
	int opvalue = 0;
	int digitcheck;
	cout << endl << "what do you want to do?" << endl;
	cout << "enter (1) for addition" << endl;
	cout << "enter (2) for subtraction" << endl;
	cout << "enter (3) for multiplication" << endl;
	cout << "enter (4) to return to main menu" << endl;
	cin >> opcheck;

	for (int i = 0; i < opcheck.length(); i++) {
		digitcheck = isdigit(opcheck[i]);
		if (!digitcheck) {
			cout << "please only enter one of the specified numbers" << endl;
			return repolynomial();
		}
		else {
			opvalue = stoi(opcheck);
		}
		if (opvalue < 1 || opvalue > 4) {
			cout << "please only enter one of the specified numbers" << endl;
			return repolynomial();
		}else {
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
				return 2;
			}
		}
	}
	return 0;
}
int addition() {
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
int subtraction() {
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
int division() {
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
int multiplication() {
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
int simplemath() {
	string opcheck;
	int opvalue = 0;
	int digitcheck;
	cout << endl << "what do you want to do?" << endl;
	cout << "enter (1) for addition" << endl;
	cout << "enter (2) for subtraction" << endl;
	cout << "enter (3) for division" << endl;
	cout << "enter (4) for multiplication" << endl;
	cout << "enter (5) to return to main menu" << endl;
	cin >> opcheck;

	for (int i = 0; i < opcheck.length(); i++) {
		digitcheck = isdigit(opcheck[i]);
		if (!digitcheck) {
			cout << "please only enter one of the specified numbers" << endl;
			return simplemath();
		}
		else {
			opvalue = stoi(opcheck);
		}
		if (opvalue < 1 || opvalue > 5) {
			cout << "please only enter one of the specified numbers" << endl;
			return simplemath();
		}
		else {
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
				return 2;
			}
		}
	}
	return 0;
}

int main() {
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
	cin >> opcheck;

	for (int i = 0; i < opcheck.length(); i++) {
		digitcheck = isdigit(opcheck[i]);
		if (!digitcheck) {
			cout << "please only enter numbers" << endl;
			main();
		}
		else {
			opvalue = stoi(opcheck);
			if (opvalue < 1 || opvalue > 4) {
				cout << "Please only enter specified numbers" << endl << endl;
				main();
			}

			switch (opvalue) {
			case 1:
				cout << "= " << refactorial() << endl;
				break;
			case 2:
				mainm1 = repolynomial();
				if (mainm1 == 2) {
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