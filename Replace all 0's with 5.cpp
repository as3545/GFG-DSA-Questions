/*
Replace the digit with 0 
*/
//Code
int convertFive(int n) {
    // Your code here
    std::string ntost=std::to_string(n);
    for(char &c : ntost){
        if(c=='0')
        c='5';
    } int result=std::stoi(ntost);
    return result;
}
