#include "Atom.h"
#include <iostream>

Atom::Atom()
{
	m_is_active = false;
	m_pos.x = 0;
	m_pos.y = 0;

	int m_width = 0;
	int m_height = 0;
}

Atom::~Atom()
{
	std::cout << "Virtual destructor of Atom clas called" << std::endl;
}

Position Atom::get_position()
{
	return m_pos;
}

void Atom::set_x(float x)
{
	m_pos.x = x;
}

void Atom::set_y(float y)
{
	m_pos.y = y;
}

bool Atom::get_active()
{
	return m_is_active;
}

void Atom::set_active(bool is_active)
{
	m_is_active = is_active;
}

int Atom::get_width()
{
	return m_width;
}

void Atom::set_width(int width)
{
	m_width = width;
}

int Atom::get_height()
{
	return m_height;
}

void Atom::set_height(int height)
{
	m_height = height;
}

