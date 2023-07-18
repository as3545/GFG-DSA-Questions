//Code
int minute(int minutes)
    {
        return minutes*6;
    }
    double hour(int hours,int minutes)
    {
         double answer=0;
         answer+=hours*30;
         answer+=(double)minutes/2;
    }
    int getAngle(int H , int M) 
    {
        double answer=abs(minute(M)-hour(H,M));
        return min(answer,360-answer);
    }
