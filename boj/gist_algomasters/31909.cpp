#include <iostream>
#include <vector>

int main(){
    int numberOfCommands, deactivationKey;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    std::cin >> numberOfCommands;
    int commands;
    std::vector<int> powersOfTwo;

    for(int i = 1; i <= 7; ++i){
        int power = 1 << i;
        powersOfTwo.push_back(power);
    }

    for(int i = 0; i < numberOfCommands; i++){
        std::cin >> commands;
        for(int i = 0; i < powersOfTwo.size(); ++i){
            int a = powersOfTwo[i];
            int b = commands - a;

            if(b != a){
                for(int j = 0; j < powersOfTwo.size(); ++j){
                    if(powersOfTwo[j] == b){
                        int index_a = i + 1;
                        int index_b = j + 1;

                        std::swap(arr[index_a], arr[index_b]);
                        break;
                    }
                }
            }
        }
    }

    std::cin >> deactivationKey;
    for(int i = 0; i < 7; i++){
        if(arr[i] == deactivationKey){
            std::cout << i+1;
        }
    }

    return 0;
}