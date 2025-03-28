#include<iostream>
#include<vector>
using namespace std;

vector<int> Intersection(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    vector<int> intersectionArr;
    int i = 0, j= 0;
    while( i < n1 && j < n2){
        if( a[i] < b[j]){
            i++;
        }
        else if ( a[i] > b[j]){
            j++;
        }
        else{
            intersectionArr.push_back(a[i]);
            i++;
            j++;
        }
    }

    return intersectionArr;
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

    a = Intersection(a1, a2);

    for (auto it : a) {
        cout << it << " ";
    }

    return 0;
}
