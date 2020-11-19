#include "Piece.h"

Piece::Piece(Colour c, Shape s, Height h, BodyStyle b) : 
	m_Colour(c), 
	m_Shape(s),
	m_Height(h),
	m_BodyStyle(b)
{
	
}

Piece::Colour Piece::getColour() const
{
	return this->m_Colour;
}

Piece::Shape Piece::getShape() const
{
	return this->m_Shape;;
}

Piece::Height Piece::getHeight() const
{
	return this->m_Height;
}

Piece::BodyStyle Piece::getBodyStyle() const
{
	return this->m_BodyStyle;
}

std::ostream& operator<<(std::ostream& print, const Piece& piece)
{
	return print 
		<< static_cast<uint16_t>(piece.m_Colour)
		<< static_cast<uint16_t>(piece.m_Height)
		<< static_cast<uint16_t>(piece.m_Shape)
		<< static_cast<uint16_t>(piece.m_BodyStyle);
}
