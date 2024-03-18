//조수들이 교배한 결과에서 W 품종이 하나라도 존재한다면, 키위 교수가 교배한 결과는 무조건 W 가지가 가능
//접근 자체는 정확. 그러나 왜 오답인가?
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int num_of_students;
    int num_of_gaji;
    int gaji;

    bool allpassed = false;
    int flag = 0;
    cin >> num_of_students >> num_of_gaji;
    for(int i = 0; i < num_of_students; i++){
        flag = 0;
        for(int j = 0; j < num_of_gaji; j++){
            cin >> gaji;
            if(a[gaji-1] == 'P'){
                flag = 1;
            }
        }
        if(flag == 0){
            allpassed = true;
        }
    }
    if (allpassed){
        cout << "W";
    } else {
        cout << "P";
    }
    return 0;
}