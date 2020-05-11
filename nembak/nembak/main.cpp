#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	char y;
	string nama;
	
	cout << "-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=\n";
	cout << "+                 Abdillah Raihan Azra                        +\n";
	cout << "=+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+=-+-\n";
	cout << "\n";
	cout << "\n";
	cout << "             +*********+   +*********+  +\n";
	cout << "           +************+ +************+ +\n";
	cout << "           +************+++************+ +\n";
	cout << "            +***********+++***********+ +\n";
	cout << "             +***********************+ +\n";
	cout << "              +*********************+ +\n";
	cout << "               +*******************+ +\n";
	cout << "                +*****************+ +\n";
	cout << "                 +***************+ +\n";
	cout << "                  +************+ +\n";
	cout << "                   +**********+ +\n";
	cout << "                    +********+ +\n";
	cout << "                     +******+ +\n";
	cout << "                      +****+ +\n";
	cout << "                       +**+ +\n";
	cout << "                        ++ +\n";
	cout << "\n";
	cout << "\n";
	cout << "Masukan nama kamu = ";
	getline(cin, nama);
	cout << "\n";

	cout << nama << " apakah kamu bersedia menjadi pacar saya?\n";
	cout << "[y] ya [n] enggak\n";
	cin >> y;


	if (y == 'y' || y == 'Y')	
	{
		cout << "Terimakasih sudah menerima saya, tolong chat saya dengan text <3\n";
		cout << "\n";
		cout << "\n";
		cout << "             +*********+   +*********+ -+\n";
		cout << "           +************+ +************+-+\n";
		cout << "           +************+++************+-+\n";
		cout << "            +***********+++***********+-+\n";
		cout << "             +***********************+-+\n";
		cout << "              +*********************+-+\n";
		cout << "               +*******************+-+\n";
		cout << "                +*****************+-+\n";
		cout << "                 +***************+-+\n";
		cout << "                  +************+-+\n";
		cout << "                   +**********+-+\n";
		cout << "                    +********+-+\n";
		cout << "                     +******+-+\n";
		cout << "                      +****+-+\n";
		cout << "                       +**+-+\n";
		cout << "                        ++-+\n";
		cout << "\n";
		cout << nama << " ini buat kamu <3";
		cout << "\n";
		
	}
	else if (y == 'n' || y == 'N')
	{
		cout << "Tidak mengapa kalau tidak menerima, tolong chat saya dengan text </3 \n";
	}
	else
	{
		Sleep(10000);
		exit(0);

	}
	

	cout << "Program akan closed otomatis dalam 10 detik\n";
	Sleep(10000);
	exit(0);
	cin.get();
	return 0;
}