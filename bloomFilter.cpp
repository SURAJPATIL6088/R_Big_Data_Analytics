/*
#include <iostream>
#include <vector>
using namespace std;

int hash1(int key, int size) 
{
    return key % size;
}

int hash2(int key, int size) 
{
    return (2 * key) % size;
}

void insert(vector<bool> &filter, int key, int size) {
    filter[hash1(key, size)] = true;
    filter[hash2(key, size)] = true;
}

bool contains(vector<bool> &filter, int key, int size) {
    return filter[hash1(key, size)] && filter[hash2(key, size)];
}

int main() {
    int size = 10;
    vector<bool> filter(size, false);

    insert(filter, 5, size);
    insert(filter, 8, size);

    cout << "Contains 5: " << contains(filter, 5, size) << endl; // Should return 1 (true)
    cout << "Contains 8: " << contains(filter, 8, size) << endl; // Should return 1 (true)
    cout << "Contains 3: " << contains(filter, 3, size) << endl; // Should return 0 (false)

    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int hash1(int key, int size)
{
    return key % size;
}

int hash2(int key, int size)
{
    return (key*2) % size;
}

void insert(vector<bool> &filter, int key, int size)
{
    filter[hash1(key, size)] = true;
    filter[hash2(key, size)] = true;
}

bool contains(vector<bool> &filter, int key, int size)
{
    return filter[hash1(key, size)] && filter[hash2(key, size)];
}

int main()
{
    int size  = 10;
    vector<bool>filter(size, false);

    insert(filter, 5, size);
    insert(filter, 8, size);
    insert(filter, 12, size);

    cout<<"Is the Element present in the Bloom Filter "<< contains(filter, 55555, size) <<endl;
}