#pragma once
#include <iostream>
#include <fstream>

class Piece
{
public:
	enum class Colour : uint8_t
	{
		Black,
		White
	};

	enum class Shape : uint8_t
	{
		Round,
		Square
	};

	enum class Height : uint8_t
	{
		Short,
		Tall
	};

	enum class BodyStyle : uint8_t
	{
		Full,
		Hollow
	};

private:

	Colour m_Colour : 1;
	Shape m_Shape : 1;
	Height m_Height : 1;
	BodyStyle m_BodyStyle : 1;

public:

	Piece(Colour c, Shape s, Height h, BodyStyle b);

	Colour getColour() const;
	Shape getShape() const;
	Height getHeight() const;
	BodyStyle getBodyStyle() const;

	friend std::ostream& operator<<(std::ostream& print, const Piece& piece);
};

