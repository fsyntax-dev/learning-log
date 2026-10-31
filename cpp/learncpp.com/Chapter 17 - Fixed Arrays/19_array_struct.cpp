#include <iostream>
#include <array>
#include <string>
#include <string_view>

struct Heroes{
    int id{};
    std::string_view name{};
    int power{};
};

constexpr std::array heroes{
    Heroes{1, "Galahand", 12349},

};

const Heroes* findHeroByID(int id){
    for(auto& hero : heroes){
        if(id == hero.id){
            return &hero;
        }
    }
    return nullptr;
}

void printHero(const Heroes* hero){
    std::cout << "Hero: " << hero->name << "\t" <<"Power: "<< hero->power << "\n";
}


int main(){

    const Heroes* myHero{findHeroByID(1)};
    printHero(myHero);


    return 0;
}