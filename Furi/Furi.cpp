// Furi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void test() {

    std::cout << "HI\n";


}


int main(){

    srand(time(0));
 //
    std::string bot[3] = { "cumen", "noj", "bum" };
        
             int f = 0;
             int user = 1;

        while(true)
        {

             int bon = 0+rand()%2;
       
            std::cin >> user;

            if (user == 1 && bot == 2 || user == 2 && bot == 3 || user == 3 && bot == 1)
            {

                std::cout << "hil\n";
                
            }
            else if (user == 2 && bot == 1 || user == 3 && bot == 2 || user == 1 && bot == 3)
            {


                std::cout << "kill\n";


            }
            else
            {

                std::cout << "rep\n";
            }
                f++;

            std::cout << bot << std::endl;
        }



   
    char a[] = { 'tam' };
    char d[] = { 'plav' };

    char g[] = { 'h','e','r' };

     /*   for (g=0 ; g<3; g++)
    { 

        std::cout << g[0];




    }*/
    
    for (int f = 0;f < 3; f++)
    {
        std::cout << g[f];
    }


}

