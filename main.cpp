#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    ifstream input_file("./input.txt");
    string line;

    long sum = 0;
    while (getline(input_file, line)) {
        int num = stoi(line);
        sum += num * num;
    }

    cout << "The sum is " << sum << endl;

    return 0;
}