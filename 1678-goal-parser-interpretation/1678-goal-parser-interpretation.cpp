class Solution {
public:
    string interpret(string command) {
        string result = "";
        int i;
        for(i=0;i<command.size();i++)
        {
            if(command[i]=='G')
            {
                result+='G';
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                result+='o';
                i++;
            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')')
            {
                result+= "al"; //double quotes for appending string 
                i=i+3;
            }
            

        
        }
        return result;
        //return result;
        
    }
};