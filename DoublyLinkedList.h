#pragma once
#include <iostream>


struct Node
{
	int value;
	Node* next;
	Node* previous;

	Node(int val) 
	{
		value = val;
		next = this;
		previous = this;
	}
	~Node()
	{
		next = NULL;
		previous = NULL;
	}
};

class DLList
{
	Node m_node;
	int m_length;
public:
	DLList();
	~DLList();
	int len();
	void append(Node n);
	void remove(int index);
	

	
};