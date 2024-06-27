
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;
        int maxscore =0;
        int n =tokens.size();
        sort(tokens.begin(), tokens.end());
        int i =0; int j =n-1;
        while(i<=j){
            if(power>=tokens[i]){
                power =  power -tokens[i];
                score++;
                maxscore = max(maxscore, score);
                i++;
             
            }
            else if(score>=1)
            {
                power = power+tokens[j];
                score--;
                j--;
                
            }
            else{
                break;
            }
        }
         return maxscore;
    }
};