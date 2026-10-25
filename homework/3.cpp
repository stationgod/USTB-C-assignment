#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double m, tax = 0, money;
    cin >> m;

    if (m < 0) {
        cout << "error" << endl;
        return 0;
    }

    // 分档计算应交税款 tax（这里是累加前面档位的税）
    if (m <= 1000) {
        tax = 0;
    } 
    else if (m <= 2000) {
        tax = (m - 1000) * 0.05;
    } 
    else if (m <= 3000) {
        // 第一档的满额税 + 第二档的超出税
        tax = (1000 * 0.05) + (m - 2000) * 0.1; 
    } 
    else if (m <= 6000) {
        // 第一档满额 + 第二档满额 + 第三档超出税
        tax = (1000 * 0.05) + (1000 * 0.1) + (m - 3000) * 0.15;
    } 
    else {
        // 前三档满额 + 第四档超出税
        tax = (1000 * 0.05) + (1000 * 0.1) + (3000 * 0.15) + (m - 6000) * 0.2;
    }

    // 计算税后收入
    money = m - tax;

    // 统一输出（注意这里的逗号，以及固定两位小数）
    cout << fixed << setprecision(2) << "tax=" << tax << ", money=" << money << endl;

    return 0;
}