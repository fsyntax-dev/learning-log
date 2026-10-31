#include <iostream>
// identifier scope is based where it created

                            //variable x and y can't be used outside main()

int main(){
                            // "y" can't be used here cause it not yet exist
    int x{};                // "x" exists

    int y{};                // "y" exists here
                            // both can be used start here

    return 0;
}                           // variable x and y destroyed