class Solution {
public:
    int countValidWords(string sentence) {
        string s;
        int count =0;
        bool specialcharacters = false;
        bool ishyphen =false;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]=='!' || sentence[i]=='.' || sentence[i]==',')
            {
                if((s.size()!=0 && s[s.size()-1]=='-') || specialcharacters==true)
                {
                    s.clear();
                    while(i<sentence.size() && sentence[i]!=' ')
                    {
                        i++;
                    }
                    i--;
                    continue;
                }
                s.push_back(sentence[i]);
                specialcharacters=true;
            }
            else if(sentence[i]=='-')
            {
                if(s.size()==0 || (s.size()!=0 && (s[s.size()-1]<97 || s[s.size()-1]>122)) || ishyphen==true)
                {
                    s.clear();
                    while(i<sentence.size() && sentence[i]!=' ')
                    {
                        i++;
                    }
                    i--;
                    continue;
                }
                s.push_back(sentence[i]);
                ishyphen=true;
            }
            else if(sentence[i]>=48 && sentence[i]<=57)
            {
                s.clear();
                while(i<sentence.size() && sentence[i]!=' ')
                {
                    i++;
                }
                i--;
                continue;
            }
            else if(sentence[i]==' ')
            {
                specialcharacters=false;
                ishyphen = false;
                if(s.size()!=0 && s[s.size()-1]=='-')
                {
                    s.clear();
                    continue;
                }
                else if(s.size()==0)
                {
                    continue;
                }
                else
                {
                    count++;
                    s.clear();
                }
            }
            else
            {
                if(s.size()!=0 && specialcharacters==true)
                {
                    s.clear();
                    while(i<sentence.size() && sentence[i]!=' ')
                    {
                        i++;
                    }
                    i--;
                    continue;
                }
                s.push_back(sentence[i]);
            }
        }
        if(sentence[sentence.size()-1]!=' ')
        {
            if(s.size()!=0 && s[s.size()-1]!='-')
            {
                count++;
            }
        }
        return count;
    }
};