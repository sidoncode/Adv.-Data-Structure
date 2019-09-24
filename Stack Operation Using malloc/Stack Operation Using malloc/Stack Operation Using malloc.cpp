#include<stdio.h>
#include <cstdlib>
#include<iostream>   
#define max 5
using namespace std;

struct stack{
	int top;
	int* array;
	int capacity;
};
struct stack* s1;
struct stack* create_stack() {
	

}
void push();
// def of push();
void push() {
	int element;
	cout << "ENTer teh element for the push operation in the stack" << endl;
	cin >> element;
	s1->top = s1->top + 1;
	s1->array[s1->top] = element;
	cout << s1->array[s1->top];
}

int main() {

}