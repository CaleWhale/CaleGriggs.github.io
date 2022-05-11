#include "ofApp.h"
#include "../Board.h"
#include "../Pieces.h"
#include <vector>



Board board;
Pieces pieces;
const string startFEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";



//--------------------------------------------------------------
void ofApp::setup(){
	board.BoardLogic(startFEN);
	BKing.load("../data/Black_King.png");
	BQueen.load("../data/Black_Queen.png");
	BKnight.load("../data/Black_Knight.png");
	BBishop.load("../data/Black_Bishop.png");
	BRook.load("../data/Black_Rook.png");
	BPawn.load("../data/Black_Pawn.png");
	WKing.load("../data/White_King.png");
	WQueen.load("../data/White_Queen.png");
	WKnight.load("../data/White_Knight.png");
	WBishop.load("../data/White_Bishop.png");
	WRook.load("../data/White_Rook.png");
	WPawn.load("../data/White_Pawn.png");
	BlackPieces = {
		{pieces.King, BKing},
		{pieces.Queen, BQueen },
		{pieces.Knight, BKnight },
		{pieces.Bishop, BBishop },
		{pieces.Rook, BRook},
		{pieces.Pawn, BPawn}
	};
	WhitePieces = {
		{pieces.King, WKing},
		{pieces.Queen, WQueen },
		{pieces.Knight, WKnight },
		{pieces.Bishop, WBishop },
		{pieces.Rook, WRook},
		{pieces.Pawn, WPawn}
	};
	piecePics = {BlackPieces,WhitePieces};
	click = -1;
}

//--------------------------------------------------------------
void ofApp::update(){
	board.BoardLogic("");

}

//--------------------------------------------------------------
void ofApp::draw(){
	

	// ---- chess board graphic-------
	board.Draw();

	int file = 0, rank = 0;
	for (int i = 0; i < size(board.squares); i++)
	{
		unsigned mask;
		mask = ((1 << 3) - 1) & (board.squares[i]);
		if (!board.squares[i]) 
		{
			
		}
		else if (board.squares[i] - mask == pieces.Black) 
		{
			piecePics[0][mask].draw(file*100, rank*100, 100, 100);
		}
		else if (board.squares[i] - mask == pieces.White)
		{
			piecePics[1][mask].draw(file*100, rank*100, 100, 100);
		}
		file++;
		if (file == 8)
		{
			rank++;
			file = 0;
		}

	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	x = ( x - (x % 100)) / 100;
	y = (y - (y % 100)) / 100;

	if (click == -1) 
	{
		click = x + (y * 8);
		moveFrom = x + (y * 8);
	}
	else
	{
		click = x + (y * 8);
		board.squares[click] = board.squares[moveFrom];
		board.squares[moveFrom] = 0;
		moveTo = x + (y * 8);
		click = -1;
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
