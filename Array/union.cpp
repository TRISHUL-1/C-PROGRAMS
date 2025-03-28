#include<iostream>
#include<vector>
using namespace std;

vector<int> Union(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    vector<int> unionArr;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } 
        else {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    int n1, n2, n;
    cin >> n1 >> n2;
    vector<int> a1, a2, a;

    for (int i = 0; i < n1; i++) {
        cin >> n;
        a1.push_back(n);
    }

    for (int i = 0; i < n2; i++) {
        cin >> n;
        a2.push_back(n);
    }

    a = Union(a1, a2);

    for (auto it : a) {
        cout << it << " ";
    }

    return 0;
}
