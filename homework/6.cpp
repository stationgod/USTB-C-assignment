#include <iostream>
using namespace std;

int main() {
    // 外层循环：遍历 1 到 1000 的每一个数
    for (int i = 1; i <= 1000; i++) {
        
        int sum = 0; // 【关键】每次判断新数字前，sum必须清零
        
        // 内层循环：找 i 的真因子 (从 1 到 i/2 就能找全，不需要到 i-1)
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j; // 是因子，直接累加
            }
        }
        
        // 如果因子之和等于它本身，就是完全数
        if (i == sum) {
            cout << i << endl; // 输出结果
        }
    }
    
    return 0;
}