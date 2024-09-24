//Skornprobst's code to read a list of numbers (spaced with nothing else but numbers) from fahrenheit.txt
// and convert that to celcius. It then outputs that to celcius.txt.   09/24/2024 revision
#include <iostream>    //cin/cout
#include <fstream>     //file IO
#include <iomanip>     //things to screw with formating

using namespace std;   // no more putting std:: behind cin and out                           

int main()                                        
{
    //Sets up memory to hold data
    ifstream infile;
    ofstream outfile;
    float in, out;                                                  

    //Opens both files and formats the output to display numbers using decimals, trailing 0s, and two decimals
    infile.open("fahrenheit.txt");
    outfile.open("celcius.txt");
    outfile << fixed << showpoint << setprecision(2);

    //Reads a number from fahrenheit.txt, converts it, then places that result into celcius.txt infinitely until all numbers have been processed.
    while (infile >> in)
    {
         out = (in - 32) * 5 / 9;
         outfile << out << " ";
    }
      
    //Confirmation message and closing files
    cout << "Conversion Complete";
    infile.close();
    outfile.close();
}


