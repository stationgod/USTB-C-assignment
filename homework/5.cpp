#include <iostream>
using namespace std;

// 提取成独立函数，代码更干净，避免反复写长长的闰年公式
bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    // 特判：如果是2月29日出生，直接返回 -1
    if (M == 2 && D == 29) {
        cout << -1 << endl;
        return 0;
    }

    int leap_days = 0; // 统计18年中真正跨过的2月29日数量

    // 1. 统计出生当年（Y年）
    // 只有在出生在 1月或2月 时，这年的2月29日才在出生的“未来”
    if (isLeap(Y) && M <= 2) {
        leap_days++;
    }

    // 2. 统计中间完整经历的 17 个年份（Y+1 到 Y+17）
    for (int i = 1; i <= 17; i++) {
        if (isLeap(Y + i)) {
            leap_days++;
        }
    }

    // 3. 统计满18岁当年（Y+18年）
    // 从1月1日算到生日那天，只有在3月及以后（M > 2），才会跨过这年的2月29日
    if (isLeap(Y + 18) && M > 2) {
        leap_days++;
    }

    // 基础天数：18个平年 = 18 * 365
    // 加上这18年间多出来的闰日
    int total_days = 18 * 365 + leap_days;

    cout << total_days << endl;
    return 0;
}