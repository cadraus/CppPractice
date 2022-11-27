#include <iostream>
#include <memory>
using namespace std;
/*
smart pointers are the wrappers around raw pointers and will allocate/deallocate memory automatically. 
unique pointer - new/delete will happen automatically, delete as soon as coming outside of the scope.
                Has only one owner and cannot be passed to another owner by e.g.:
                unique_ptr <int> unPtr2 = move(unPtr1);
shared pointer - can have many owners. Will keep object alive until the last shared pointer is alive.
weak pointer - not reference-counted. models temporary ownership: when an object needs to be accessed 
              only if it exists, and it may be deleted at any time by someone else.
              Will not keep object alive after destruction of last shared pointer.
*/
class MyClass {
  
  public:
    MyClass () {
        cout << "Constructor invoked" << endl;
    }
    ~MyClass () {
        cout << "Destructor invoked" << endl;
    }
};

int main (int argc, char* argv[]) {
  
  //raw pointers
  int* rawI = new int(25);
  float* rawF = new float(75.25);
  int* rawA = new int[12];
  delete rawI;
  delete rawF;
  delete rawA;
 /* 
  { //unique pointer. The {...} context provided to invoke the destructor after }.
    unique_ptr <MyClass> unPtr1 = make_unique <MyClass> ();  //assign a unique pointer unPtr1 to class
  } */

  { //shared pointer
    shared_ptr <MyClass> shPtr1 = make_shared <MyClass>();
    cout << "Shared count: " << shPtr1.use_count() << endl;  //1
    shared_ptr <MyClass> shPtr2 = shPtr1;
    cout << "Shared count: " << shPtr1.use_count() << endl;  //2
  } 
  
/*
    weak_ptr <int> wePtr1;
    {
      shared_ptr <int> shPtrX = make_shared <int> (25);
      wePtr1 = shPtrX;
    }
  */  
    //ending
    cout << "\n---\nPress any key to stop: " << endl;
    getchar();
    return 0;
}