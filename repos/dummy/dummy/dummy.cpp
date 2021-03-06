// dummy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <random>
#include <sstream>
using namespace  std;

using namespace std;

// ALL LEVEL 1 Functions in header

void displayLVL1Sum(int a, int b) {
	cout << a << " + " << b << " = x\nWhat is the value of x?\n";
}

void displayLVL1Subtract(int a, int b) {
	cout << a << " - " << b << " = x\nWhat is the value of x?\n";
}

void displayLVL1Multiply(int a, int b) {
	cout << a << " * " << b << " = x\nWhat is the value of x?\n";
}
void displayLVL1Division(int a, int b) {
	cout << a << " / " << b << " = x\nWhat is the value of x?\n";
}
int getLVL1Sum(int a, int b) {
	return a + b;
}
int getLVL1Subtract(int a, int b) {
	return a - b;
}
int getLVL1Multiply(int a, int b) {
	return a * b;
}
int getLVL1Division(int a, int b) {
	return a / b;
}
void displayLVL2Sum(int a, int b) {
	cout << a << " + x = " << b << "\nWhat is the value of x?\n";
}

void displayLVL2Subtract(int a, int b) {
	cout << a << " - x = " << b << "\nWhat is the value of x?\n";
}

void displayLVL2Multiply(int a, int b) {
	cout << a << " * x = " << b << "\nWhat is the value of x?\n";
}
void displayLVL2Division(int a, int b) {
	cout << a << " / x = " << b << "\nWhat is the value of x?\n";
}
int getLVL2Sum(int a, int b) {
	return a + b;
}

int getLVL2Subtract(int a, int b) {
	return a - b;
}

int getLVL2Multiply(int a, int b) {
	return a * b;
}
int getLVL2Division(int a, int b) {
	return a / b;
}

void displayLVL3Sum(int a, int b, int c) {
	cout << a << " + " << b << "x = " << c << "\nWhat is the value of x?\n";
}

void displayLVL3Subtract(int a, int b, int c) {
	cout << a << " - " << b << "x = " << c << "\nWhat is the value of x?\n";
}

void displayLVL3Multiply(int a, int b, int c) {
	cout << a << " * " << b << "x = " << c << "\nWhat is the value of x?\n";
}
void displayLVL3Division(int a, int b, int c) {
	cout << a << " / " << b << "x = " << c << "\nWhat is the value of x?\n";
}
int getLVL3Sum(int a, int b, int c) {
	return (c + a) / b;
}
int getLVL3Subtract(int a, int b, int c) {
	return (c - a) / b;
}
int getLVL3Multiply(int a, int b, int c) {
	return (c * a) / b;
}
int getLVL3Division(int a, int b, int c) {
	return (c / a) / b;
}

void displayLVL4Sum(int a, int b, int c) {
	cout << "(" << a << " + x)" << b << " = " << c << "\nWhat is the value of x?\n";
}

void displayLVL4Subtract(int a, int b, int c) {
	cout << "(" << a << " - x)" << b << " = " << c << "\nWhat is the value of x?\n";
}

void displayLVL4Multiply(int a, int b, int c) {
	cout << "(" << a << " * x)" << b << " = " << c << "\nWhat is the value of x?\n";
}
void displayLVL4Division(int a, int b, int c) {
	cout << "(" << a << " / x)" << b << " = " << c << "\nWhat is the value of x?\n";
}

int getLVL4Sum(int a, int b, int c) {
	return (c / b) - a;
}

int getLVL4Subtract(int a, int b, int c) {
	return (c / b) + a;
}

int getLVL4Multiply(int a, int b, int c) {
	return (c / b) / a;
}
int getLVL4Division(int a, int b, int c) {
	return (c / b)*a;
}

void displayLVL5Sum(int a, int b, int c) {
	cout << a << " + " << b << " = " << c << "x\nWhat is the value of x?\n";
}

void displayLVL5Subtract(int a, int b, int c) {
	cout << a << " - " << b << " = " << c << "x\nWhat is the value of x?\n";
}

void displayLVL5Multiply(int a, int b, int c) {
	cout << a << " * " << b << " = " << c << "x\nWhat is the value of x?\n";
}
void displayLVL5Division(int a, int b, int c) {
	cout << a << " / " << b << " = " << c << "x\nWhat is the value of x?\n";
}

int getLVL5Sum(int a, int b, int c) {
	return (a + b) / c;
}

int getLVL5Subtract(int a, int b, int c) {
	return (a - b) / c;
}

int getLVL5Multiply(int a, int b, int c) {
	return (a * b) / c;
}
int getLVL5Division(int a, int b, int c) {
	return (a / b) / c;
}

int main() {
	int clears = 0;
	int level = 1;
	int lives = 3;
	for (int i = 0; i < 50; i++) {
		int a;
		int b;
		int c;
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dis(1, 4);
		uniform_int_distribution<> dio(1, 20);
		int mode = dis(gen);
		if (clears == 10) {
			cout << "LEVEL 2 REACHED\n";
			level = 2;
		}
		if (clears == 20) {
			cout << "LEVEL 3 REACHED\n";
			level = 3;
		}
		if (clears == 30) {
			cout << "LEVEL 4 REACHED\n";
			level = 4;
		}
		if (clears == 40) {
			cout << "LEVEL 5 REACHED\n";
			level = 5;
		}
		if (level == 1) {
			switch (mode) {
			case 1:
				a = dio(gen);
				b = dio(gen);
				displayLVL1Sum(a, b);
				cout << getLVL1Sum(a, b) << endl;
				break;
			case 2:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					if (a < b) {

					}
					else {
						displayLVL1Subtract(a, b);
						cout << getLVL1Subtract(a, b) << endl;
						break;
					}
				}
				break;
			case 3:
				a = dio(gen);
				b = dio(gen);
				displayLVL1Multiply(a, b);
				cout << getLVL1Multiply(a, b) << endl;
				break;
			case 4:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					if (a%b != 0) {

					}
					else {
						displayLVL1Division(a, b);
						cout << getLVL1Division(a, b) << endl;
						break;
					}
				}
				break;
			}
		}
		else if (level == 2) {
			switch (mode) {
			case 1:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					if (b < a) {

					}
					else {
						displayLVL2Sum(a, b);
						break;
					}
				}
				break;
			case 2:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					if (a < b) {

					}
					else {
						displayLVL2Subtract(a, b);
						break;
					}
				}
				break;
			case 3:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					if (b % a != 0 || a < b) {

					}
					else {
						displayLVL2Multiply(a, b);
						break;
					}
				}
				break;
			case 4:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					if (b > a || a % b != 0) {

					}
					else {
						displayLVL2Division(a, b);
						break;
					}
				}
				break;
			}
		}
		else if (level == 3) {
			switch (mode) {
			case 1:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if ((c-a)%b!=0 || a>c) {
						continue;
					}
					else {
						displayLVL3Sum(a, b, c);
						break;
					}
				}
				break;
			case 2:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if ((a-c) % b != 0 || a<c) {
						continue;
					}
					else {
						displayLVL3Subtract(a, b, c);
						break;
					}
				}
				break;
			case 3:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (c%a != 0 || (c/a)%b !=0 || a>c || b>c) {
						continue;
					}
					else {
						displayLVL3Multiply(a, b, c);
						break;
					}
				}
				break;
			case 4:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (c%a != 0 || a<c || (c/a)%b !=0 ) {
						continue;
					}
					else {
						displayLVL3Division(a, b, c);
						break;
					}
				}
				break;
			}
		}
		else if (level == 4) {
			switch (mode) {
			case 1:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (c%b == 0 && (c/b)>a) {
						displayLVL4Sum(a, b, c);
						break;
					}
					else {
						continue;
					}
				}
				break;
			case 2:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (c%b != 0 || a<(c/b)) {
						continue;
					}
					else {
						displayLVL4Subtract(a, b, c);
						break;
					}
				}
				break;
			case 3:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (c%b == 0 && (c / b)%a == 0) {
						displayLVL4Multiply(a, b, c);
						break;
					}
					else {
						continue;
					}
				}
				break; 
			case 4:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (c%b == 0 && a%(c/b) ==0) {
						displayLVL4Division(a, b, c);
						break;
					}
					else {
						continue;
					}
				}
				break;
			}
		}
		else {
			switch (mode) {
			case 1:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (a%c != 0 || b%c != 0) {
						continue;
					}
					else{
						displayLVL5Sum(a, b, c);
						break;
					}
				}
				break;
			case 2:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (a%c != 0 || b % c != 0 || b>a) {
						continue;
					}
					else {
						displayLVL5Subtract(a, b, c);
						break;
					}
				}
				break;
			case 3:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (a%c != 0 || b % c != 0) {
						continue;
					}
					else {
						displayLVL5Multiply(a, b, c);
						break;
					}
				}
				break;
			case 4:
				for (;;) {
					a = dio(gen);
					b = dio(gen);
					c = dio(gen);
					if (a%c != 0 || b % c != 0 || a%b != 0) {
						continue;
					}
					else {
						displayLVL5Division(a, b, c);
						break;
					}
				}
				break;
			}
		}
		clears++;
	}
}
