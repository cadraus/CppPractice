#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char* argv[]) {

vector <int> numbers;

for (int i=0; i<10; i++) {
    numbers.push_back(i+100);
}

for (auto n: numbers) {
    cout << n << "\t";
}
/*
for (auto k = numbers.begin(); k != numbers.end(); k++) {
    //cout << *k << " "; //cannot print the iterator unless you dereference it with *
    //cout << *k << endl; //print the address of the iterator
    //cout << &(*k) << endl; //print the address of each value
   

} */

    return 0;
}