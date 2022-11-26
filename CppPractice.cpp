#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char* argv[]) {

vector <int> numbers;

for (int i=0; i<10; i++) {
    numbers.push_back(i);
}

for (int k:numbers) {
    cout << numbers[k] << " ";
}

    return 0;
}