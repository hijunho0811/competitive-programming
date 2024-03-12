#include <iostream>
using namespace std;

// int main(){
//     int n, flag;
//     cin >> n;
//     cin >> flag;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i < flag; i++){
//         int start, end;
//         cin >> start;
//         cin >> end;
//         int sum = 0;
//         for (int k = start-1; k < end; k++){
//             sum += arr[k];
//         }
//         cout << sum << "\n";
//     }
//     return 0;
// }

//시간제한 1초, 누적합 개념 적용

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, flag;
    cin >>n;
    cin >> flag;
    int arr[n+1];
    arr[0] = 0;
    for(int i = 1; i < n+1; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    for( int i = 0; i < flag; i++){
        int start, end;
        cin >> start;
        cin >> end;
        cout << arr[end] - arr[start-1] << "\n";
    }
    return 0;
}