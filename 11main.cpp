#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class plik
{
    ifstream plik1;
    public:
    virtual ~plik()
    { }
    plik();
    ~plik();
    virtual void loop() = 0;
};
plik::plik()
{
    plik1.open("ciagi.txt"); 
}
plik::~plik()
{
    plik1.close();
}
class Zrob
: public plik
{
public:
virtual void loop()
{
int liczba;
string s;

while(!plik1.eof()){
plik1>>liczba;
s = to_string(liczba);
string s1 = s.substr(0, s.length() / 2);
string s2 = s.substr(s.length() / 2);
if(s1==s2){
cout<<liczba<<endl;
   	 }
    	}
   			 }
};

int main()
{
plik * ww = new Zrob;
ww->loop();
delete ww;
}
