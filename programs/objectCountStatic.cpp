#include <iostream>
using namespace std;

class objectCountStatic
{
    public:
    static int count;
    objectCountStatic(){
        count++;
    }
};

int objectCountStatic ::count = 0;

int main()
{
    objectCountStatic a, b, c;
    cout << "Number of Objects : " << objectCountStatic::count;
    return 0;
}