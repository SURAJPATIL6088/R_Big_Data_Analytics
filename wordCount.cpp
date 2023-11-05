#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>Dataset;

    Dataset.push_back("Blue");
    Dataset.push_back("Red");
    Dataset.push_back("Green");
    Dataset.push_back("Orange");
    Dataset.push_back("Blue");
    Dataset.push_back("Red");
    Dataset.push_back("Yellow");
    Dataset.push_back("Blue");
    Dataset.push_back("White");
    Dataset.push_back("Green");

    unordered_map<string, int>ump;

    for(int i=0; i<Dataset.size(); i++)
    {
        ump[Dataset[i]]++;
    }

    for(auto i: ump)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}