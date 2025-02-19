// Choose Your Adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void startAdventure();


void Intro()
{
	cout << "You see a mysterious hole in a tree while exploring!";



	cout << R"(       
       _-_    
    /~~   ~~\  
 /~~         ~~\ 
{               } 
 \  _-     -_  /  
   ~  \\ //  ~   
_- -   | | _- _  
  _ -  |O|   -_  
      // \\     
    )";

	cout << "You walk over and peak inside." << "\n" << "You see a light far inside, do you let your curiousity take the best of you or do you walk away?"
		<< "\n" << "1. Go inside" << "\n" << "2. Walk away" << "\n";
	int choice;
	cin >> choice;
	if (choice == 1) {
		startAdventure();
	}else if (choice == 2) {
		cout << "As you go to take your head out of the hole you feel a push from behind and fall in.\n";
		startAdventure();
	}
	else {
		cout << "Invalid choice, please try again.";
		Intro();
	}

}

void startAdventure() {
	cout << "You scratch your knee as you tumble down.";
	cout << "You hear your stomach rumble and realize you haven't eaten in a while.";
	cout << "Do you eat the sandwich in your backpack, or ignore your stomach and explore?";
	cout << "1. Eat the sandwich" << "\n" << "2. Explore" << "\n";
	int choice;
	cin >> choice;
}












int main() {
	Intro();
	return 0;
}
