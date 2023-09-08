#include <iostream>
#include <vector>
#include <string>

int main(){
    int size;
    char letter;
    
    std::cin >> size;
    
    std::vector<std::string> wordArray(size);
    for (int i = 0; i < size; ++i){
        std::cin >> wordArray[i];
    }
    std::cin >> letter;
    
    if (std::islower(letter)){
        letter = std::toupper(letter);
    }
    
    int count = 0;
    // for (const std::string& word : wordArray){
    //     if (!word.empty() && std::toupper(word[0])==letter){
    //         count++;
    //     }
    // }
    
    for (int i = 0; i < wordArray.size(); ++i) {
        const std::string& word = wordArray[i];
        if (!word.empty() && std::toupper(word[0]) == letter) {
            count++;
        }
    }


    std::cout<<count<<std::endl;
    return 0;
} 
