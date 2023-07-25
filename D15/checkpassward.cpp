#include<bits/stdc++.h>

using namespace std;

int checkpass( string s, int n ,int min)
{
    if(n<min){
        return 0;
    }
    if(s[0]-'0'>=0 && s[0]-'0'<=9){
        return 0;
    }
    int a =0;
    int cap=0;
    int num =0;
    while(a<n){
        // if(s[a]==" " || s[a]=='+'){
        //     return 0;
        // }
        if (s.find(" ") !=
        std::string::npos)
        return 0;
        if (s.find('+') !=
        std::string::npos)
        return 0;
 
        if(s[a]>=65 && s[a]<=90){
            cap++;
        }
        else if(s[a]-'0'>=0 && s[a-'0'<=9]){
            num++;
        }
        a++;
    }return cap>0 && num>0;
}

int main(){
    string s;
    getline(cin,s);
    int min;
    cin>> min;
    int n = s.size();
    if(checkpass(s,n,min)){
        cout<< "Valid";
    }
    else cout<< "Invalid";


    


    return 0 ;

}

