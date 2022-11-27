#include <iostream>
#include <string>
using namespace std;


template <typename T>
void Print (T value)
{
    cout << value << endl;
}


int main (int argc, char* argv[]) {

Print <int> (5);
Print <string> ("Some text as string");
Print <float> (3.141592);

//ending to hold the terminal
cout << "---\nPress any key to stop: " << endl;
getchar();
return 0;
}