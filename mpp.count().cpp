// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
using namespace std;

int main()
{
    //declaring map with datatype as integer for both key-value
    map<int, int> mpp;
    //inserting key-value pairs
    mpp.insert({3, 30});
    mpp.insert({5, 50});
    mpp.insert({7, 70});

    if (mpp.count(3))
    {
        cout << "key 3 is present";
    }
    else
    {
        cout << "key 3 is not present";
    }
    return 0;
}
