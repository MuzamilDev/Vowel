#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter Any Alphabet "<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
      {

        if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
            cout<<"Alphabet is Vowel "<<endl;
        else
            cout<<"Alphabet is Constant "<<endl;
      }
      else
      {
          cout<<"Chrachter is not Alphabet "<<endl;
      }

    return 0;
}
