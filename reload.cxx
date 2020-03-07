#include <iostream>
using namespace std;

class mystring
{
    public:
    string s;

    mystring(const mystring &obj);
    mystring(string str);
    ~mystring();
    public:
    char Length();
    bool IsEmpty();
    char AddSymStr(string add = 0);
    void InsertSybStr(string as=0);
    void DeleteSybStr(int pos=0,string amt=0);
    int FindSubstring(string subs);
    void ChangeSubstring(int pos,int amt,string subs=0);
    void print();
};

mystring::mystring(string str)
{
    s=str;   
}
mystring::mystring(const mystring &obj)
{
    string s = 0;
    s = obj.s;
}
mystring::~mystring(){}

char mystring::Length()
{
    return (sizeof(s));
}
bool mystring::IsEmpty()
{   
    char l = sizeof(s);
    l = NULL ? true : false;
}
char mystring::AddSymStr(string add=0)
{
    string add;
    s.push_back('add');
}
void mystring::InsertSybStr(string as)
{
    s.insert(0,as);
}
void mystring::DeleteSybStr(int pos=0,string amt=0)
{
    s.erase(pos,amt);
}
int mystring::FindSubstring(string subs)
{
    s.find(subs);
}
void mystring::ChangeSubstring(int pos=0,int amt,string subs=0)
{
    s.replace(pos,amt,subs);
}

int main(int argc,char **argv)
{
    string s;
    cout<<"input string : "<<endl;
    cin>>s;
    string a="asd123";
    


}
