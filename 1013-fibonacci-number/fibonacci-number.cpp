class Solution {
public:
    int fib(int n) {
        /*if (n==0){
            return 0;
        }
        if (n==1){
            return 1 ;
        }
        return fib(n-1)+fib(n-2);*/
        int current_element = 0;
        int slast =0;
        int last = 1 ;
        if(n==0){
            return 0 ;
        }
        if (n== 1){
            return 1;
        }
        for ( int i = 2 ; i <=n ; i++){
           current_element = slast + last ;
            slast = last;
            last = current_element;
            

        }
        return current_element;
    }
};