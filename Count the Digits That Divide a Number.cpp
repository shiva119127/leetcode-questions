class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int c=0;
        while(temp>0){
            int s=temp%10;
            if( s!=0 && num%s==0){
                c++;
            }
            temp/=10;
        }
        return c;
    }
};