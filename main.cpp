#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int vecSize = 0;
    int input;
    vector<int> vec;

    cout << "How big is your vector: ";
    cin >> vecSize;
    cout << "Enter your data in the vector: ";
    for (int i=0;i<vecSize;i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    //print vec with iterator
    vector<int>::iterator it;
    for (it=vec.begin(); it!=vec.end(); ++it)
        cout << *it << " ";

    cout << endl;

    //print vec with simpler iterator syntax
    for (auto& it : vec)
        cout << it << " ";


    return 0;
}
