

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
void startAdventure();
void left();
void right();
void befriend();
void back();
int sammy = 0;


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
	cout << "\nYou hear your stomach rumble and realize you haven't eaten in a while.";
	cout << "\nDo you eat the sandwich in your backpack, or ignore your stomach and explore?";
	cout << "\n1. Eat the sandwich" << "\n" << "2. Explore" << "\n";
	int boom;
	cin >> boom;

	//1.) eating the sandwich
	if (boom == 1) {
		cout << "\nYou take the sandwich out of your backpack and take a bite. It's delicious!";
		cout << "\nAs you go in for the second bite you hear a growl behind you.";
		cout << "\nIts a troll!";
		cout << "\nDo you take your chances and 1.) try to befriend him, 2.) Fight, 3.) Run\n";
		int choice1;
		cin >> choice1;
		//
		if (choice1 == 1) {
			cout << "You rip your sandwich in half and offer it to the troll.";
			srand(time(0));
			int chance = rand() % 2;
			if (chance == 0) {
				cout << "\nThe troll takes the sandwich and smiles at you.";
				cout << "\nHe decides he wants to join you!";
				befriend();
			}
			else {
				cout << "\nThe troll takes the sandwich and eats it.";
				cout << "\nThe troll doesnt seem to like your offering.";
				cout << "\nHe charges at you and you run.";
				cout << "\nYou see a fork in the road, do you go left or right?\n";
				cout << "1. Left" << "\n" << "2. Right" << "\n";
				int choice2;
				cin >> choice2;
				if (choice2 == 1) {
					left();
				}
				else if (choice2 == 2) {
					right();

				}
				//^troll 
			}
		}
		//2.) fight
		else if (choice1 == 2) {
			cout << "\nYou take out your sword and charge at the troll.";
			cout << "\nSadly, you underestimated the troll and he easily overpowers you.";
			cout << "\nGame Over!";
		}
		else if (choice1 == 3) {
			sammy = 1;
			cout << "\nYou turn around and run as fast as you can.";
			cout << "\nYou hear the troll chasing you.";
			cout << "\nYou see a fork in the road, do you go left or right?\n";
			cout << "1. Left" << "\n" << "2. Right" << "\n";
			int choice2;
			cin >> choice2;
			if (choice2 == 1) {
				left();
			}
			else if (choice2 == 2) {
				right();
			}

		}
	}
	//explore
	if (boom == 2) {
		cout << "\nYou pat yourself off and start to explore.";
		cout << "\nYou see a fork in the road, do you go left or right?\n";
		cout << "1. Left" << "\n" << "2. Right" << "\n";
		int choice;
		cin >> choice;
		if (choice == 1) {
			left();
		}
		else if (choice == 2) {
			right();
		}

	}
}



void right() {
	cout << "You walk down the path, the air moist, your feet slipping on the mud.\n";
	cout << "Your foot catches on something and you fall\n";
	cout << "You get up and look at what tripped you, it's a chest!\n";
	cout << "Do you open it or leave it?\n";
	cout << "1. Open" << "\n" << "2. Leave" << "\n";
	int choice;
	cin >> choice;
	if (choice == 1) {
		cout << "You try to open it, but find its locked.\n";
		cout << "You try to pick the lock.\n";
		while (true) {
			srand(time(0));
			int chance = rand() % 2;
			if (chance == 0) {
				cout << "You successfully pick the lock and open the chest.\n";
				cout << "Inside you find a key!\n";
				cout << "You take it and continue down the path\n";
				cout << "You see a door, locked, you try the key and it works!\n";
				cout << "You open the door only to be blinded by the light, you wake up in your bed.\n";
				break;
			}
			else {
				cout << "You fail to pick the lock\n";
				cout << "Do you try again to pick the lock or turn away?\n";
				cout << "1. Try again" << "\n" << "2. Turn away" << "\n";
				int choice;
				cin >> choice;
				if (choice == 1) {
					cout << "You try to pick the lock again.\n";
				}
				else if (choice == 2) {
					cout << "You turn away and go back up the path.\n";
					cout << "Youre back at the fork, do you go left or back where you came from?\n";
					cout << "1. Left" << "\n" << "2. Back" << "\n";
					int choice;
					cin >> choice;
					if (choice == 1) {
						left();
					}
					else if (choice == 2) {
						back();
					}
				}
			}

		}
	}
}


	void back() {
		cout << "You walk back up the path and see the hole in the tree.\n";
		cout << "You climb out into the forest and make your way back home.\n";
	}

	void left() {
		cout << "Left";
		cout << "You turn left.\n";
		cout << "You walk down into the cave and see a flickering light in the distance.\n";
		cout << "You walk towards it, but the closer and closer you get the warmer it gets.\n";
		cout << "You notice the walls of the cave getting almost slimy, you bump your head on the roof.\n";
		cout << "With your curiosity getting the best of you, you keep walking not realising it getting tighter.\n";
		cout << "The light seeming to not be getting closer, and you already on your hands and knees, you realise you're stuck.\n";
		cout << "And at once," << "\n" << "You're pulled into the darkness.\n";
		cout << "Game Over!";
	}


	void befriend() {
		cout << "You and the troll walk down the path together.\n";
		cout << "You see a fork in the road, do you go left or right, you ask the troll.\n";
		cout << "The troll leasds you straight and opens a door you handnt first noticed.\n";
		cout << "You walk through the door and see a light, you walk towards it.\n";
		cout << "The lights blinds you as you walk in.\n";
		cout << "When you open your eyes you see a magical kindgom.\n";
		cout << "You see the troll standing in front of you, he smiles and waves.\n";
		cout << "Over time you become the ruler of the kingdom and the troll one of your most trusted men.\n";
		cout << "You have won!\n";
		cout << "You live happily ever after in the kingdom.";
		cout << "\n";
		cout << "   _ | ~_\n";
		cout << "[_]--'--[_]\n";
		cout << "| '|""""|'|\n";
		cout << "| | /^\ | |" << "\n";
		cout << "|_|_|I|_|_|\n";
		
	}






	int main() {
		char playAgain;
		do {
			Intro();
			cout << "Do you want to play again? (y/n): ";
			cin >> playAgain;
		} while (playAgain == 'y' || playAgain == 'Y');
		return 0;
	}

