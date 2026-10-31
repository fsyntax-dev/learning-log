#include <iostream>

// linkage - where a variable or function can be accessed from another file
// external - to share to other files
// internal - to hide from other files, helps prevent name conflict


int g_valueA{5};                // by default has external linkage
static int g_valueB{10};        // static keywords to give internal linkage

const int g_valueC{15};         // internal linkage by default
constexpr int g_valueD{20};     // internal linkage by default

extern const int g_valueE{20};  // extern - switch to external

extern constexpr int g_Port {8080};


int main(){


    return 0;
}