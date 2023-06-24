#include"Header7.2.h"
void printVector(vector<int> v)
{
    for_each(v.begin(), v.end(), [](int i)
        {
            cout << i << " ";
        });
    cout << endl;
}
void forEach(vector<int> v1, void (*func)(int a))
{
    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        func(*i);
    }
}
//void lambra(vector<int> v)
//{
//    auto x = [](int a, int b) -> int { return a + b; } (10, 50);
//    cout << x;
//}
//void assign()
