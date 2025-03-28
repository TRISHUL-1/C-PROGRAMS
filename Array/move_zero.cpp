#include <iostream>
using namespace std;

void moveZero(int arr[], int n){
    int j = -1;
    for (int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1)
        return;

    for (int i = j+1; i < n; i++){
        if(arr[i] != 0) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    moveZero(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}