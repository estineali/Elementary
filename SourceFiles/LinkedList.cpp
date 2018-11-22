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
	Node* temp;
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

int LinkedList::find(int n)
{
	for (int i = 0; i < m_size; i++)
	{
		if (this->at(i)== n)
		{
			return i;
		}
	}
	return -1;
}

void LinkedList::set(int indx, int n)
{
	Node* temp = m_first;
	for (int i = 0; i < indx; i++)
	{
		temp = temp->m_node_ahead;
	}
	temp->m_data = n;
}

void LinkedList::remove(int indx)
{
	int last_index = m_size - 1;
	if (indx <= last_index)
	{
		if (indx == 0)
		{
			Node* temp = m_first->m_node_ahead;
			delete m_first;
			m_first = temp;
			temp = NULL;
			m_size--;
		}
		else if (indx == last_index)
		{
			Node* temp = m_first;
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
