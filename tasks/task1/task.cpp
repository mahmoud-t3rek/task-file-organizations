#include <iostream> 
#include <fstream> 
#include <string> 
#include <conio.h> 
using namespace std;

void Writefile(const string& filepath) {
	string data;
	ofstream output(filepath);
	if (!output.is_open()) {
		cout << "file is wrong " << endl;
	}
	cout << "enter your names: " << endl;
	while (1) {
		getline(cin, data);
		if (data == "q") {
			break;
		}
		output << data << endl;
	}
	output.close();
	cout << "written succefully" << endl;
}
void readfile(const string& filepath) {
	string line;
	ifstream inputfile(filepath);
	if (!inputfile.is_open()) {
		cout << "error" << endl;
	}
	while (getline(inputfile, line)) {
		cout << line << endl;
	}
	inputfile.close();
}
int main() {
	string filename = "mahmoud.txt";
	readfile(filename);
}
