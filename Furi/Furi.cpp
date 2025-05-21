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

    std::string  user;

        for (int r = 0; r < 3;)
        {

             int e = 0 + rand() % 2;
             
            std::cin >> user;

            if (user == "cumen" && bot[e] == "noj" || user == "noj" && bot[e] == "bum" || user == "bum" && bot[e] == "cumen")
            {

                std::cout << "hil\n";
                r++;
            }
            else if (user == "noj" && bot[e] == "cumen" || user == "bum" && bot[e] == "noj" || user == "cumen" && bot[e] == "bum")
            {


                std::cout << "kill\n";


            }
            else
            {

                std::cout << "rep\n";
            }

            std::cout << bot[e] << std::endl;
        }



   
  /*  char a[] = { 'tam' };
    char d[] = { 'plav' };

    char g[] = { 'h','e','r' };*/

     /*   for (g=0 ; g<3; g++)
    { 

        std::cout << g[0];




    }*/
    
    /*for (int f = 0;f < 3; f++)
    {
        std::cout << g[f];
    }*/


}

