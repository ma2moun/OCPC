#include <iostream>
#include<fstream>
#include<cmath>

int main() {

std::fstream partyFile;
partyFile.open("party.in");
int x1, y1, x2, y2, carSpeed, SE, SP, dE, dP;

while (partyFile>>x1>>y1>>x2>>y2>>carSpeed>>SE>>SP>>dE>>dP)
    {
       //calculate distance
       int dist = sqrt((x1-x2)^2+(y1-y2)^2);
       //std::cout<<"Distance is: "<<dist<<std::endl; //debugging

       //calculate time (time = dist/speed)
       //First cast the integers to double to avoid having 0 as a result

       double timeHome = static_cast<double>(dist)/static_cast<double>(carSpeed);
       //std::cout<<"time to arrive home is: "<<timeHome<<std::endl; //debugging

        int endP = SP+dP;
        int endE = SE+dE+timeHome;
       if(((SE<SP && SP<endE) || ((SP<SE ||SP>SE) && endP<endE)) && dP<(dE+timeHome)){std::cout<<"YES\n";}
         else {std::cout<<"NO\n";}
    }


partyFile.close();
return 0;
}
