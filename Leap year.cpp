//Code
int isLeap(int N){
        //code here
    if (N % 400 == 0) {
        return 1;
    }
    // Check if the year is divisible by 100 (not a leap year unless it's divisible by 400)
    else if (N % 100 == 0) {
        return 0;
    }
    // Check if the year is divisible by 4 (leap year)
    else if (N % 4 == 0) {
        return 1;
    }
    // Otherwise, it's not a leap year
    else {
        return 0;
    }
}
