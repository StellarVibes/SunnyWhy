#include<iostream>
#include<cmath>  // 必须包含：用于数学函数（fabs/floor/ceil/round/pow）
using namespace std;

int main()
{
    float d = 0;
    cin >> d;
    
    // 计算d的绝对值
    double abs_d = fabs(d);
    
    double abs_val = abs_d;                  // 绝对值
    int floor_val = (int)floor(d);       // 向下取整（强制转为int）
    int ceil_val = (int)ceil(d);         // 向上取整
    int round_val = (int)round(d);       // 四舍五入
    double pow5_val = pow(d, 5);         // 五次方
    
    printf("%.2f %d %d %d %.2f", abs_val, floor_val, ceil_val, round_val, pow5_val);
    
    return 0;
}