#include <iostream>

int main(){
    unsigned long num = 1;
    for(int i=0; i < 10; i++){
        num = num*(i+1);
        std::cout << "Factorial of " << i+1 << " is " << num <<"\n";
    }

    return 0;
}

