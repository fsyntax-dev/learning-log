#include <iostream>
#include <stdexcept>

// move semantic - a move operation to transfer ownership

//      the problem - when move operation is interrupted (thrown exception in halfway)
//                  - it can damage the source object

// to solve it - give a "strong exception guarantee"


// park: i dont understand this topic