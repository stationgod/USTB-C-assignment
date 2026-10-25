#include <iostream>
using namespace std;

int main() {
    int max_num, temp;
    
    // 先读入第一个数，暂时把它当做最大值
    cin >> max_num;
    
    // 剩下还有 5 个数，用循环读入
    for (int i = 0; i < 5; i++) {
        cin >> temp; // 读入下一个挑战者
        
        // 如果挑战者比当前的擂主大，就更新擂主
        if (temp > max_num) {
            max_num = temp;
        }
    }
    
    // 输出最终的擂主
    cout << max_num << endl;
    
    return 0;
}