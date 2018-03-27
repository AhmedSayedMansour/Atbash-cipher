// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Atbash Cipher.cpp
// Last Modification Date: 21/02/2018
// Author1 and ID and Group: AhmedSayedMansour 20170022
// Teaching Assistant: xxxxx xxxxx
// Purpose:Cipher
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Ahlan ya user ya habibi.\nWhat do you like to do today?\n";
    int x;
    while(x!=3){
        cout<<"1- Cipher a message\n2- Decipher a message\n3- End"<<endl;
        cin>>x;
        cin.ignore();
        if(x==3) return 0;
        if(x==1)cout<<"Please enter the message to cipher:"<<endl;
        if(x==2)cout<<"Please enter the message to decipher:"<<endl;
        string inp;
        getline (cin, inp);
        for(int i=0;i<=(inp.length());i++){
            if(inp[i]==' ') cout<<' ';
            else {
                inp[i]=int((inp[i]));
                if(inp[i]>=65 && inp[i]<=90)
                    inp[i]=155-inp[i];
                else if(inp[i]>=97 && inp[i]<=122)
                    inp[i]=219-inp[i];
                cout<<(char)(inp[i]);}}
        cout<<endl;}
    return 0;
}
