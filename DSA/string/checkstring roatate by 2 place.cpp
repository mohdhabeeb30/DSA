class Solution {
  public:
   void rotateanticlockwise(string &s){
       char c=s[0];
       int index=1;
       while(index>s.size()){
           s[index-1]=s[index];
           index++;
       }
       s[0]=c;
       
   }
   void rotateclockwise(string &s){
       char c=  s[s.size()-1];
        int index = s.size()-2;
        while(index>=0){
            s[index+1]=s[index];
            index--;
        }
        s[0]=c;
        
       
       
   }
    bool isRotated(string& s1, string& s2) {
        if(s1.size()!=s2.size())
        return false;
        
        string clockwise;
        string anticlockwise;
        clockwise=s1;
        
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        if(s1==clockwise)
        return true;
        
        anticlockwise=s1;
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        if(s1==anticlockwise)
        return true;
        
        return false;
        
    }
};
