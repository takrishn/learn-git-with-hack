#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    while(true) {
        cout << "my branch is way";
        for (int i = 0; i < (rand() % 100); ++i) {
            cout << ((i % 2 != 0) ? "y" : "Y");
        }

        cout << " better than Theja's" << endl;
    }
    return 0;
}
