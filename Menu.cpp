#include "Menu.h"//importing header file

//defining the constructor
Menu::Menu() {}

void Menu::mainMenu(int choice1)
{
	cout << endl;
	cout << "************************************************" << endl;
	cout << "* Welcome to the Encryption/Decryption Machine *" << endl;
	cout << "*                                              *" << endl;
	cout << "* Please select an option from the menu below  *" << endl;
	cout << "************************************************" << endl;
	cout << endl;

	cout << "1-> Encrypt text" << endl;
	cout << "2-> Decrypt text" << endl;
	cout << "3-> Exit" << endl;
	cin >> choice1;
	mainChoice = choice1;
}
void Menu::encryptMenu(int choice2)
{
	cout << endl;
	cout << "**********************************************************" << endl;
	cout << "*                      Encryption                        *" << endl;
	cout << "*                                                        *" << endl;
	cout << "* Please choose an encryption method from the menu below *" << endl;
	cout << "**********************************************************" << endl;
	cout << endl;

	cout << "1-> Substitution Cipher" << endl;
	cout << "2-> Transposition Cipher" << endl;
	cout << "3-> Return to Main Menu" << endl;
	cin >> choice2;
	encryptChoice = choice2;
}
void Menu::decryptMenu(int choice3)
{
	cout << endl;
	cout << "**********************************************************" << endl;
	cout << "*                      Decryption                        *" << endl;
	cout << "*                                                        *" << endl;
	cout << "* Please choose a decryption method from the menu below  *" << endl;
	cout << "**********************************************************" << endl;
	cout << endl;

	cout << "1-> Substitution Cipher" << endl;
	cout << "2-> Transposition Cipher" << endl;
	cout << "3-> I don't know which decryption method was used" << endl;
	cout << "4-> Return to Main Menu" << endl;
	cin >> choice3;
	decryptChoice = choice3;
}
string Menu::subEncrypt(string cleartext, int shift = 0) {

	string alpha = "kfleyinjxrawdchvumtqzpsgob";
	string subalpha = "moswlfxtecbjnypzkgqudhvria";
	string ciphertext;
	int subindex;

	for (int i{ 0 }; i <= cleartext.length(); i++) {
		for (int j{ 0 }; j < 26; j++) {
			if (cleartext[i] == ' ') {
				ciphertext += ' ';
				break;
			}
			if (cleartext[i] == alpha[j]) {
				subindex = (j + shift) % 26;
				ciphertext += subalpha[subindex];
				break;
			}
		}
	}
	return ciphertext;
}
string Menu::caesarEncrypt(string cleartext, int shift = 1) {

	string alpha = "abcdefghijklmnopqrstuvwxyz";
	string ciphertext;
	int caesarindex;

	for (int i{ 0 }; i <= cleartext.length(); i++) {
		for (int j{ 0 }; j < 26; j++) {
			if (cleartext[i] == ' ') {
				ciphertext += ' ';
				break;
			}
			if (cleartext[i] == alpha[j]) {
				caesarindex = (j + shift) % 26;
				ciphertext += alpha[caesarindex];
				break;
			}
		}
	}
	return ciphertext;
}
void Menu::enSubMenu(int choice4)
{
	cout << endl;
	cout << "*************************************" << endl;
	cout << "*            Encryption             *" << endl;
	cout << "*                                   *" << endl;
	cout << "*        Substitution Cipher        *" << endl;
	cout << "* Please select from the menu below *" << endl;
	cout << "*************************************" << endl;
	cout << endl;

	cout << "1-> Enter the text to be encrypted" << endl;
	cout << "2-> Return to the Encryption Menu" << endl;
	cin >> choice4;
	enSubChoice = choice4;
}
void Menu::enCaeMenu(int choice5)
{
	cout << endl;
	cout << "*************************************" << endl;
	cout << "*            Encryption             *" << endl;
	cout << "*                                   *" << endl;
	cout << "*       Transposition Cipher        *" << endl;
	cout << "* Please select from the menu below *" << endl;
	cout << "*************************************" << endl;
	cout << endl;

	cout << "1-> Enter the text to be encrypted" << endl;
	cout << "2-> Return to the Encryption Menu" << endl;
	cin >> choice5;
	enCaeChoice = choice5;
}
string Menu::subDecrypt(string cleartext, int shift = 0) {

	string alpha = "kfleyinjxrawdchvumtqzpsgob";
	string subalpha = "moswlfxtecbjnypzkgqudhvria";
	string ciphertext;
	int subindex;

	for (int i{ 0 }; i <= cleartext.length(); i++) {
		for (int j{ 0 }; j < 26; j++) {
			if (cleartext[i] == ' ') {
				ciphertext += ' ';
				break;
			}
			if (cleartext[i] == subalpha[j]) {
				subindex = (j + shift) % 26;
				ciphertext += alpha[subindex];
				break;
			}
		}
	}
	return ciphertext;
}
string Menu::caesarDecrypt(string cleartext, int shift = 1) {

	string alpha = "abcdefghijklmnopqrstuvwxyz";
	string ciphertext;
	int caesarindex;

	for (int i{ 0 }; i <= cleartext.length(); i++) {
		for (int j{ 0 }; j < 26; j++) {
			if (cleartext[i] == ' ') {
				ciphertext += ' ';
				break;
			}
			if (cleartext[i] == alpha[j]) {
				caesarindex = (j - shift) % 26;
				ciphertext += alpha[caesarindex];
				break;
			}
		}
	}
	return ciphertext;
}
void Menu::bruteforce(string ciphertext) {

	cout << left << setw(35) << "Caesar Brute Force" << "Substitution Brute Force" << endl;
	for (int shift{ 1 }; shift <= 26; shift++) {
		cout << left << setw(35) << caesarEncrypt(ciphertext, shift);
		cout << subDecrypt(ciphertext, shift) << endl;
	}
}
void Menu::deSubMenu(int choice6)
{
	cout << endl;
	cout << "*************************************" << endl;
	cout << "*            Decryption             *" << endl;
	cout << "*                                   *" << endl;
	cout << "*        Substitution Cipher        *" << endl;
	cout << "* Please select from the menu below *" << endl;
	cout << "*************************************" << endl;
	cout << endl;

	cout << "1-> Enter the text to be decrypted" << endl;
	cout << "2-> Return to the Decryption Menu" << endl;
	cin >> choice6;
	deSubChoice = choice6;
}
void Menu::deCaeMenu(int choice7)
{
	cout << endl;
	cout << "*************************************" << endl;
	cout << "*            Decryption             *" << endl;
	cout << "*                                   *" << endl;
	cout << "*       Transposition Cipher        *" << endl;
	cout << "* Please select from the menu below *" << endl;
	cout << "*************************************" << endl;
	cout << endl;

	cout << "1-> Enter the text to be decrypted" << endl;
	cout << "2-> Return to the decryption Menu" << endl;
	cin >> choice7;
	deCaeChoice = choice7;
}
void Menu::bfMenu(int choice8)
{
	cout << endl;
	cout << "*************************************" << endl;
	cout << "*            Decryption             *" << endl;
	cout << "*                                   *" << endl;
	cout << "*          Unknown Cipher           *" << endl;
	cout << "* Please select from the menu below *" << endl;
	cout << "*************************************" << endl;
	cout << endl;

	cout << "1-> Attempt to decrypt using a bruteforce method" << endl;
	cout << "2-> Return to the decryption Menu" << endl;
	cin >> choice8;
	bfChoice = choice8;
}