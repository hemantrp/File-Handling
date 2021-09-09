#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream fio;
    string title,info,s;
    char ch;
    fio.open("text.txt",ios::in | ios::app );

    while(1) {

        cout<<"Title :";
        getline(cin,title);
        cout<<"Information :";
        getline(cin,info);
        fio<<title<<" : "<<info<<endl;

        cout<<"\nDo you want to continue(y/n) :";
        cin>>ch;
        cin.get();

        if(ch=='n')
            break;
    }

    fio.seekg(0,ios::beg);

    while(fio) {
        getline(fio,s);
        cout<<s<<endl;

    }

}
