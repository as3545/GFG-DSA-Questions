/*
Display longest name
*/
//Code
public:
    string longest(string names[], int n)
    {
        int max=0;
        for(int i=0;i<n;i++){
            if(names[i].size()>names[max].size()){
                max=i;
            }
        } return names[max];
    }
};
