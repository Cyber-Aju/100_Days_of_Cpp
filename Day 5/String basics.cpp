/*
Input Format
You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format
In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    cin >>a;
    string b;
    cin>>b;
    int alen=a.size();
    int blen=b.size();
    cout<<alen<<" "<<blen<<endl;
    cout<<a+b<<endl;
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
    
    return 0;
}
