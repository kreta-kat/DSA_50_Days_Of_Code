#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

string extractKey(string list, int key)
{
    char *stringKey = strtok((char*)list.c_str(), " ");
    while(key>1)
    {
        stringKey = strtok(NULL, " ");
        key--;
    }

    return (string)stringKey;
}

bool numComp(pair<string,string> p1,pair<string,string> p2)
{
    return stoi(p1.second)<stoi(p2.second);
}

bool dictComp(pair<string,string> p1,pair<string,string> p2)
{
    return p1.second<p2.second;
}

int main()
{
    int n;
    cin>>n;
    string list[n]; 
    cin.get();
    for(int i = 0; i<n; i++)
    {
        getline(cin, list[i]);
    }
    int key;
    cin>>key;
     pair<string, string> stringPair[n];
     for(int i =0; i<n;i++)
     {
         stringPair[i].first = list[i];
         stringPair[i].second = extractKey(list[i],key);
     }

     bool sortingType, reverse;
     cin>>sortingType>>reverse;
     if(sortingType == 0)
     {
         sort(stringPair, stringPair+n, numComp);
     }
    else
    {
        sort(stringPair, stringPair+n, dictComp);
    }

    if(reverse)
    {
        std::reverse(stringPair, stringPair+n);
    }
    for(int i=0; i<n;i++)
    {
        cout<<stringPair[i].first<<endl;
    }
    return 0;
}
