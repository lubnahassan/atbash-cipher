#include <iostream>

using namespace std;

int main()
{
cout<<" Ahlan ya user ya habibi."<<endl;
cout<<"What do you like to do today? "<<endl;
a:
cout <<endl;
cout<<"1- Cipher a message."<<endl;
cout<<"2- Decipher a message."<<endl;
cout<<"3- End."<<endl;
int operation;
cin>>operation;
if (operation ==3)
{
    return 0;
}
while (operation !=1 && operation !=2)
{
    cout <<"not available: ";
    cin>>operation;
}
cout <<"Enter your massege: ";
string massage ;
int x;
char z;
cin.ignore();
getline(cin,massage);
for (int i=0 ; i<massage.length() ; i++){
    x=massage[i];
    if ( x < 97 && x>=65)
    {
        massage[i]=25-(massage[i]-65);
        cout<< char (massage[i]+65);
    }
    if ( x >= 97 )
    {
        massage[i]=25-(massage[i]-97);
        cout<< char (massage[i]+97);
    }
    if (x==32)
    {
      cout <<char (32);
    }
}
goto a;

    return 0;
}
