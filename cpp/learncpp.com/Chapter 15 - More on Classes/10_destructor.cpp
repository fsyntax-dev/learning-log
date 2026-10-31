#include <iostream>

class Network{
private:
    std::string m_serverAddress{};
public:
    std::string getAddress() {return m_serverAddress;}
    void setAddress(std::string address) {m_serverAddress = address;}

    void sendData(){
        // data send and stuff
        std::cout << "Data Sent" << "\n";
    }

    Network(std::string_view serverAddress) 
        : m_serverAddress {serverAddress} {}
    
    ~Network(){
        sendData();
    }

    
};

int main(){
    Network serverOne{"123.01.45.6"};


    return 0;
}