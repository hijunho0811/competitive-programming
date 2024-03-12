#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N;
    cin >> K;
    int arr[N];
    int total_cnt = 0, cnt = 0;
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = N; i>0; i--){
        cnt = K/arr[i-1];
        K = K%arr[i-1];
        total_cnt += cnt; 
    }
    
    cout << total_cnt << endl;
    return 0;
}