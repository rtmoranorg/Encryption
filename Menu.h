/*
Daniel Gaska
Ryan Moran
Elisabeth Brooks
Anthony Scalise

C++ Encryption/Decryption Project
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Menu//creating the class
{
public://public member function prototypes

	//creating protoype functions
	Menu();
	void mainMenu();
	void encryptMenu();
	void decryptMenu();
	string subEncrypt(string, int);
	string caesarEncrypt(string, int);
	void enSubMenu();
	void enCaeMenu();
	string subDecrypt(string, int);
	string caesarDecrypt(string, int);
	void bruteforce(string);
	void deSubMenu();
	void deCaeMenu();
	void bfMenu();
	void superMenu();

private://private data members
	int mainChoice{ 0 };
	int encryptChoice{ 0 };
	int decryptChoice{ 0 };
	int enSubChoice{ 0 };
	int enCaeChoice{ 0 };
	int deSubChoice{ 0 };
	int deCaeChoice{ 0 };
	int bfChoice{ 0 };
	int superChoice{ 0 };
};//end class Menu