#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

const int TABLE_SIZE = 10;

// Hash function to convert a string key into an index
int hashFunction(const string &key)
{
    int hashValue = 0;
    for (char ch : key)
    {
        hashValue += ch;
    }
    return hashValue % TABLE_SIZE;
}

void insert(vector<list<pair<string, int>>> &table, const string &key, int value)
{
    int index = hashFunction(key);
    table[index].push_back({key, value});
}

int lookup(const vector<list<pair<string, int>>> &table, const string &key)
{
    int index = hashFunction(key);
    for (const auto &pair : table[index])
    {
        if (pair.first == key)
        {
            return pair.second;
        }
    }
    return -1;
}

void remove(vector<list<pair<string, int>>> &table, const string &key)
{
    int index = hashFunction(key);
    table[index].remove_if([&key](const pair<string, int> &pair)
                           { return pair.first == key; });
}

int main()
{

    vector<list<pair<string, int>>> hashTable(TABLE_SIZE);

    insert(hashTable, "example", 1);
    insert(hashTable, "test", 2);
    insert(hashTable, "sample", 3);

    cout << "Value for 'example': " << lookup(hashTable, "example") << endl;
    cout << "Value for 'test': " << lookup(hashTable, "test") << endl;
    cout << "Value for 'sample': " << lookup(hashTable, "sample") << endl;

    remove(hashTable, "test");
    cout << "Value for 'test' after deletion: " << lookup(hashTable, "test") << endl;

    return 0;
}
