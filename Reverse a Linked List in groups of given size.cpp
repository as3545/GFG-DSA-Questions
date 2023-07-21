//Code
 public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        vector<int>v;
        struct node* curr=head;
        while(curr){
            v.push_back(curr->data);
            curr = curr->next;
        }
        int j=0,t=k,n=v.size();
        for(int i=0; i<n/k; i++){
            for(int j=0; j<k/2; j++)swap(v[i*k+j],v[i*k+k-j-1]);
        }
        int p=(n/k)*k, o=(n-p)/2+p;
        for(int i=0,j=p; j<o; j++,i++){
            swap(v[j],v[n-i-1]);
        }
        
        curr=head;
        int i=0;
        while(curr){
            curr->data = v[i];
            i++;
            curr = curr->next;
        }
        return head;
    }
};
