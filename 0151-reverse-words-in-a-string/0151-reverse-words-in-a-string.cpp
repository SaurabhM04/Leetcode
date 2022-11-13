class Solution {
public:
      string reverseWords(string s) {
          int k=s.size()-1;
              while(k>0 && s[k--]==' ')
                  s.pop_back();
          k=0;
          while(k<s.size() && s[k]==' ')
                  k++;
          s.erase(0,k);
          reverse(s.begin(),s.end());
          int j=0;
          for(int i=0; i<s.size();i++)
          {
              if(s[i]==' ')
              {
                  reverse(s.begin()+j,s.begin()+i);
                      i++;
                  j=i;
                  int l=i,jk=0;
                  while(l<s.size() && s[l++]==' ')
                      jk++;
                  s.erase(i,jk);
              }
          }
           reverse(s.begin()+j,s.end());
          
          return s;
    }
  //  string reverseWords(string s) {
//         int i=0; 
//         int j=s.size()-1;
//         while(i<j){
//             swap(s[i],s[j]);
//             i++;
//             j--;
//         }
//         string dead="";
//         string str="";
//         for(int i=0; i<s.size(); i++){
//             if(s[i]==' ' && s[i+1]==' ')
//                 continue;
//             if(s[i]!=' '){
//                 str+=s[i];
//             }
//             else{
//                 reverse(str.begin(),str.end());
//                 dead+=str+" ";
//                 str="";
//             }
//         }
//         reverse(str.begin(),str.end());
//         dead+=str;
//         int k=0;
//         for(int i=0; i<dead.size(); i++){
//             if(dead[i]==' ')
//                 k++;
//             else
//                 break;
//         }
//         for(int i=0; i<dead.size(); i++){
//             if(dead[dead.size()-i-1]==' ')
//              dead.pop_back();
//             else
//                 break;
//         }
//         dead.erase(0,k);
       
//         return dead;
//     }
   
};