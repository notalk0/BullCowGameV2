/*
The game logic (no view code or direct user interaction)
*/
#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount {
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EGuessStatus {
	Invalid_Status,
	OK,
	Not_Isogram,
	Wrong_Length,
	Not_Lowercase
};

class FBullCowGame {
public:
	FBullCowGame(); // constructor
	int32 GetHiddenWordLength() const;
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	void Reset(); 
	bool IsGameWon() const;
	EGuessStatus CheckGuessValidity(FString) const; 
	FBullCowCount SubmitValidGuess(FString);
	

private:
	int32 MyCurrentTry;
	FString MyHiddenWord;
	bool bGameIsWon;

	bool IsIsogram(FString) const;
	bool IsLowercase(FString) const;
};