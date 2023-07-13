//Code
int gcd(int A, int B){
      if(B==0)
          return A;
          
       return gcd(B,A%B);
  }
  
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> v;
    
        long long g;
        g=gcd(A,B);
        long long l=(A*B)/g;
        v.push_back(l);
        v.push_back(g);
        return v;
        
    }
