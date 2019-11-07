#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "Expected a filename" << endl;
        exit(2);
    }
    ifstream file;
    file.open(argv[1]);
}