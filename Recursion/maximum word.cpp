class Solution {
public:
    int solution(vector<string> words, unordered_map<char, int>freqMap, vector<int> score, int index){
        if(index==words.size()){
            return 0;
        }
        int notPick = 0+solution(words, freqMap, score, index+1);   //not included
        
//         to include
        int particularScore = 0;
        string particularWord = words[index];
        bool flag = true;
        for(int i=0;i<particularWord.size();i++){
            char ch = particularWord.at(i);
            
            if(freqMap[ch]==0){
                flag = false;
            }
            freqMap[ch]--;
            particularScore +=score[ch-'a'];
        }
        int pick =0;
        if(flag){
            pick = particularScore + solution(words, freqMap, score, index+1);
        }
        for(int j=0;j<particularWord.size();j++){
            char ch = particularWord.at(j);
            freqMap[ch]++;
        }
        return max(notPick, pick);
    }
    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char, int>freqMap;
        for(auto a: letters){
            freqMap[a]++;
        }
        return solution(words, freqMap, score, 0);
    }
};