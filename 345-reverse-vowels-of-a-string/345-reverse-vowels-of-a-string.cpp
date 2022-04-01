class Solution {
public:
    string reverseString(string &s){
         vector<int> v;
        for(int i=0 ; i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                v.push_back(i);
        }
        int start = 0 ;
        int end = v.size()-1;
        while(start<end){
            swap(s[v[start]] , s[v[end ]]);
            start++;
            end--;
        }
        return s;
    }
    string reverseVowels(string s) {
       reverseString(s);
        return s;
    }
};