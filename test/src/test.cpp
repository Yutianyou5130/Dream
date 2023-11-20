/*********************************************
* 代码或语法测试文件
* 作者：余天友
* 创建日期：2023-11-20
*********************************************/

#include <iostream>

int main()
{
    std::cout << "short:" << sizeof(short) << std::endl;
    std::cout << "int:" << sizeof(int) << std::endl;
    std::cout << "long:" << sizeof(long) << std::endl;
    std::cout << "long long:" << sizeof(long long) << std::endl;
    std::cout << "unsigned short:" << sizeof(unsigned short) << std::endl;
    std::cout << "unsigned:" << sizeof(unsigned) << std::endl;
    std::cout << "unsigned int:" << sizeof(unsigned int) << std::endl;
    std::cout << "unsigned long:" << sizeof(unsigned long) << std::endl;
    std::cout << "unsigned long long:" << sizeof(unsigned long long) << std::endl;
    std::cout << "float:" << sizeof(float) << std::endl;
    std::cout << "double:" << sizeof(double) << std::endl;
    std::cout << "bool:" << sizeof(bool) << std::endl;

    return 0;
}