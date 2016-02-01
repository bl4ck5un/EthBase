#include <iostream>
#include "libethcore/Transaction.h"
#include "libethcore/Common.h"
#include "libdevcore/Common.h"
#include "libdevcrypto/Common.h"

using namespace std;
using namespace dev;

int main() {
    
    Address from(100);
    Address to(200);
    u256 value = 88888;
    u256 gas = 500000;
    u256 gasPrice = 4000;
    bytes data = {1,2,3,4,5,6,7,8};

    h256 r(0);
    h256 s(0);
    byte v = 27;
    SignatureStruct ss(r, s, v);

    eth::TransactionSkeleton ts;
    ts.from = from;
    ts.to   = to;
    ts.creation = 0;
    ts.data = data;
    ts.gas = gas;
    ts.gasPrice = gasPrice;
    ts.nonce = 0;
    ts.value = value;


    eth::TransactionBase b(ts);

    bytes rlp = b.rlp();

    cout << "From rpl():\t\t" << toHex(rlp) << endl;
    cout << "TX Detail:\t\t" << b << endl;

    eth::TransactionBase bb(rlp, eth::CheckTransaction::None);
    cout << "BB Detail:\t\t" << bb <<endl;
}