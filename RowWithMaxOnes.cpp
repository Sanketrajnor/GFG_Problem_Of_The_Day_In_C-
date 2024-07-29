int currColumn = arr[0].size()-1,currRow = 0,ans = -1;
        while(currColumn >= 0 and currRow < arr.size()){
            while(currColumn >= 0 and arr[currRow][currColumn]==1){
                ans = currRow;
                currColumn--;
            }
            if(currColumn < 0){
                return currRow;
            }
            else{
                currRow++;
            }
        }
  return ans;
