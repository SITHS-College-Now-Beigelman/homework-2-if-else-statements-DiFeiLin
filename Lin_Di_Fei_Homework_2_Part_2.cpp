/*Di Fei Lin
Homework 1 part 2 
10/1/24
*/


#include <iostream>
#include <string>
#include <iomanip>


using namespace std;


int main(){
    double score;
    double firstScore;
    double secondScore;
    double thirdScore;
    double fourthScore;
    double fifthScore;
    double sixthScore; //creating variables that basically acts like a list, first number should be largest and second would be the second largest

    cout<<"What is a judge's score (none repeating)?";
    cin>>score;//asks the user for the first number, appending it to the first number 

    firstScore = score;

    cout<<"What is a judge's score (none repeating)?";//asks the user for the second  number
    cin>>score;

    if (score>=firstScore){//if the number is larger than whatever the largest number is at the time (the variable firstScore) it shall make the previous first variable to the second, etc, and whatever the new number is 
        secondScore = firstScore;
        firstScore = score;
    }
    else {//if its not the smallest number, it shall be placed into the one previous to the smallest number
        secondScore = score;
    }

    cout<<"What is a judge's score (none repeating)?";//ask the user for the third number 
    cin>>score;
    if (score>=firstScore){//if the number is larger than whatever the largest number is at the time (the variable firstScore) it shall make the previous first variable to the second, etc, and whatever the new number is shall be the new first score
        thirdScore = secondScore;
        secondScore = firstScore;
        firstScore = score;
    }
    else if (score<=secondScore){
        thirdScore = score;
    }
    else{//if its not the smallest number, it shall be placed into the one previous to the smallest number
        thirdScore = secondScore;
        secondScore = score;
    }

    cout<<"What is a judge's score (none repeating)?";//ask the user for the fourth number 
    cin>>score;

    if (score>=firstScore){//if the number is larger than whatever the largest number is at the time (the variable firstScore) it shall make the previous first variable to the second, etc, and whatever the new number is shall be the new first score
        fourthScore = thirdScore;
        thirdScore = secondScore;
        secondScore = firstScore;
        firstScore = score;
    }
    else if (score<=thirdScore){
        fourthScore = score;
    }
    else{//if its not the smallest number, it shall be placed into the one previous to the smallest number
        fourthScore = thirdScore;
        thirdScore = score;
    }

        
    cout<<"What is a judge's score (none repeating)?";//ask the user for the fifth number 
    cin>>score;

    if (score>=firstScore){//if the number is larger than whatever the largest number is at the time (the variable firstScore) it shall make the previous first variable to the second, etc, and whatever the new number is shall be the new first score
        fifthScore = fourthScore;
        fourthScore = thirdScore;
        thirdScore = secondScore;
        secondScore = firstScore;
        firstScore = score;
    }
    else if(score<=fourthScore){
        fifthScore = score;
    }
    else{//if its not the smallest number, it shall be placed into the one previous to the smallest number
        fifthScore = fourthScore;
        fourthScore = score;
    }

    cout<<"What is a judge's score (none repeating)?";//ask the user for the sixth number 
    cin>>score;

    if (score>=firstScore){//if the number is larger than whatever the largest number is at the time (the variable firstScore) it shall make the previous first variable to the second, etc, and whatever the new number is shall be the new first score
        sixthScore = fifthScore;
        fifthScore = fourthScore;
        fourthScore = thirdScore;
        thirdScore = secondScore;
        secondScore = firstScore;
        firstScore = score;
    }
    else if (score<=fifthScore){
        sixthScore = score;
    }
    else{//if its not the smallest number, it shall be placed into the one previous to the smallest number
        sixthScore = fifthScore;
        fifthScore = score;
    }

    cout<<"Your final score is "<<(fifthScore+fourthScore+thirdScore+secondScore)/4<<endl;//prints the calculation of the average 

    return 0;
}

/*What is a judge's score (none repeating)?1
What is a judge's score (none repeating)?2
What is a judge's score (none repeating)?3
What is a judge's score (none repeating)?4
What is a judge's score (none repeating)?5
What is a judge's score (none repeating)?6
3.5*/