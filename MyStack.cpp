#include "MyStack.h"

MyStack::MyStack(int capacity) :BaseArray(capacity){
	head = -1;
	size = 0;
}
void MyStack::push(int n) {
	if (head == getCapacity()) return; //stack full
	head++;
	put(head, n);
	size++;
}
int MyStack::pop() {
	if (head == -1) return -1; //stack empty
	size--;
	int n = get(head--);
	return n;
}
int MyStack::capacity() {
	return getCapacity();
}
int MyStack::length() {
	return size;
}