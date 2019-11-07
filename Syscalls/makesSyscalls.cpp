#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "Expected a filename" << endl;
        exit(2);
    }
    ifstream file;
    file.open(argv[1]);
    if (!file.is_open()) {
        cout << "File not opened." << endl;
        exit(2);
    }
    string thisLine;
    while(getline(file, thisLine)) {
        cout << uppercase << thisLine << endl;
    }
    return 0;
}