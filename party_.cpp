#include <iostream>
#include<fstream>
#include <string>
#include <typeinfo>

#define READ_LINES 5

int main() {

char inArray[READ_LINES][100];

std::ifstream myFile;
myFile.open("party.in");

int x1,x2, y1, y2, carSpeed, EvStart, PrepStart, EvDur, PrepDur;

int counter = 0;
if(myFile.is_open()) {

    std::string line;
    while(!myFile.eof() && (counter<READ_LINES)){
        myFile.getline(inArray[counter], 100);
        counter++;
    }
    //for (int i=0;i<counter;i++) {
      //  std::cout<<inArray[i]<<std::endl;

 //COMPLETE THE EXTRACTION OF INTEGERS FROM EACH LINE...


}



//float dis =
myFile.close();

return 0;
}
