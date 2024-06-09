class Solution {
public:
    int reverse(long x) {
        long long sign = x < 0 ? -1 : 1;
        x = abs(x);
       long revnum = 0;
       while(x>0) {
        long d = x % 10;
        revnum = (revnum*10)+d;
        x = x/10;
       }
       revnum *= sign;
     if (revnum>INT_MAX||revnum<INT_MIN){
         return 0;
     }
    
     return int (revnum);
    }
};

/*class Solution {
public:
    int reverse(int x) {
        int sign = x < 0 ? -1 : 1;
        x = abs(x);
        
        long revnum = 0;
        while (x > 0) {
            int d = x % 10;
            revnum = (revnum * 10) + d;
            x = x / 10;
        }
        
        revnum *= sign;
        
        if (revnum > INT_MAX || revnum < INT_MIN) {
            return 0;
        }
        
        return static_cast<int>(revnum);
    }
};*/
