//Check Whether a character is Vowel or Consonant

#include<iostream>
using namespace std;

int main (){
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    bool isVowel(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                 c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isVowel){
        cout<<c<<" is Vowel.";   
    }else{
         cout<<c<<" is Consonant.";
    }

    return 0;
}