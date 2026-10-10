class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i;
        int max=0;
        for(i=0;i<sentences.size();i++)
        {
            int space=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                    space++;
            }
            int words = space+1;
            if(words>max)
                max=words; 
        }
        
        return max;


    }
};