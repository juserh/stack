#pragma once
#ifndef __MYSTACK_H__
#define __MYSTACK_H__

#include "BaseArray.h"
class MyStack:public BaseArray {
	int head;
	int size;
public:
	MyStack(int capacity);
	void push(int n);
	int pop();
	int capacity();
	int length();
};
#endif