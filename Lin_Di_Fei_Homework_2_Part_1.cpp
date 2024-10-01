/*Di Fei Lin
Homework 1 part 1 
10/1/24
*/


#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main(){
    int month;// identify the month 
    int day;//identify the day

    cout<<"What is your month and day in numerical form (ie 3 22 for March 22nd)?";
    cin>>month>>day;//ask and takes the input for the months and the day 

    if (month == 12){//season for December
        if(day>=22){
            cout<<"It's now winter!";
        }
        else{
            cout<<"It's now autumn!";
        }
    }

    if (month == 1 || month == 2){//season for January and February 
        cout<<"It's now winter!";
    }

    if (month == 3){//season for March
        if (day>=21){
            cout<<"It's now spring!";
        }
        else{
        cout<<"It's now winter!";
        }
    }

    if (month == 4 || month == 5){//season for April and May 
        cout<<"It's now spring!";
    }

    if (month == 6){//season for June
        if (day>=20){
            cout<<"It's now summer!";
        }
        else{
        cout<<"It's now spring!";
        }
    }

    if (month == 7 || month == 8){//season for July and August
        cout<<"It's now summer!";
    }

    if (month == 9){//season for September
        if (day>=23){
            cout<<"It's now autumn!";
        }
        else{
        cout<<"It's now summer!";
        }
    }

    if (month == 10 || month == 11){//season for October and November
        cout<<"It's now autumn!";
    }

}

/*What is your month and day in numerical form (ie 3 22 for March 22nd)?3 22
It's now spring!*/