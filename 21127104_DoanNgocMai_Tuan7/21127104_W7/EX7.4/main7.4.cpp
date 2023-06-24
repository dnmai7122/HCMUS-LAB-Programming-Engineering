#include"Header7.4.h"
int main()
{
    int n;
    cout << "Enter an integer greater than 1: ";
    cin >> n;
    vector<int> v;
    //1
    for (int i = n; i > 1; i--)
    {
        v.push_back(i);
    }
    std::remove_if(v.begin(),v.end(),isPrime);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    //2
    std::for_each(v.begin(), v.end(), isPrime);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;

}