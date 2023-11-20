/*********************************************
* 日志记录常用函数
* 作者：余天友
* 创建日期：2023-11-20
*********************************************/

#include "./../../g_time/inc/clock.h"
#include <iostream>

// 可变参数模板
template<typename T, typename... Args>
void Print(T t, Args... args) {
    std::cout << t << " ";
    if constexpr (sizeof...(args) > 0) {
        Print(args...); // 递归调用
    }
}

void LOG()
{
    Print(Current_Clock_Date())
}

int main(void)
{
    Print(1);
    Print(1, 2.0, "hello", 'c');
    return 0;
}