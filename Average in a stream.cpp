/*

  */

//Code

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	   vector<float> avgStream;
	    double avg=0,sum=0;
	    
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        avg=sum/(i+1);
	        setprecision(2);
	        avgStream.push_back(avg);
	    }
	    
	    return avgStream;
	}
};
