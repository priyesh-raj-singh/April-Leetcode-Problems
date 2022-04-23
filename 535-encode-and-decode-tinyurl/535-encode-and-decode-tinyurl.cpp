class Solution {
public:
map<string,string> m;
int num = 0;

string encode(string longUrl) {
string ans = "http://tinyurl.com/" + to_string(num);
num++;
m[ans] = longUrl;
return ans;
}

			
string decode(string shortUrl) {
return m[shortUrl];
			}
		};