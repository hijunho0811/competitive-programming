#include <iostream>
using namespace std;

template <typename T, typename U>
auto add(T t, U u)->decltype(t+u){
    return t+u;
}
int main(){
    auto a = 4;
    auto b = 5;
    auto c = add(a, b);
    cout << c << endl;
    return 0;
}