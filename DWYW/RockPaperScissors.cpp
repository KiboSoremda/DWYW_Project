#include <iostream> // Input/output stream 
#include <cstdlib> //For 'rand'
#include <string>

using namespace std;


enum choice {rock, paper, scissors};

string choices[] = {"rock", "paper", "scissors"};
void compare(choice p1, choice com);


string prompt;
/*
int p1_Score = 0; //Your score
int com_Score = 0; //Opponent's score
*/

int main() {
	cout << "Type 'r' for rock, 'p' for paper, or 's' for scissors." << endl;
	cin >> prompt;
	if(prompt == "r") {
		compare(rock, choice(rand() % scissors + 1));
	}
	else if(prompt == "s") {
		compare(scissors, choice(rand() % scissors + 1));
	}
	else if(prompt == "p") {
		compare(paper, choice(rand() % scissors + 1));
	}
	return 0;
}

//Compares your choice to opponent's choice.
void compare(choice p1, choice com) {
	if ((p1 == rock && com == scissors) 
		|| (p1 == paper && com == rock)
		|| (p1 == scissors && com == paper)) {
			cout << "You chose: " << choices[p1] << endl;
			cout << "Opponent chose: " << choices[com] << endl;
			cout << "You win! :D" << endl;
	} 
	else if ((com == rock && p1 == scissors) 
		|| (com == paper && p1 == rock)
		|| (com == scissors && p1 == paper)) {
			cout << "You chose: " << choices[p1] << endl;
			cout << "Opponent chose: " << choices[com] << endl;
			cout << "You lose! :(" << endl;
	} 
	else if ((com == rock && p1 == rock) 
		|| (com == paper && p1 == paper)
		|| (com == scissors && p1 == scissors)) {
			cout << "You chose: " << choices[p1] << endl;
			cout << "Opponent chose: " << choices[com] << endl;
			cout << "It's a draw. :/" << endl;
	} 
}
