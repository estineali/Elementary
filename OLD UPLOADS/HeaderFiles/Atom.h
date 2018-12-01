#pragma once

struct Position
{
    float x;
    float y;
    Position()
	{}
};


class Atom
{
protected:
    bool m_is_active;
    Position m_pos;
    int m_width;
    int m_height;

    
public:
    Atom();
    virtual ~Atom() = 0;

	Position get_position();
	void set_x(int x);
	void set_y(int y);

	bool get_active();
	void set_active(bool is_active);

	int get_width();
	void set_width(int width);

	int get_height();
	void set_height(int height);

    
    
};
