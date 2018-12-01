#pragma once
#include <iostream>

template <typename T2>
struct Node
{
	T2 m_data;
	Node* m_node_ahead; //pointer that points to the item above
	Node() 
	{
		m_node_ahead = NULL;
	}
};

template <typename T2>
class LinkedList
{

private:
	Node<T2>* m_first;
	int m_size;
	 
public:
	LinkedList();//Constructor
	LinkedList(T2 val);//Overloaded Constructor
	~LinkedList();//Destructor

	T2 at(int indx);
	void set(int indx, T2 n);
	void insert(int indx, T2 n);
	void append(T2 n);
	void remove(int indx);

	int size();
	int find(T2 n);
	bool is_empty();
	void show();
};

/*
	IMPLEMENTATION
*/


template <typename T2>
LinkedList<T2>::LinkedList()
{
	m_size = 0;
	m_first = NULL;
}

template <typename T2>
LinkedList<T2>::LinkedList(T2 val)
{
	m_first = new Node<T2>();
	m_first->m_data = val;
	m_size = 1;
}

template <typename T2>
LinkedList<T2>::~LinkedList()
{
	Node<T2>* temp;
	int element_counter = 0;
	while (m_first != NULL)
	{
		temp = m_first->m_node_ahead;
		delete m_first;
		element_counter++;
		m_first = temp;
	}
	std::cout << "\nList Status: Destroyed " << element_counter;
	std::cout << " elements. \nList Destroyed." << std::endl;
}

template <typename T2>
T2 LinkedList<T2>::at(int indx)
{
	Node<T2>* temp = m_first;
	for (int i = 1; i <= indx; i++)
	{
		temp = temp->m_node_ahead;
	}
	return temp->m_data;
}

template <typename T2>
void LinkedList<T2>::insert(int indx, T2 n)
{
	if (m_first == NULL || indx >= m_size)
	{
		this->append(n);
	}
	else
	{
		Node<T2>* temp = m_first;
		for (int i = 1; i < indx; i++)
		{
			temp = temp->m_node_ahead;
		}
		Node<T2>* new_node = new Node<T2>();
		new_node->m_node_ahead = temp->m_node_ahead;
		new_node->m_data = n;
		temp->m_node_ahead = new_node;
		m_size++;
	}
}

template <typename T2>
void LinkedList<T2>::append(T2 n)
{
	if (m_size == 0)
	{
		m_first = new Node<T2>();
		m_first->m_data = n;
		m_size++;
	}
	else
	{
		Node<T2>* temp = m_first;
		for (int i = 1; i < m_size; i++)
		{
			temp = temp->m_node_ahead;
		}
		temp->m_node_ahead = new Node<T2>();
		temp = temp->m_node_ahead;
		temp->m_data = n;
		m_size++;
	}
}

template <typename T2>
int LinkedList<T2>::size()
{ //working perfectly
	return m_size;
}

template <typename T2>
bool LinkedList<T2>::is_empty()
{ //working perfectly
	return m_size == 0 ? true : false;
}

template <typename T2>
void LinkedList<T2>::show()
{ //working perfectly
	Node<T2>* temp = m_first;
	while (temp != NULL)
	{
		std::cout << temp->m_data; //add printing mech for atom class
		if (temp->m_node_ahead != NULL)
		{
			std::cout << ", ";
		}
		temp = temp->m_node_ahead;
	}
	std::cout << std::endl;

}

template <typename T2>
int LinkedList<T2>::find(T2 n)
{
	for (int i = 0; i < m_size; i++)
	{
		if (this->at(i) == n)
		{
			return i;
		}
	}
	return -1;
}

template <typename T2>
void LinkedList<T2>::set(int indx, T2 n)
{
	Node<T2>* temp = m_first;
	for (int i = 0; i < indx; i++)
	{
		temp = temp->m_node_ahead;
	}
	temp->m_data = n;
}

template <typename T2>
void LinkedList<T2>::remove(int indx)
{
	int last_index = m_size - 1;
	if (indx <= last_index)
	{
		if (indx == 0)
		{
			Node<T2>* temp = m_first->m_node_ahead;
			delete m_first;
			m_first = temp;
			temp = NULL;
			m_size--;
		}
		else if (indx == last_index)
		{
			Node<T2>* temp = m_first;
			while (temp->m_node_ahead->m_node_ahead != NULL)
			{
				temp = temp->m_node_ahead;
			}

			delete temp->m_node_ahead;
			temp->m_node_ahead = NULL;
			m_size--;
		}
	}
}