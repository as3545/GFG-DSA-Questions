class Solution
{ public:
int common(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        return common(b,a%b);
    }
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	 int sum=arr[0];
         for(int i=1;i<N;i++){
             sum=common(sum,arr[i]);
         }
         return sum;
    }
};
