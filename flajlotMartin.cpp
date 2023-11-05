#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int trailingZeros(int x)
{
    if (x == 0)
    {
        return 1;
    }
    int count = 0;
    while ((x & 1) == 0)
    {
        count++;
        x >>= 1;
    }
    return count;
}

int leadingZeros(int ele)
{
    if(ele == 0)
    {
        return 1;
    }

    int count = 0;
    while((ele & 1) == 0)
    {
        count++;
        ele = ele >> 1;
    }

    return count;
}









int flajoletMartin(const vector<int> &dataset, int k)
{
    int maxZeros = 0;
    for (int i = 0; i < k; i++)
    {
        int hash_val = leadingZeros(dataset[i % dataset.size()]);
        // cout<<trailingZeros(dataset[i % dataset.size()])<<endl;
        maxZeros = max(hash_val, maxZeros);
    }

    return 1 * pow(2, maxZeros);
}

int flajoletMartin1(vector<int> &dataset, int k)
{
    int maxZeros = 0;
    for(int i =0; i<k; i++)
    {
        int hash_ele = leadingZeros(dataset[i % dataset.size()]);
        maxZeros = max(maxZeros, hash_ele);
    }

    return 1 * pow(2, maxZeros);
}

int main()
{
    vector<int> dataset = {1, 3, 2, 4, 5, 1, 2, 3, 4, 3, 1, 2, 3, 4, 5, 1};
    int dist_num = flajoletMartin1(dataset, 10);
    cout << "Estimated number of distinct elements: " << dist_num << endl;
    return 0;
}
