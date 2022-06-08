#include "diabetesTracker.h"

#include <iostream> //Used for cout (Output to command line)
#include <fstream> //Used for file output.
#include <ctime>

//Current date and time based on system date and time.
time_t now = time(0);

//Convert time to string form.
char* dt = ctime(&now);

//Local function that takes an output stream and a diabetesTracker object, which gets fed into an output stream.
std::ostream &operator<<(std::ostream &out, const diabetesTracker &diabetesObject) {
    out << "Time: "<< dt;
    out << "Ketones: " << diabetesObject.ketones() << " mmol/L" << std::endl;
    out << "Blood Sugar: " << diabetesObject.bloodSugar() << " mmol/L" << std::endl;
    return out;
}

int main() {
    std::cout << "Current Date and Time is: " << dt << std::endl;

    // Test input data.
    diabetesTracker dt1(6.4, 0.2);

    //Test print member function of the class.
    dt1.print(dt1);

        //Declare an output stream variable to operate on txt file.
        std::ofstream outfile;

        //Use variable to attempt to open specific results .txt file.
        //If file is not located, then one will be created.
        outfile.open("diabetes-results.txt");

        std::cout << "...Saving" << std::endl;

        //Verify that the file is opened using is_open using outfile member function.
        (outfile.is_open());
        {

            //Process the file.
            operator<<(outfile, dt1);

            //Close the file.
            outfile.close();

            std::cout << "...Saved";
        }

        //OS exit flag to ensure that the program compiled correctly.
        return 0;
    }




