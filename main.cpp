#include <iostream>
#include <string>

int main(){
     using namespace std;
     char table[24] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'r', 's', 't', 'u', 'w', 'x', 'y', 'z'};
     string input;
     cout << "give the string: ";
     cin >> input;
     int securenumber;
     cout << "give the number: ";
     cin >> securenumber;
     long longofthestr = input.length();
     long bufferone = 0;
     if (longofthestr <= 0){return 1;}
     char buffertwo = table[1];          
     int bufferthree = securenumber;
     long bufferfaja = 0;
     char output[longofthestr];
     long bufferjprdl = 0;
     while (bufferone++ != longofthestr){
          
          if (bufferthree >= 23)
               bufferthree = 1;
          else ++bufferthree;
          output[bufferjprdl++] = rot(buffertwo, bufferthree);
     }




     return 0;}

int rottrue(char strtrue, int howtrue, int pierd){
     if ((howtrue + pierd) >= 24){
          return strtrue;
     }
     int buffertrueone = 0;
     pierd = pierd + howtrue;
     while(buffertrueone != 24){
          strtrue = table[pierd];}
     return strtrue;
}

int rot(char str, int how){
     char rotated;
     int bufferrotone = 0;
     bool bufferrottwo = false;
     char bufferrotpierdol;
     while(bufferrotone != 24){
          if (table[bufferrotone] == str)
               bufferrottwo = true;
          bufferrotpierdol = bufferrotone;}
     if (bufferrottwo == true){rotated = rottrue(str, how, bufferrotpierdol); return rotated;}
     else return str;
     }