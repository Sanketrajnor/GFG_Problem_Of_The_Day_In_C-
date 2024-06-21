 string compareFrac(string str) {
       double val1=0,sum1=0,sum2=0;
       bool b=false;
       int ind=-1;
       for(int i=0;i<str.size();i++){
           if(str[i]==' ')continue;
           if(str[i]>=48&&str[i]){
               val1=val1*10+(str[i]-'0');
           }
           if(str[i]=='/'&&b==false){
               sum1=val1;
               val1=0;
           }
           if(str[i]==','){
               sum1=sum1/val1;
               b=true;
               val1=0;
               ind=i;
           }
           if(str[i]=='/'&&b==true){
               sum2=val1;
               val1=0;
           }
       }
      
       sum2=sum2/val1;
       if(sum1==sum2)return "equal";
       if(sum1>sum2){ return str.substr(0,ind);}
       return str.substr(ind+2,str.size());
    }
