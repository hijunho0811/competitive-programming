#include <iostream>

using namespace std;

int main(){
    int key;
    cin >> key;
    for(int i = 0; i < key; i++){
        for(int j = 0; j < key; j++){
            cout << "G";
        }
        for(int k = 0; k < key; k++){
            cout << "...";
        }
        cout << "\n";
    }
    for(int i = 0; i < key; i++){
        for(int j = 0; j < key; j++){
            cout << ".";
        }
        for(int k = 0; k < key; k++){
            cout << "I";
        }
        for(int l = 0; l < key; l++){
            cout << ".";
        }
        for(int m = 0; m < key; m++){
            cout << "T";
        }
        cout << "\n";
    }
    for(int i = 0; i < key; i++){
        for(int j = 0; j < key; j++){
            cout << "..";
        }
        for(int k = 0; k < key; k++){
            cout << "S";
        }
        for(int l = 0; l < key; l++){
            cout << ".";
        }
        cout << "\n";
    }

}