#pragma once
#include <string>
#include <tuple>

class Player
{
private:
	std::string playerName;
	std::string playerSurname;
	int playerIdentifier;
	int playerScore;
	int playerWins;
	int playerLosses;

public:

	Player() {};

	Player(std::string name, std::string surname)
	{
		this->playerName = name;
		this->playerSurname = surname;
		this->playerIdentifier = 0; //sa primeasca un indentifier unic (random hash)
		this->playerScore = 0;
		this->playerWins = 0;
		this->playerLosses = 0;
	}

	friend std::istream& operator>>(std::istream& read, Player& player);
	friend std::ostream& operator<<(std::ostream& print, Player player);

	std::string GetPlayerName();
	std::string GetPlayerSurname();
	std::string GetPlayerScore();
	std::string GetPlyerWins();
	std::string GetPlayerLosses();

	void SetPlayerName(std::string newName);
	void SetPlayerSurname(std::string newSurname);
	void SetPlayerIdentifier(int id);
	void SetPlayerScore(int updateScore);
	void SetPlayerWins(int newWin);
	void SetPlayerLosses(int newLoss);

};

