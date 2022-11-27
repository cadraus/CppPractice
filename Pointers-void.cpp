#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//void pointer
void print (void *ptr) {
    cout << ((float*)ptr) << endl;  //print the pointer address
    cout << *((float*)ptr) << endl; //print the value
}
int main (int argc, char* argv[]) {

float a = 5.678;

    print (&a); 


    //ending
    cout << "---\nPress any key to stop: " << endl;
    getchar();
    return 0;
}