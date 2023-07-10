/*

*/
//Code

public:
    string modify (string s)
    {
        //code here.
        string word="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                word +=s[i];
            }
        } return word;
    }
};
