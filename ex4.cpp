#include <iostream>
using namespace std;

long Factorial(int num){
    unsigned long f = 1;
    for(int j=1; j <= num; j++){
        f = f*(j);
    }
 return f;
}

int main(){
for(int i=0; i<10; i++){
    long fact = Factorial(i+1);
    cout << "Factorial of " << i+1 << " is " << fact << "\n";
}
return 0;
}