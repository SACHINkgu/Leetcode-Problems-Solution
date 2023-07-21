class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r= s.length() -1;
        string temp ="";
        string ans ="";
        // for removing space present in outer left
        while(s[l] == ' '){
            l++;
        // for removing space present in outer right

        }
        while(s[r]== ' '){
            r--;
        }
        
        while(l<=r){
         
           

            if(s[l] != ' '){
                temp +=s[l];
            }
            //for removing the space present in between the words
            else if(s[l]==' ' && s[l-1]==' '){
                l++;
                continue;
            }
            else if( s[l] == ' ' ){
                if(ans !=""){
                    ans = temp + " " + ans;
                }
                else{
                    ans =temp;
                }
                temp="";
            }
            l++;
        }
        if(temp!=""){
            if(ans!="") {
            ans = temp + " " + ans;
            }
            else 
            {
                ans = temp;
            }
            
        }
        return ans;
    }
};