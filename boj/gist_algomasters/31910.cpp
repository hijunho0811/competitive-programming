#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin >> N;
    std::vector<std::vector<int>> grid(N, std::vector<int>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            std::cin >> grid[i][j];
        }
    }

    std::vector<std::vector<long long>> sum(N, std::vector<long long>(N));

    sum[0][0] = grid[0][0];
    
    for(int j = 1; j < N; ++j){
        sum[0][j] = (sum[0][j-1] << 1) + grid[0][j];
    } 

    for(int i = 1; i < N; ++i){
        sum[i][0] = (sum[i-1][0] << 1) + grid[i][0];
    }

    for(int i = 1; i < N; ++i){
        for(int j = 1; j < N; ++j){
            sum[i][j] = std::max(sum[i-1][j], sum[i][j-1]) << 1 | grid[i][j]; 
        }
    }

    std::cout << sum[N-1][N-1];
    return 0;
}
