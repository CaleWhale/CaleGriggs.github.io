#include "Pieces.h"
#include <map>
#include <string>

std::string Pieces::Draw(int piece)
{
	if(!piece) 
	{
		return "";
	}
	std::map<int, std::string> piecePicStr{
		{White,"W"},
		{Black,"B"},
		{King,"King"},
		{Queen,"Queen"},
		{Bishop,"Bishop"},
		{Knight,"Knight"},
		{Rook,"Rook"},
		{Pawn,"Pawn"}
	};

	unsigned mask;
	mask = ((1 << 3) - 1) & (piece);

	std::string pieceColor = piecePicStr[piece - mask];
	std::string pieceType = piecePicStr[mask];

	std::string picPath = "../data/" + pieceColor + "_" + pieceType;
	
	return picPath;
}