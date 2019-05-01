#include <iostream>
#include <iomanip>
#include <string>
#include "Menu.h"
using namespace std;

int main() {

	string cleartext, ciphertext;

	Menu myMenu;
	myMenu.mainMenu();
	cout << "Enter Clear Text" << endl;
	getline(cin, cleartext);
	cout << endl;
	cout << "Caesar" << endl;
	cout << "Encrypt: " << myMenu.caesarEncrypt(cleartext,3) << endl;
	cout << "Decrypt: " << myMenu.caesarDecrypt(myMenu.caesarEncrypt(cleartext, 3),3) << endl;
	cout << endl;
	cout << "Substitution" << endl;
	cout << "Encrypt: " << myMenu.subEncrypt(cleartext, 0) << endl;
	cout << "Decrypt: " << myMenu.subDecrypt(myMenu.subEncrypt(cleartext, 0),0) << endl;
	cout << endl;
	cout << "Bruteforce" << endl;
	// cout << subEncrypt("triple zulu one two three") << endl;
	// cout << subDecrypt(subEncrypt(cleartext)) << endl;
	myMenu.bruteforce(myMenu.caesarEncrypt(cleartext, 3));

	system("pause");
}