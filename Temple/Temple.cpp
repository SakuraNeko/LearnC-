// Temple.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

template<template T,int SIZE>
class Mystack
{
	int size;
	T data[SIZE];
public:
	void push(T t)
	{

	}
	Mystack();
	~Mystack();

private:

};

Mystack::Mystack()
{
}

Mystack::~Mystack()
{
}

class calculator {
private:
	Mystack<int, 100> digitStack;
	Mystack<char, 100> opStack;
	map<char, int> precedence;
public:
	void init()
	{
		precedence.insert(pair<char, int>('+', 0));
		precedence.insert(pair<char, int>('-', 0));
		precedence.insert(pair<char, int>('*', 3));
		precedence.insert(pair<char, int>('/', 3));
	}
	bool isError(string str)
	{
		for(int i=0;<str.length();i++)
			if(str)
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	calculator cal;

    return 0;
}

