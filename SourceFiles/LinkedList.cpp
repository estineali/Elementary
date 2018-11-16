#include "LinkedList.h"


LinkedList::LinkedList()
{
	m_size = 0;
	m_first = NULL;
}

LinkedList::LinkedList(int val)
{
	m_first = new Node();
	m_first->m_data = val;
	m_size = 1;
}

//Pending 
LinkedList::~LinkedList()
{
}

int LinkedList::at(int indx)
{
	Node* temp = m_first;
	for (int i = 1; i <= indx; i++)
	{
		temp = temp->m_node_ahead;
	}
	return temp->m_data;
}

void LinkedList::insert(int indx, int n)
{
	if (m_first == NULL || indx >= m_size)
	{
		this->append(n);
	}
	else
	{
		Node* temp = m_first;
		for (int i = 1; i < indx; i++)
		{
			temp = temp->m_node_ahead;
		}
		Node* new_node = new Node();
		new_node->m_node_ahead = temp->m_node_ahead;
		new_node->m_data = n;
		temp->m_node_ahead = new_node;
		m_size++;
	}
}

void LinkedList::append(int n)
{
	if (m_size == 0)
	{
		m_first = new Node();
		m_first->m_data = n;
		m_size++;
	}
	else
	{
		Node* temp = m_first;
		for (int i = 1; i < m_size; i++)
		{
			temp = temp->m_node_ahead;
		}
		temp->m_node_ahead = new Node();
		temp = temp->m_node_ahead;
		temp->m_data = n;
		m_size++;
	}
}

int LinkedList::size()
{ //working perfectly
	return m_size;
}

bool LinkedList::is_empty()
{ //working perfectly
	return m_size == 0 ? true : false;
}

void LinkedList::show()
{ //working perfectly
	Node* temp = m_first;
	while (temp != NULL)
	{
		std::cout << temp->m_data;
		if (temp->m_node_ahead != NULL)
		{
			std::cout << ", ";
		}
		temp = temp->m_node_ahead;
	}
	std::cout << std::endl;
	
}
