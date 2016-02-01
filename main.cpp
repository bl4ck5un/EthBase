#include <iostream>
#include "libethcore/Transaction.h"

using namespace std;
using namespace dev;

int main() {
    u256 value = 0;
    u256 gas = 0;
    u256 gasPrice = 0;
    Address to(0);
    bytes data = {1,2,3,4};
    Secret s(data);

    eth::TransactionBase b(value, gasPrice, gas, to, data, 0);

    dev::RLPStream r;
    b.streamRLP(r);

    bytes out = r.out();
    cout << toHex(out) << endl;
}