#include <iostream>
#include <cstdarg>  // for ellipsis to read it
                    // fyi ellipsis already built in

// not recommend to use ellipsis

// ellipsis - accept dynamic number of arguments
//          - use ... keywords

// must have a non-ellipsis parameter (normal parameter) to use ellipsis

// type function_name (paramter_list, ...)

// va_list  - create list to store ellipsis arguments
// va_start - initialize ellipsis and non ellipsis parameter
// va_arg   - to retrieve value of ellipsis and ellipsis type
// va_end   - clean up ellipsis list

double average(int count, ...){
    int sum {0};

    std::va_list list;              // access ellipsis with va_list

    va_start(list, count);          // initialize va_list using va_start
                                    // first  - the list to initialize
                                    // second - non-ellipsis parameter

    for(int arg{0}; arg < count; ++arg){
        sum += va_arg(list, int);
    }
    
    va_end(list);

    return static_cast<double>(sum) / count;
}


int main(){


    std::cout << average (5, 1,2,3,4,5);

    return 0;
}

