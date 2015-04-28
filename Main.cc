#include <exception>
#include <iostream>

#include "IO.hh"


int main(int argc, char* argv[])
{
    using namespace std;


    try {

    }
    catch (exception& e) {
        cerr << e.what() << '\n';
        return 1;
    }
    catch (...) {
        cerr << "caught unknown exception\n";
        return 1;
    }

    return 0;
}
