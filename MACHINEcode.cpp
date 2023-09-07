#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string filename;
int hexnumber, i;

int memory[256]; //memory of MACHINE
int reg[16]; //register of MACHINE
int pc, ir; //program counter and instruction counter
fstream datafile;

void extractor();

int main() {

string filename, line;
int hexnumber, i;


cout << "Enter the name of your .txt file: " << endl;
//cin >> //
filename = "machinecode1.txt";
datafile.open(filename.c_str(), fstream::in);

if (!datafile.is_open()) {
    cout << "Error opening the file." << endl;
    return 1; // Return an error code
}
else {
    cout << "File opened successfully!" << endl;
}
filename.extractor();
}
//-----FUNCTIONS-----//

void extractor () {
datafile.clear();
datafile.seekg(0);
int number = 0;
while (getline (datafile, line)) {
    cout << number << ":" << line << endl;
    number++;
}
i = 0;  
} 

//while (datafile >> hex >> hexnumber) { //hex to dec.
//        memory[i] = hexnumber;
//        cout << "memory[" << i << "] " << memory[i] << endl;
//      i++;
//} 