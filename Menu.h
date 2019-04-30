//Daniel Gaska
//3.15
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Menu//creating the class
{
public://public member function prototypes

	//creating protoype functions
	Menu();
	void mainMenu(int);
	void encryptMenu(int);
	void decryptMenu(int);
	string subEncrypt(string, int);
	string caesarEncrypt(string, int);
	void enSubMenu(int);
	void enCaeMenu(int);
	string subDecrypt(string, int);
	string caesarDecrypt(string, int);
	void bruteforce(string);
	void deSubMenu(int);
	void deCaeMenu(int);
	void bfMenu(int);

private://private data members
	int mainChoice{ 0 };
	int encryptChoice{ 0 };
	int decryptChoice{ 0 };
	int enSubChoice{ 0 };
	int enCaeChoice{ 0 };
	int deSubChoice{ 0 };
	int deCaeChoice{ 0 };
	int bfChoice{ 0 };
};//end class Menu