#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool Soln2(int N) {
    for(int i=2; i*i <= N; i++) {
        if(N%i == 0) {
            return false;
        }
    }
    return true;
}


std::vector<int> primeNumbers(int N) {
    std::vector<int> result;
    for(int i = 2; i<=N; i++) {
        bool isPrime = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i%j==0){
                isPrime = false;
            }
        }

        if(isPrime == true) {
            result.push_back(i);
        }
    }

    return result;

}

int main() {
 
 int N = 15;
 auto result = primeNumbers(N);

 for(auto& res: result) {
     cout << res << " ";
 }

}