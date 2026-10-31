#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
public: 
    string Name;
    string OwnerName;
    int subs;
    list<string> PublishedVideoTitle;

    //constructor
    YoutubeChannel(string name, string ownername){
        Name = name;
        OwnerName = ownername;
        subs = 0;
    }

    void getInfo(){
        cout << "Name: "        << Name       << "\n";
        cout << "Owner: "       << OwnerName  << "\n";
        cout << "Subscriber: "  << subs       << "\n";
        cout << "Videos: \n";
        for (string video : PublishedVideoTitle) {
            cout << "- " << video << "\n";
        }
        cout << "\n";
    }
};

int main() 
{
    YoutubeChannel ytc1("NameOne", "NameTwo");
        ytc1.PublishedVideoTitle.push_back("Introduction to C++");
        ytc1.PublishedVideoTitle.push_back("Introduction to Pyhton");
    YoutubeChannel ytc2("ChannelOne", "ChannelTwo");

    ytc1.getInfo();
    ytc2.getInfo();

    return 0;
    
}