#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMin (int numbers[], int size) {
    int min = numbers[0];

    for (int i=1; i < size; i++) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;

}

int main (int argc, char* argv[]) {

    int n = 5;
    cout << &n << endl;

    int* ptr = &n;
    cout << ptr << endl;    //pointer to memory
    cout << *ptr << endl;   //dereferenced pointer to value

    //assign new value via pointer
    *ptr = 10;
    cout << n << endl;


    //ending
    cout << "---\nPress any key to stop: " << endl;
    getchar();
    return 0;
}