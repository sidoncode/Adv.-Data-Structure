#include<iostream>
using namespace std;
#define max 5
int top = -1;
int stack[5];
void display();
void pop();
void push();
void push() {
	if (stack[top] == stack[5]) { cout << "stack overflow" << endl; }
	int element;
	cout << "enter the element for the insertion\n";
	cin >> element;
	top = top + 1;
	stack[top] = element;
	cout << stack[top];

}
void display() {
	for (int i = 0; i < 5; i++) {
		cout << stack[i];
	}
}
void pop() {
	if (top == -1) { cout << "stack Underflow" << endl; }
	top = top - 1;
	cout << top;
}
int main() {
	push();
}