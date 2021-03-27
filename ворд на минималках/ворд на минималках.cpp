#include <iostream>
#include <string>

using namespace std;

class Texts {
private:
	int amount;
	string text[10] = {};
public:
	Texts() {
		amount = 0;
	}
	void setting() {
		printf("\nEnter the text you want to see: ");
		cin >> text[amount];
		amount++;
	}
	void print() {
		printf("\nYour text:\n");
		for (int i = 0; i < amount; i++) {	
			cout << text[i] << ' ';
		}
	}
};

	int main()
	{
		int button;
		Texts action = Texts();
		printf("\nType 1 to print the word of the text, 2 to print the whole text or any other number to quit the programme(after every word): ");
		do {
			printf("\nEnter a command: ");
			scanf_s("%d", &button); 
			if (button == 1) {
				action.setting();
			}
			else if (button == 2) {
				action.print();
			}
			else {
				printf("\nBye.");
				return 0;
			}
		} while (true);
	}