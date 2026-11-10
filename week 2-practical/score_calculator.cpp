#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){

    //VARIABLE DECLARATIONS
    string studentName;
    string course;
    int score1, score2, score3, score4;
    int totalScore;
    double average;
    double percentage;

    //CONSTANT DECLARATION
    const int MAX_SCORE = 100;

    //WELCOME BANNER
    cout<<"=============================="<<endl;
    cout<<" STUDENT SCORE CALCULATOR"   <<endl;
    cout<<"=============================="<<endl;
    cout<<endl;

    cout<<"Enter student name:";
    getline(cin,studentName);

    cout<<"Enter course(BBIT/BCS):";
    getline(cin, course);

    cout<<"Enter score for Test 1:";
    cin >> score1;

    cout<<"Enter score for Test 2:";
    cin >> score2;

    cout<<"Enter score for Test 3:";
    cin >> score3;

    cout<<"Enter score for Test 4:";
    cin>> score4;

    //CALCULATIONS
    totalScore = score1 + score2 + score3 + score4;
    average = totalScore / 4.0;
    percentage = (totalScore / 400.0) * 100;

    char grade;

    if (percentage >=90)
       grade ='A';
    else if (percentage >=80)
       grade = 'B';
    else if (percentage >=70)
       grade = 'C';
    else if (percentage >=60)
       grade = 'D';
    else 
       grade = 'F';
    
    cout<<"Grade:"<<grade<<endl;

    int highest=score1;
    if (score2>highest)
      highest=score2;
    
    if (score3>highest)
      highest=score3;
    cout<<"Highest score:"<<highest<<endl;

    if (score1<0 ||score1>100)
      cout<<"Error:Score 1 must be between 0 and 100."<<endl;
    if (score2<0 || score2>100)
     cout<<"Error:Score 2 must be between 0 and 100."<<endl;
    if (score3<0 || score3>100)
     cout<<"Error:Score 3 must be between 0 and 100."<<endl;
     if (score4<0 || score4>100)
      cout<<"Error:Score 4 must be between 0 and 100."<<endl;
    
    

    //DISPLAY REPORT CARD
    cout << endl;
    cout <<"=============================="<< endl;
    cout <<" REPORT CARD"     <<endl;
    cout <<"==============================" << endl;
    cout << endl;
    cout <<"Student:  "<< studentName << endl;
    cout <<"Course:   "<< course << endl;
    cout << endl;
    cout << "Test 1:  "<< score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2:  "<< score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3:  "<< score3 << "/" << MAX_SCORE << endl;
    cout << endl;

    cout << "Total:   "<<totalScore << "/300"<< endl;
    cout << "Average:  "<<fixed << setprecision(2) << average << endl;
    cout << "Percentage:  "<<fixed << setprecision(2)<<percentage <<"%" << endl;
    cout << endl;

    if (percentage >= 50){
        cout << "Result:   PASS" << endl;
    }else {
        cout << "Result:   FAIL" << endl;
    }
    
    cout << "==============================" << endl;
    return 0;
}
 