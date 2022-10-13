#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
string search(string &a,string &b) 
{
    string res;
    transform(a.begin(), a.end(), a.begin(), tolower);
    sort(a.begin(), a.end());
    transform(b.begin(), b.end(), b.begin(), tolower);
    sort(b.begin(), b.end());

    if (a.size() > b.size()) 
    {
        for (size_t i = 0; i < a.size(); i++)
        {
            for (size_t j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j]) 
                {
                    res += a[i];
                    continue;
                }
            }
        }

        if (res.size() == 0) 
        {
            return "No similar letters were found";
        }
        return res;
    }


    if (a.size() < b.size())
    {
        for (size_t i = 0; i < b.size(); i++)
        {
            for (size_t j = 0; j < a.size(); j++)
            {
                if (b[i] == a[j])
                {
                    res += b[i];
                    continue;
                }
            }
        }

        if (res.size() == 0)
        {
            return "No similar letters were found";
        }
        return res;
    }

    if (a.size() == b.size())
    {
        for (size_t i = 0; i < a.size(); i++)
        {
            for (size_t j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    res += a[i];
                    continue;
                }
            }
        }

        if (res.size() == 0)
        {
            return "No similar letters were found";
        }
        return res;
    }

}
int main()
{
    string a = "sdqcg";
    string b = "rfa34";

    cout << search(a, b);
}