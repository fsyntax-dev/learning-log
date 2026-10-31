#include <iostream>
#include <list>
using namespace std;

/*
Object (Example)
    + Example / instance of that class

Class (Category)
    + A blueprint

Attribute (Characteristic/Properties)
    + Characteristic of object
*/

class YoutubeChannel{
public: //access modifier 
        // by default attributes are private
    string Name;
    string OwnerName;
    int subs;
    list<string> PublishedVideoTitle;
};

int main() 
{
    YoutubeChannel ytChannel;
    ytChannel.Name = "NameOne";
    ytChannel.OwnerName = "ChannelNameOne";
    ytChannel.subs = 100000;
    ytChannel.PublishedVideoTitle = {"Stastical Arbitrage", 
                                    "Quantitative Analaysis with Python",
                                    "High Frequency Trading with C++"};

    cout << "Name: " << ytChannel.Name << "\n";
    cout << "Owner: " << ytChannel.OwnerName << "\n";
    cout << "Subscriber: " << ytChannel.subs<< "\n";
    cout << "Videos: \n";
    for (string video : ytChannel.PublishedVideoTitle) {
        cout << "- " << video << "\n";
    }


    return 0;
    
}