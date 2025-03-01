#include <algorithm>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string poi; cin >> poi;
    int N = poi.length();
    int sz = (int) ceil(sqrt(N));
    int cur = 0;
    while (poi.length() < sz*sz){
        poi += '.';
    }
    for (int i = 0; i < sz; i++){
        string uwu = poi.substr(0,sz);
        if (i % 2 == 1){
            reverse(uwu.begin(),uwu.end());
        }
        cout << uwu << "\n";
        poi = poi.substr(sz,poi.length()-sz);
    }
}