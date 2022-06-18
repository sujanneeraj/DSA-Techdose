#include <iostream>

using namespace std;

//O(N)
bool isPrime(int N) {
    for(int i=2; i <=N-1; i++) {
        if(N%i == 0){
            return false;
        }
    }
    return true;
}

bool Soln2(int N) {
    for(int i=2; i*i <= N; i++) {
        if(N%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N = 5;
    auto status =  Soln2(N);  //isPrime(N);
    std::cout << N << " is" << status;
}