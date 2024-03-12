#include <iostream>
using namespace std;

int recursive(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*recursive(n-1);
    }
}

int main(){
    int n;
    cin >> n;
    int sum = recursive(n);
    cout << sum;
    return 0;
}
