#include <iostream>
#include <vector>

int main(){

    std::vector<int> testScore{84, 92, 75, 60, 84};                     // array
    std::size_t testScore_length {testScore.size()};                    // array length

    int average {0};                
    for(std::size_t index {0}; index < testScore_length; ++index){
        average += testScore[index];                                    // add each index to average one by one
    }
    average /= static_cast<int>(testScore_length);                      // division average with length
                                                                        // length is being convert to signed it
    std::cout << "Test Score Average: " << average << "\n";

    return 0;
}