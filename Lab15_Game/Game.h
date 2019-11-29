#pragma once
class Game
{
private:
	char field[9];
	int player;
	int lastMove;
	
public:
	Game();
	~Game();

	void again();
	void move();
	void cancel();
	bool checkEnd();
	void print();
	void checkMove();
	void queue();

};

