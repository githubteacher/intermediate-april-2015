#include <exception>
#include <iostream>

#include "IO.hh"


int main(int argc, char* argv[])
{
    using namespace std;


    try {
        vector<string> inputArgs {IO::GetArgs(argc, argv)};
        for (const auto& arg : inputArgs)
            cout << arg << '\n';
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
