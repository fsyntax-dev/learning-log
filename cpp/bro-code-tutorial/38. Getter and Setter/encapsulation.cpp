#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel {
private:
    string Name;
    string OwnerName;
    int subs;
    list<string> PublishedVideos; // Renamed private attribute

public:
    YoutubeChannel(string name, string ownername) {
        Name = name;
        OwnerName = ownername;
        subs = 0;
    }

    void getInfo() {
        cout << "Name: " << Name << "\n";
        cout << "Owner: " << OwnerName << "\n";
        cout << "Subscriber: " << subs << "\n";
        cout << "Videos: \n";
        for (string video : PublishedVideos) {
            cout << "- " << video << "\n";
        }
        cout << "\n";
    }

    void Subscribe() {
        subs++;
    }

    void unSubscribe() {
        if (subs > 0) {
            subs--;
        }
    }

    void addVideo(string title) { // Fixed function name
        PublishedVideos.push_back(title);
    }
};

int main() {
    YoutubeChannel ytc1("NameOne", "NameTwo");
    ytc1.Subscribe();
    ytc1.Subscribe();
    ytc1.addVideo("Daily Vlog"); // Use the fixed function name

    ytc1.getInfo();

    return 0;
}
