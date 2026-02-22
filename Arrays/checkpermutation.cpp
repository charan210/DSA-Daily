


class Solution {
public:
    int fact[10];

    Solution() {
        fact[0] = 1;
        for(int i=1; i<10; i++) {
            fact[i] = i * fact[i-1];
        }
    }

    bool isDigitorialPermutation(int n) {
        int pelorunaxi = n;  
        int temp = n;
        long long sum = 0;
        string digits;
        while(temp>0){
            int digit=temp%10;
            sum+=fact[digit];
            digits.push_back('0'+digit);
            temp/=10;
        }
      sort(digits.begin(),digits.end());
        do{
            if(digits[0]=='0') continue;
            long long perval=stoll(digits);
            if(perval==sum) return true;
            
        }while(next_permutation(digits.begin(),digits.end()));


        return false;
    }
};
