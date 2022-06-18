#include <iostream>


long long exponentiation(int a, int b){
    long long res = 1;
    while(b>0){
        if(b%2 == 1) {
            res *=a;
        }
        a = a*a;
        b/=2;
    }
    return res;
}

int main() {
    auto result = exponentiation(2,3);
    std::cout << result;
}