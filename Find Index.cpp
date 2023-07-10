/*

*/
//Code
public:
    vector<int> findIndex(int a[], int n, int key)
    { vector<int>v;
        //code here.
        
        for(int i=0;i<n;i++){
            if(a[i]==key){
                v.push_back(i);
            } 
        } 
        if(v.empty()){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        } else {return {v.front(),v.back()};
    } }
  
};
