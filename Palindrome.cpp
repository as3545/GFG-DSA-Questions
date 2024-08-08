	string is_palindrome(int n)
		{
		    // Code here.
		    int sum=n;
		    int reverse=0;
		    while(n!=0){
		        reverse=reverse*10+n%10;
		        n/=10;
		    } if(sum==reverse){
		        return "Yes";
		    } else {
		        return "No";
		    }
		}
