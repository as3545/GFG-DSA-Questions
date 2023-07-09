/*

Print alternate elements of an array

*/

//Code
void print(int ar[], int n)
{
    int alter=0;
    // code here
    for(int i=0;i<n;i++){
        if((i-1)%2!=0){
        cout<<ar[i]<<" ";
        }
        
    } 
    
    
}
