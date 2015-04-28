#if !defined __IO_hh__
#define __IO_hh__


namespace IO {
using namespace std;

    // it's C++, so let's stop using C-style arrays...
    vector<string> GetArgs(int argc, char* argv[]);


}   // namespace IO


#endif
// end header guard