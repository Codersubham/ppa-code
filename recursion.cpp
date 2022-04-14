#include "bits/stdc++.h"
using namespace std;

int sum_digits(int n) {
    if(n ==0) {
        return 0;
    }
    int last_digit = n%10;
    int remaining = n/10;
    cout<< remaining <<" " << last_digit<<"\n";
    return sum_digits(remaining) + last_digit;

}

int main(){
    cout<< sum_digits(23156978);
}