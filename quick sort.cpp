class Solution{
 public:
    // void swap(int *a,int *b){
    //     int temp=*a;
    //     *a=*b;
    //     *b=temp;
    // }
    void swap(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        int p;
        if(low<high){
        p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
      int pivot=arr[high];
      int i=low-1;
      for(int j=low;j<high;j++)
      {
          if(arr[j]<pivot){
              i++;
              swap(&arr[i],&arr[j]);
            }
       }
       swap(&arr[i+1],&arr[high]);
        
        return (i+1);
          
      
      
    }
};
