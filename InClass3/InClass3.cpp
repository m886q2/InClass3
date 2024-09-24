
#include <iostream> 
#include <fstream>
#include <iomanip>
#include <string> 


using namespace std;                              //Line 2 

int main()                                        //Line 3
{
    ifstream infile;
    ofstream outfile;
    double f1, f2, f3, f4, f5;
    double c1, c2, c3, c4, c5;


    infile.open("fahrenheit.txt");
    outfile.open("celcius.txt");
    outfile << fixed << showpoint;                  //Step 4
    outfile << setprecision(2);
    infile >> f1 >> f2 >> f3 >> f4 >> f5;
    c1 = (f1 - 32) * 5 / 9;
    c2 = (f2 - 32) * 5 / 9;
    c3 = (f3 - 32) * 5 / 9;
    c4 = (f4 - 32) * 5 / 9;
    c5 = (f5 - 32) * 5 / 9;
    outfile << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5;
   // cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5;
    infile.close();
    outfile.close();

    return 0;
}


