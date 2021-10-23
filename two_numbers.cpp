#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//This is a template
int main() {
    ifstream inFile; //Input file definition (you have to create it, see included input.txt)
    ofstream outFile; //Output file definition (to be created automatically)
    inFile.open("input.txt");
    outFile.open("output.txt");
    int value1, value2; //Variables to hold the two numbers
    int sum=0; // To hold the sum
    int counter = 1; //To help printing according to formatting
    while(inFile){  //While the input.txt can be read in
        inFile >>value1 >>value2; //read 1st number into value1 and 2nd into value2
        if(value1==0 && value2==0) { //to break at line 0 0
            break;
        }
        sum = value1+value2; //Sum
        outFile<<"Sum "<<counter<<" :"<<sum<<endl; //store line into file
        counter++; //increment counter
        sum=0; //zero the sum again for the next line
    }
    inFile.close();
    outFile.close();

return 0;
}
