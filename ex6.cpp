#include <iostream>
using namespace std;

int y;
int *x;

int main(){
    y=13;
    x=&y;
    cout << *x <<"\n";
    y=67;
    cout << *x <<"\n";
}