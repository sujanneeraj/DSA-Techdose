#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findFactors(int N) {
    vector<int> factors;
    for(int i = 1; i <= sqrt(N); i++){
        if(N%i == 0) {
            factors.push_back(i);
            if(i != sqrt(N)) {
                factors.push_back(N/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;

}


int main() {
    int N = 36;

    auto factors = findFactors(N);

    for(auto &fac: factors) {
        std::cout << fac << " ";
    }
}