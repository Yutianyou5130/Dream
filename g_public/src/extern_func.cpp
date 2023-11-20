/*********************************************
* 常用公共函数，该文件公共函数只用了int类型
* 后续需要优化，适配各种基本数据类型
* 作者：余天友
* 创建日期：2023-11-20
*********************************************/

/*
* 判断一个有符号数是整数、非正数、负数、非负数
*/
extern bool Positive(int positive)
{
    return positive > 0;
}

extern bool None_Positive(int none_Positive)
{
    return none_Positive <= 0;
}

extern bool Negative(int negative)
{
    return negative < 0;
}

extern bool None_Negative(int none_Negative)
{
    return none_Negative >= 0;
}

/*
* 将一个有符号数进行左移、右移操作
*/
int Signed_Left_Shift(int number, int position)
{
    return number << position;
}

int Signed_Right_Shift(int number, int position)
{
    return number >> position;
}

/*
* 将一个无符号数进行左移、右移操作
*/

int Unsigned_Left_Shift(unsigned number, int position)
{
    return number << position;
}

int Unsigned_Right_Shift(unsigned number, int position)
{
    return number >> position;
}