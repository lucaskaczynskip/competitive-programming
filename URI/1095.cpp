#include <iostream>

using namespace std;

void sequence() {
    int i = 1, j = 60;
    while(j >= 0) {
        cout << "I=" << i << " J=" << j << endl;
        i += 3;
        j -= 5;
    }
}

int main() {
    sequence();
}