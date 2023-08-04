
#include <iostream>
#include <vector>

int main() {
    using namespace std;

    std::vector<int> v;

    cout << v.capacity() << endl;

    v.reserve(1000);

    cout << v.capacity() << endl;

    v.shrink_to_fit();

    cout << v.capacity() << endl;

    return 0;
}