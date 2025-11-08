#include <iostream>
using namespace std;

int main() {
    // 大三角的面积为 10 * 10 / 2 = 50
    // 小三角的面积为 4 * 4 / 2 = 8
    // 大三角的面积除以2减去小三角的面积为 50 / 2 - 8 = 17
    int bigSquare = 10 * 10 / 2;
    int smallSquare = 4 * 4 / 2;
    cout << bigSquare / 2 - smallSquare << endl;

    return 0;
}