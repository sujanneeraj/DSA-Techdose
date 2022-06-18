#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


vector<int> primeFactors(int N){
    vector<int> result;

    for(int i = 2; i<=sqrt(N); i++) {
        
        while(N%i == 0) {
            result.push_back(i);
            N /=i;
        }
    }

    if(N > 1) {
        result.push_back(N);
    }

    return result;

}


int main(){

 int N = 36;
 auto result = primeFactors(N);

 for(auto &res: result) {
     cout << res << " ";
 }

}