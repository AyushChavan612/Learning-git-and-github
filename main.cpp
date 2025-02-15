#include<iostream>
using namespace std;

int main() {
    std::cout << "HELLO WORLD" << std::endl;
    for(int i =  1; i <= 10; ++i) {
        cout << i << " ";
    }

    cout << endl;

    for(int i = 10; i >= 0; --i) {
        cout << i << " ";
    }
    return 0;
}