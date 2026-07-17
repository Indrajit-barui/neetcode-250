class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
 if((ch >= 'A' && ch <= 'Z') ||
   (ch >= 'a' && ch <= 'z') ||
   (ch >= '0' && ch <= '9'))
{
    if(ch >= 'A' && ch <= 'Z'){
        temp+=ch+32;
    }
    else{
  temp+=ch;
    }
  
}
           
        }

        int start=0;
        int end=temp.size()-1;
        while(start<end){
          if(temp[start] !=temp[end]) return false;
          end--;
          start++;
        }
        return true;
    }
};
