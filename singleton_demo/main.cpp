#include <iostream>

#include "include/singleton.h"

using namespace std;

class TestSingleton: public singleton<TestSingleton, CreateStatic>
{
public:
    void SetTestStr(std::string str)
    {
        test_str = str;
    }

    std::string GetTestStr()
    {
        return test_str;
    }

private:
    std::string test_str;
};

int main()
{
    TestSingleton& test1 = TestSingleton::instance(); // ��ȡ��ʵ��
    TestSingleton& test2 = TestSingleton::instance();
    test1.SetTestStr("Test1");
    std::cout << test1.GetTestStr() << "\n" << test2.GetTestStr() << std::endl; // test1��test2����ͬһ��test_str�������һ��

    return 0;
}
