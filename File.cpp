#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string s;
    string s1;
    ofstream out("text.txt");

    cout<<"Enter data which you want to add into file :";
    getline(cin,s);

    out<<s;
    out.close();

	//read data from file
    ifstream in("text.txt");
    in>>s1;

    cout<<"Data :"<<s1;

    return 0;
}