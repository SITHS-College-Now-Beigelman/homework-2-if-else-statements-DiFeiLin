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
    int forMaintain;
    double firstScore;
    double secondScore;
    double thirdScore;
    double fourthScore;
    double fifthScore;
    double sixthScore;

    cout<<"What is a judge's score (none repeating)?";
    cin>>score;

    firstScore = score;

    cout<<"What is a judge's score (none repeating)?";
    cin>>score;

    if (score>=firstScore){
        secondScore = firstScore;
        firstScore = score;
    }
    else {
        secondScore = score;
    }

    cout<<"What is a judge's score (none repeating)?";
    cin>>score;
    if (score>=firstScore){
        thirdScore = secondScore;
        secondScore = firstScore;
        firstScore = score;
    }
    else {
        thirdScore = score;
    }

    cout<<"What is a judge's score (none repeating)?";
    cin>>score;
    if (score>=firstScore){
        fourthScore = thirdScore;
        thirdScore = secondScore;
        secondScore = firstScore;
        firstScore = score;
    }
    else {
        fourthScore = score;
    }

        
    cout<<"What is a judge's score (none repeating)?";
    cin>>score;
    if (score>=firstScore){
        fifthScore = fourthScore;
        fourthScore = thirdScore;
        thirdScore = secondScore;
        secondScore = firstScore;
        firstScore = score;
    }
    else {
        fifthScore = score;
    }

    cout<<"What is a judge's score (none repeating)?";
    cin>>score;
    if (score>=firstScore){
        sixthScore = fifthScore;
        fifthScore = fourthScore;
        fourthScore = thirdScore;
        thirdScore = secondScore;
        secondScore = firstScore;
        firstScore = score;
    }
    else {
        sixthScore = score;
    }

    cout<<sixthScore<<fifthScore<<fourthScore<<thirdScore<<secondScore<<firstScore<<endl;

    
}