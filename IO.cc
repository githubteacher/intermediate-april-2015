#if !defined __IO_cc__
#define __IO_cc__


#include "IO.hh"


namespace IO {
using namespace std;

    vector<string> GetArgs(int argc, char* argv[])
    {
        vector<string> args;
        for (int i = 0; i < argc; ++i)
            args.push_back(argv[i]);
        return args;
    }


}   // namespace IO


#endif
// end header guard