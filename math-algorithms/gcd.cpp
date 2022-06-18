#include <iostream>

using namespace std;


int gcd(int a, int b){
    if(a==0){
        return b;
    }
    return gcd(b%a, a);
}

int main(){
int result = gcd(10,15);

std::cout << "gcd of 10 and 15 is " << result;
}