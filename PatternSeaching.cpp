class Solution{
public:
 
int search(string text, string pat)
{
    // Your code goes here
    int t=text.size();
    int p=pat.size();
    
    for(int i=0;i<t;i++){
        int count=0;
        if(text[i]==pat[0]){
        for(int j=0;j<p;j++){
            if(text[i+j]==pat[j])
                count++;
            else
                break;
        }
        
         if(count==p){
            return 1;
         }
        }
    }
    return 0;
    }
};
