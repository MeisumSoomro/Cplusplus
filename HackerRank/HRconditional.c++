#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n;
   cin>>n;


if(n%2 == 0){
if( (n%2 == 0) && n>=2 && n<=5)
cout<<"Not Weird";

if( (n%2 == 0) && n>=6 && n<=20 )
cout<<"Weird";

if(n>20)
cout<<"Not Weird";
}
else 
{
    cout<<"Weird";
}

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}