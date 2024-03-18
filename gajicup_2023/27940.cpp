#include <iostream>
#include <algorithm>
using namespace std;

//접근법:
//농장의 계단을 배열로 생성, 0으로 초기화 후 매 비 이벤트마다 강수량 저장
//강수량이 최대양을 넘어가면 해당 층 출력 후 종료
//시간초과, 이중for문이 비효율적인가?
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //농장 계단의 수, 비가 내린 횟수, 각 층이 버틸 수 있는 빗물의 최대 양
    int num_stairs, num_rain, max_rain;
    cin >> num_stairs >> num_rain >> max_rain;

    //빗물양을 저장할 배열 초기화-> 첫번째 층은 항상 비에 젖는다
    //첫번째 층을 기준으로 하면 되지 않는가?
    int stair1 = 0;

    int affected_stairs, rain_amount;
    for(int i = 0; i < num_rain; i++){
        cin >> affected_stairs >> rain_amount;
        if((stair1 + rain_amount) > max_rain){
            //빗물이 최대양을 넘어가면 해당 층 출력 후 종료
            cout << (i+1) << " 1";
            return 0;
        }
        else{
            stair1 += rain_amount;
        }
    } 
    cout << "-1";
    return 0;
}