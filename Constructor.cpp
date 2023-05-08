#include <iostream>
using namespace std;

class sunClass
{
private:
        string name;
public:
    sunClass(string name)
    {
        cout << "It is a constructor" << '\n';

    }
};

int main()
{
    sunClass sunobj;
    return 0;
}
