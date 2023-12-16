class Solution {
public:
    bool checkPrime(int val){
        for(int i=2;i*i<=val;i++){
            if(val%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        if(n==0 || n==1){
            return 0;
        }
        int count =0;
        for(int i=2;i<n;i++){
            if(checkPrime(i)){
                count+=1;
            }
        }
        return count;
    }
};

// Sieve of Eratosthenes (optimized way)
class Solution {
public:
    
    int countPrimes(int n) {
        if(n==0 || n==1){
            return 0;
        }
         int count =0;
        vector<int> prime (n, 0);
    for(long long int i=2;i<n;i++){
        if(prime[i]==0){
            for(long long int j = i*i;j<n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(long long int k = 2;k<n;k++){
        if(prime[k]==0){
            count++;
        }
    }
        return count;
    }
};