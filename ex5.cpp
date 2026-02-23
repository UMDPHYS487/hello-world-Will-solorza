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
    int N=0;
cout << "Please enter an interger value: ";
cin >> N;
cout << "The value you entered is " << N << " and its factorial is "
<< Factorial(N) << "\n";
return 0;
}
