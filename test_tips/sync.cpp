#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string name;
    cin.tie(NULL);
    cout.tie(NULL);
    cout << "이름을 입력하세요";
    cin >> name;
    cout << name;
    cout.flush();
    return 0;
    

}