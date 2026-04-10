class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        typedef long long ll; // shorter name for long long
        int M =1e9+7;
       ll xXORa=0;
       ll xXORb=0;
        // from 49th bit to nth bit
        for(ll i=49;i>=n;i--){
            bool a_ithbit=((a>>i)&1)>0; // i th bit nikal rhe hain 
             bool b_ithbit=((b>>i)&1)>0;
             if(a_ithbit==true){
                xXORa=( xXORa^(1ll<<i)); // calculate xor le rhe hain
             }
             if(b_ithbit==true){
                xXORb=( xXORb^(1ll<<i));
                
             }
        }
        // now from n-1th bit to 0 bit
        for(ll i=n-1;i>=0;i--){
            int a_ithbit=((a>>i)&1);
             int b_ithbit=((b>>i)&1);
             if(a_ithbit==b_ithbit){
                xXORa=( xXORa^(1ll<<i));
                xXORb=( xXORb^(1ll<<i));
                continue;
             }
             if(xXORa > xXORb){
                xXORb=( xXORb^(1ll<<i));

             }
             else{
                xXORa=( xXORa^(1ll<<i));

             }

        }
        xXORa=(xXORa%M);
        xXORb=(xXORb%M);
        return (xXORa * xXORb)%M;
    }
};
