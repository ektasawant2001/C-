// Remove Characters in String Except Alphabets
#include <iostream>
using namespace std;
int main()
{
    string str;
    int i;
    cout <<"Enter any string :: "<<endl;
    cin>>str;
    cout <<"The Original String is :: "<<str<<endl;
    int len =str.size();
     for(i=0;i<len;++i)
    {
        if (!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
        {
            str[i]='\0';
        }
    }
    cout << "After Removing Characters String is :: " <<str<<endl;
    return 0;
}
