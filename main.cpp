#include <iostream>
#include "SHA3.h"
#include "vector_ref.h"

using namespace std;
using namespace dev;

int main() {
    dev::bytes b;
    cout << dev::sha3("Keccak-256 Test Hash") << endl;

    cout << dev::EmptyListSHA3 << endl;
    return 0;
}