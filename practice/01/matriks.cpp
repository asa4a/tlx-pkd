// AC

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> refhor(const vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> new_mat = mat;

    for (int i = 0; i < n / 2; i++) {
        swap(new_mat[i], new_mat[n - 1 - i]);
    }

    return new_mat;
}

vector<vector<int>> refver(const vector<vector<int>>& mat){
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> new_mat = mat;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m/2; j++){
            swap(new_mat[i][j], new_mat[i][m-1-j]);
        }
    }

    return new_mat;
}

vector<vector<int>> rot90(const vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> new_mat(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            new_mat[j][n - 1 - i] = mat[i][j];
        }
    }
    return new_mat;
}

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<vector<int>> vect(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vect[i][j];
        }
    }

    string op;
    while (x--) {
        cin >> op;
        if (op == "|") vect = refver(vect);
        else if (op == "_") vect = refhor(vect);
        else {
            for (int i = 0; i < stoi(op)/90; i++){
                vect = rot90(vect);
            }
        }
    }

    for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[0].size(); j++) {
            cout << vect[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
