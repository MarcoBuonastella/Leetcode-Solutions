class Solution {
public:
    int reverse(int x) {
        
        
        if(x > pow(2,31) - 1|| x <= pow(-2,31)){return 0;}
            
        //make copy
        int xcopy = x;
        int remainder = 0;
        if(xcopy < 0){
            xcopy = (int) xcopy * -1;
        }
        
        //output
        int output = 0;
         
        while(xcopy > 0){
            
            remainder = xcopy % 10;
            xcopy = xcopy/10;
            int quotient = xcopy;
            int counter = 0;
            
            //determine how many time to multiply remainder by 10
            while(quotient > 0){
               counter++;
               quotient = quotient/10;
            }
            
            output += remainder*pow(10,counter);
            
        }
        
        if(x < 0){
            output = output*-1;
        }
        
        
        //check overflow
        if(x > 0 && output < 0 || x < 0 && output > 0){return 0;}
        
        return output;
    }
};