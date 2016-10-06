#include <iostream>
#include <string>

using namespace std;
/*
int main() {

string s1("Hello");
string s2 = "world";


cout << s1 << ' ' << s2 << endl;

string s;

s = s1 + " " + s2;
cout << s << endl;

for (int i = 0; i < s.size() ; ++i){
	cout << s[i] << endl;
}
for (string::iterator it = s.begin(); it!=s.end(); ++it){
cout << *it << endl;
}


if(s1 != s2){

cout << "s1 and s2 are not equal..." << endl;

}
if(s1 < s2){
cout << "s2 is bigger than s1" << endl;
}
return 0;
}
*/

int main (){


string word;

//while(cin.good()){ //cin = ctrl + D end of file 
while(cin){
	cin >> word;// >> чете само до символи разделители (tab,space .. ...)
	cout << word << endl;

}



return 0; 
}
