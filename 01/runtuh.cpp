// AC
#include <iostream>
#include <vector>
using namespace std;

vector <vector <char>> p(25, vector <char> (25, '0'));
int cnt = 0;
int R, C;

bool remove(){
    bool waw = false;
    for (int i = 0; i < R; i++){
        bool found = true;
        for (int j = 0; j < C; j++){
            if(p[i][j] != '1'){
                found = false;
                break;
            }
        }
        if (found){
            waw = true;
            cnt = i;
            for (int j = 0; j < C; j++){
                p[i][j] = '0';
            }
        }
    }

    return waw;
}

int main(){
    cin >> R >> C;
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cin >> p[i][j];
        }
    }

    // while(remove()){
        
    // }

    while(remove()){
        for (int i = 0; i < C; i++){
            int one = 0;
            for (int j = 0; j < cnt; j++){
                if (p[j][i] == '1'){
                    one++;
                    p[j][i] = '0';
                }
            }
    
            int last = cnt;
            for (int j = cnt; j < R; j++){
                if (p[j][i] == '0'){
                    last = j;
                } else {
                    break;
                }
            }
            while(one--){
                p[last][i] = '1';
                last--;
            }
            for (int j = last; j >= 0; j--){
                p[j][i] = '0';
            }
        }
    }

    // cout << "\n";

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cout << p[i][j];
        }
        cout << "\n";
    }
}