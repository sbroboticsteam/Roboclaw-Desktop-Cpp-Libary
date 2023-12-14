#include <stdio.h>


#include "RoboClaw.h"
#include "serialib.h"

#include <cstring>

int main()

    //on windows
    //for serial ports above "COM9", we must use this extended syntax of "\\.\COMx".
    //also works for COM0 to COM9.


{

	RoboClaw a1("COM3", 1000);



    a1.begin(9600);


}