#include <iostream>
using namespace std;

// =============(operator-)=================
// class Pair
// {
// public:
//     int a, b;

//     Pair(int a, int b) : a(a), b(b) {};
//     Pair operator-(const Pair &p)
//     {
//         return Pair(a - p.a, b - p.b);
//     }
// };

// int main()
// {
//     Pair p1(2, 4), p(4, 9);
//     Pair p3 = p - p1;
//     cout << p3.a << " " << p3.b << endl;
// }

// =============(operator++)=================

class Incrementor
{
private:
    int n;

public:
    Incrementor(int v) : n(v) {}
    Incrementor &operator++()
    {
        ++n;
        return *this;
    }
    int get() const { return n; }
};
int main()
{
    Incrementor obj(5);
    ++obj;
    ++obj;
    cout << obj.get() << endl;
    return 0;
}