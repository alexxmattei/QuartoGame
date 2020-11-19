#include "Piece.h"

int main()
{
	Piece piece(Piece::Colour::Black, Piece::Shape::Round, Piece::Height::Short, Piece::BodyStyle::Hollow);

	std::cout << piece << std::endl;

	return 0;
}