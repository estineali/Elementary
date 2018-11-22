#pragma once
#include <iostream>

struct Node
{
	int m_data;
	Node* m_node_ahead; //pointer that points to the item above
	Node() 
	{
		m_node_ahead = NULL;
	}
};

class LinkedList
{

private:
	Node* m_first;
	int m_size;
	 
public:
	LinkedList();//Constructor
	LinkedList(int val);//Overloaded Constructor
	~LinkedList();//Destructor

	int at(int indx);
	void set(int indx, int n);
	void insert(int indx, int n);
	void append(int n);
	void remove(int indx);

	int size();
	int find(int n);
	bool is_empty();
	void show();
};