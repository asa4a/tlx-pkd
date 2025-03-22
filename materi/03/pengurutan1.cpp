#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#define ll long long int
#define db double
using namespace std;

int main(){
    int N; cin >> N;
    vector <db> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    // for (int i = 0; i < N; i++){
    //     int minID = i;
    //     for (int j = i+1; j < N; j++){
    //         if (A[j] < A[minID]) minID = j;
    //     }

    //     swap(A[i], A[minID]);
    // }
    
    sort(A.begin(), A.end());

    if (N&0){
        cout << fixed << setprecision(1) << db(A[N/2]);
        return 0;
    } else {
        cout << fixed << setprecision(1) << db((A[(N-1)/2] + A[N/2])/2.0);
    }
}