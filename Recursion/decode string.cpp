
#include <bits/stdc++.h>
using namespace std;
void decodeString(string ques, string asf){
    if(ques.size()==0){
        cout<<asf<<endl;
        return;
    }else if(ques.size()==1){
        char c = ques.at(0);
        if(c=='0'){
            return;
        }else{
            int chv = c - '0';
            char code = (char)('a'+chv-1);
            asf = asf + code;
            cout<<asf<<endl;
        }
    }else{
            char ch1 = ques.at(0);
            string roq = ques.substr(1);
            if(ch1=='0'){
            return;
            }else{
                int chv = ch1 - '0';
                char code = (char)('a' + chv-1);
                decodeString(roq, asf+code);
            }
            
            string ch12 = ques.substr(0, 2);
            string roq2 = ques.substr(2);
            int ch12V = stoi(ch12);
            if(ch12V<=26){
                char code = (char)('a' + ch12V-1);
                decodeString(roq2, asf+code);
            }
        }
    }

int main()
{
    decodeString("12", "");
    return 0;
}
