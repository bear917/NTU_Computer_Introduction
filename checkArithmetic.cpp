#include <iostream>

using namespace std;

void printBin (int num) {
    int mask = 1<<7; // 10000000
    
    for (int i=0; i<8; ++i) {
        cout << (((num & mask) == 0)? 0:1);
        mask >>= 1;
    }

    cout << endl;
}

int main() {

    int a = 0x55;
    int b = 0x0F;


    printBin(a);
    printBin(b);
    printBin(a & b);
    printBin(a | b);
    printBin(a ^ b);

    printBin(64);
    printBin(7);

    return 0;
}
