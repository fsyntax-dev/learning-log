

// output may be buffered - output in stream may be not written immediately
// flush the buffer

/*
    when data is in buffer 
    program suddenly terminate/crashed
    destructor for file stream never executed - so the file we opened never closed

    ostream::flush()
    std::flush
    std::endl
*/

