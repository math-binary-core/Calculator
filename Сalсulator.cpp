#include <iostream>
using namespace std;

void Plus(int a, int b);
void Minus(int a, int b);
void Ymn(int a, int b);
void Del(int a, int b);
int main() {
	int a, b;
	cout << "Number 1: ";
	cin >> a;
	cout << "Number 2: ";
	cin >> b;
	char bas;
	cout << "Znak";
	cin >> bas;
	switch (bas) {
	case '+': Plus(a, b); break;
	case '-': Minus(a, b); break;
	case '*': Ymn(a, b); break;
	case '/': Del(a, b); break;
	default: cout << "No"; break;
	}
	return 0;
}

void Plus(int a, int b) {
	cout << "Result: " << a + b;
}
void Minus(int a, int b) {
	cout << "Result: " << a - b;
}
void Ymn(int a, int b) {
	cout << "Result: " << a * b;
}
void Del(int a, int b) {
	if (b == 0) {
		cout << "NO";
	}
	else {
		cout << "Result: " << a / b;
	}
}
