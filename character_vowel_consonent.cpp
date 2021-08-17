//Write a C++ Program to Check Whether a character is Vowel or Consonant
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter character: "<<endl;
    cin>>c;
    if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
        cout<<"Given character is VOWEL "<<endl;
    else
        cout<<"Given character is CONSONENT "<<endl;
    return 0;
}
