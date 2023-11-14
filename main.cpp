#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    ifstream input_file("./input.txt");
    string line;

    long sum = 0;
    while (getline(input_file, line)) {  // Read input file
        int num = stoi(line);            // Convert line to int
        sum += num * num;                // Square number, add to sum
    }

    cout << "The sum is " << sum << endl;

    return 0;
}