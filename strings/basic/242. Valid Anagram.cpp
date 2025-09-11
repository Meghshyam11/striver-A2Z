//using sort
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length()) return false;

        for(int i=0;i<max(s.length(),t.length());i++){
            if(s[i]!=t[i]){
                return false;
            }
        }        
        return true;
    }
};


//using `   hashmap

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> charc1;
        unordered_map<char,int> charc2;

       

        for (char a : s){
            charc1[a]++;
        }

         for (char b : t){
            charc2[b]++;
        }

        if( charc1==charc2){
            return true;
        }

      
      return false;
    }
};