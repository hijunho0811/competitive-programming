#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <utility>



int main(){
    int numberOfStudents;
    std::cin >> numberOfStudents;

    std::unordered_map<std::string, std::vector<std::string>> ringMap;
    std::string name, ring;

    for(int i = 0; i < numberOfStudents; i++){
        std::cin >> name >> ring;
        if(ring != "-")
            ringMap[ring].push_back(name);
    }

    std::vector<std::pair<std::string, std::string>> couples;

    for(const auto& pair : ringMap){
        if (pair.second.size() == 2){
            couples.emplace_back(pair.second[0], pair.second[1]);
        }
    }
    
    if(couples.empty()){
        std::cout << "0";
    } else {
        std::cout << couples.size() << "\n";
        for(const auto& couple : couples){
            std::cout << couple.first << " " << couple.second << "\n";
        }
    }

    return 0;
}