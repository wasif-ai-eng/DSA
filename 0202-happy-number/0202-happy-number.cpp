class Solution {
public:
long long sq(long long n) {
        long long sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int long long slow=n;
        int long long fast=n;
        while(true){
            slow=sq(slow);
            fast=sq(sq(fast));
            if(slow==fast) {
                slow=n;
                break;
            } 
        }
        while(slow!=fast){
            slow=sq(slow);
            fast=sq(fast);
        }
        if(fast==1) return true;
        else return false;
    }
};