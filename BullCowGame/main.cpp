#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

// Entry point for our application
int main()
{
	bool playAgain = true;
	PrintIntro();
	while (playAgain) {
		PlayGame();
		playAgain = AskToPlayAgain();
	}
	
	return 0; // exit the application
}

void PlayGame()
{
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < 5; i++) {
		string Guess = GetGuess();
		// Repeat the guess back to home
		cout << "You guess was: " << Guess << endl;
		cout << endl;
	}
}


void PrintIntro() {
	// Introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuess() {
	// Get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain() {
	cout << "Play again? (Y/N): " << endl;
	string playAgain = "";
	getline(cin, playAgain);
	return playAgain[0] == 'Y' || playAgain[0] == 'y';
}
