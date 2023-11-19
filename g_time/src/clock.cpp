#include "./../inc/clock.h"
#include <iostream>

extern time_t Current_Clock_Second()
{
    return time(nullptr);
}

extern std::string Current_Clock_Date()
{
    auto temp = Current_Clock_Second();
    auto data = localtime(&temp);
    return std::to_string(START_TIME + data->tm_year) + "-" +
        std::to_string(1 + data->tm_mon) + "-" + std::to_string(data->tm_mday);
}

// int main(void)
// {
//     auto time1 = Current_Clock_Second();
//     for (auto j = 0; j < 10; ++j) {
//         for (auto i = 0; i < 100000000; ++i) {
//             (void)time_t();
//         }
//     }
//     auto time2 = Current_Clock_Second();
//     std::cout << time1 << std::endl; 
//     std::cout << time2 << std::endl;
//     std::cout << time2 - time1 << std::endl;
//     std::cout << time(nullptr) << std::endl; 
//     std::cout << Current_Clock_Date() << std::endl;
//     return 0;
// }