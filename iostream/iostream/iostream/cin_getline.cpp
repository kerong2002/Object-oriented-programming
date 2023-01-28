#include <iostream>
#include <bitset> 
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	/*
	char f[4];
	char s[4];
	int n;
	cin.getline(f, 4, '\n');
	cin.getline(s, 4, '\n');
	cout << f << endl;
	cout << s << endl;
	*/
	
	//cout.unsetf(ios::dec);
	//cout.setf(ios::left);
	//cout.width(5);
	//cout << 621;

	/*
	int a = 17;
	cout << oct << a << endl;
	cout << dec << a << endl;
	cout << hex << a << endl;
	cout << bitset<32>(a) << endl;
	*/

	//ofstream outFile("out.txt");
	//outFile << 3;
	
	/*
	fstream myFile;
	myFile.open("test.dat", ios::in);
	if (myFile.good()) {
		cout << "File opened!" << endl;
	}
	else {
		cout << "Cannot open file!" << endl;
	}
	int n;
	myFile >> n;
	cout << n << endl;
	*/
	ifstream in("data.txt", ios::in);
	if (!in)
		cout << "Cannot open file!" << endl;
	int t, sum = 100;
	while (in >> t) {
		sum += t;
	}
	cout << sum;
	return 0;
}