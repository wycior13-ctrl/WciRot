//stupid non-sense code
//wycior13-ctrl
#include <iostream>
#include <string>

int main(){
     using namespace std; //table of used characters
     char table[24] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'r', 's', 't', 'u', 'w', 'x', 'y', 'z'};
     string input;
     cout << "give the string: "; //please for the input string
     cin >> input;


     int securenumber; //please for the rot number
     cout << "give the number: ";
     cin >> securenumber;


     long longofthestr = input.length();


     long bufferone = 0; //making buffer and more code thait im self not understand
     if (longofthestr <= 0){return 1;}
     char buffertwo = table[1];          
     int bufferthree = securenumber;
     long bufferfaja = 0;
     char output[longofthestr];
     long bufferjprdl = 0;


     while (bufferone++ != longofthestr){ //rotating
          
          if (bufferthree >= 23)
               bufferthree = 1; //making the rot number one bigger on every character
          else ++bufferthree;
          output[bufferjprdl++] = rot(buffertwo, bufferthree);
     }




     return 0;}

int rottrue(char strtrue, int howtrue, int howfirst){
     if ((howtrue + howfirst) >= 24){ //im lazy so im return here the self character
          return strtrue;
     }
     int buffertrueone = 0; //here im not understand it the next time
     howfirst = howfirst + howtrue;
     while(buffertrueone != 24){
          strtrue = table[howfirst];}
     return strtrue;
}

int rot(char str, int how){ //here we rotate
     char rotated; //rotating buffer
     int bufferrotone = 0; //next buffers
     bool bufferrottwo = false;
     char bufferrotthree;

     while(bufferrotone != 24){
          if (table[bufferrotone] == str) //if the character is in the table then rotate it
               bufferrottwo = true;
          bufferrotthree = bufferrotone;} //here im... im self not understand it
     if (bufferrottwo == true){rotated = rottrue(str, how, bufferrotthree); return rotated;}
     else return str;
     }

//and here you see: this is stupid code that not work
//c++