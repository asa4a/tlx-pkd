#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool Compare(string a, string b){
    if (a.length() < b.length()){
        return true;
    } else if (a.length() == b.length() && lexicographical_compare(a.begin(),a.end(),b.begin(),b.end())){
        return true;
    }
    return false;
}

int main(){
    int N; cin >> N;
    vector <string> kata(N);

    for (int i = 0; i < N; i++){
        cin >> kata[i];
    }
    
    sort(kata.begin(),kata.end(), Compare);

    for (int i = 0; i < N; i++) cout << kata[i] << "\n";
}