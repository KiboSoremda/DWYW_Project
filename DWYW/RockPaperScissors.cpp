#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


enum choice {rock, paper, scissors};
string choices[] = {"rock", "paper", "scissors"};
void compare(choice p1, choice com);

string prompt;


int main() {

	
	cout << "Type 'r' for rock, 'p' for paper, or 's' for scissors." << endl;
	cin >> prompt;
	if(prompt == "r") {
		compare(rock, choice(rand() % scissors));
	}
	else if(prompt == "s") {
		compare(scissors, choice(rand() % scissors));
	}
	else if(prompt == "p") {
		compare(paper, choice(rand() % scissors));
	}
	return 0;
}

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
