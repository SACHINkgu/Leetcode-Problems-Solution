//lec no :22 time 28:00 /lovebabbar

#include<iostream>
using namespace std;
int get_length(char arr[]){
    int count = 0;
    for(int i =0; arr[i] != '\0';i++){
        count ++;
    }
    return count;
}



void reverse(char name[],int n){
    int l =0 ;
    int e = n -1;
    while(l<e){
        swap(name[l++],name[e--]);

    }
}
int main()
{   char name[20];
    cin>> name;
    int len = get_length(name);
    reverse(name , len);
    cout<< name;


    return 0;
}