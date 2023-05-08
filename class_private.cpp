#include <iostream>
using namespace std;

class SunClass
{
private:
    string name;

public:
    string set_name(string name)
    {
        this->name = name;
        return name;
    }
};


int main()
{
    SunClass sunobj;
    cout << sunobj.set_name("MD. Shariar Hossain Sun") << '\n';
    return 0;
}
