class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> v;
        stringstream ss(s);
        string word;
        while(ss>>word){
            if(isdigit(word[0]))
                v.push_back(stoi(word));
        }
        
        for(int i = 1 ; i<v.size() ; i++){
            
            if(v[i-1]>=v[i])
                return false;
        }
        return true;
        
    }
};