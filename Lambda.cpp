#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (int argc, char* argv[]) {
/*
struct {
    void operator()(int x){
        cout << x << endl;
    }
}something;

[](int x){
    if (x%2 == 0) 
        cout << x << " is even\t";
    else 
        cout << x << " is odd\t";
}; */

//[cc](p){fd};
int d = 3, e = 11;

vector <int> v {2, 3, 7, 14, 23};

for_each (v.begin(), v.end(), [=](int x){
    if (x % d == 0) 
        cout << x << " is divisible by " << d << "\t";
    else 
        cout << x << " not divisable by " << d << "\t";
    cout << "(e = " << e << ")\n";
}
);


//ending
cout << "Press any key to stop: " << endl;

getchar();

    return 0;
}