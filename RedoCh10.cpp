#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int countVowels(char *);
int countConsonants(char *);

int main()
{
	char userReply;
	bool exitRequested = false;
	const int SIZE = 50;
	char userString[SIZE];

	//repeats the program until user selects E option
	do {
		cout << "\nHello user! Enter a string value here : \n";
		cin.getline(userString, SIZE);

		cout << "\nOptions : \n";
		cout << "\nA - Count the number of vowels"
			<< "\nB - Count the number of consonants"
			<< "\nC - Count the vowels and consonants"
			<< "\nD - Enter another string"
			<< "\nE - End program" << endl;
		char choice;
		cin >> choice;
		choice = toupper(choice);



		switch (choice) {
		case 'A':
			int vowels;
			vowels = countVowels(userString);
			cout << "The number of vowels is : " << vowels << endl;
			break;

		case 'B':
			int consonants;
			consonants = countConsonants(userString);
			cout << "The number of consonants is : " << consonants << endl;
			break;

		case 'C':
			int consonants2;
			int vowels2;
			int both;
			vowels2 = countVowels(userString);
			consonants2 = countConsonants(userString);
			both = consonants2 + vowels2;
			cout << "The number of consonants and vowels is : " << both << endl;
			break;

		case 'D':
			cout << "Enter the new string here : ";
			cin.getline(userString, SIZE);
			break;

		//select E option to terminate program
		case 'E':
			cout << "\nGoodbye user!" << endl;
			exitRequested = true;
			exit(0);
		default:
			cout << "Invalid response.";
		}
		std::getchar();

	} while (exitRequested == false);
	system("pause");
	return 0;
}

int countVowels(char *strPtr) {
	int count = 0;
	while (*strPtr != '\0') {
		if (*strPtr == 'a' || *strPtr == 'e' || *strPtr == 'i' || *strPtr == 'o' || *strPtr == 'u') {
			count++;
		}
		strPtr++;
	}
	return count;
}

int countConsonants(char *strPtr) {
	int count = 0;
	while (*strPtr != '\0') {
		if (*strPtr == 'b' || *strPtr == 'c' || *strPtr == 'd' || *strPtr == 'f' || *strPtr == 'g' || *strPtr == 'h' || *strPtr == 'j' || *strPtr == 'k' || *strPtr == 'l' || *strPtr == 'm' || *strPtr == 'n' || *strPtr == 'p' || *strPtr == 'q' || *strPtr == 'r' || *strPtr == 's' || *strPtr == 't' || *strPtr == 'v' || *strPtr == 'w' || *strPtr == 'x' || *strPtr == 'y' || *strPtr == 'z') {
			count++;
		}
		strPtr++;
	}
	return count;
}
