#include <iostream>
using namespace std;

int main(){
    int n, flag;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >>n;
    cin >>flag;
    int arr[n+1];
    arr[0] = 0;
    for(int i = 1; i <n+1; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    int max = arr[flag];
    for(int i = 0; i+flag<n+1; i++){
        if(arr[i+flag] - arr[i] > max){
            max = arr[i+flag] - arr[i];
        }
    }
    cout << max;
}