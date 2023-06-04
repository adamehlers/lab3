#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

char getGrade(double score){
    if (score >= 90){
        return 'A';
    }
    else if (score >= 80){
        return 'B';
    }
    else if (score >= 70){
        return 'C';
    }
    else if (score >= 60){
        return 'D';
    }
    else if (score >= 0){
        return 'F';
    }
    else{
        return 'X';
    }
}

void printGrade(double score, char grade){
    cout << "Score: " << setw(5) << score << ", " << "Grade: " << setw(1) << grade << endl;
}

void printFrequencies(int aCount, int bCount, int cCount, int dCount, int fCount){
    cout << "Grade  Frequency" << endl;
    cout << "----------------" << endl;
    cout << setw(3) << right << "A" << "      " << setw(3) << left << aCount << endl;
    cout << setw(3) << right << "B" << "      " << setw(3) << left << bCount << endl;
    cout << setw(3) << right << "C" << "      " << setw(3) << left << cCount << endl;
    cout << setw(3) << right << "D" << "      " << setw(3) << left << dCount << endl;
    cout << setw(3) << right << "F" << "      " << setw(3) << left << fCount << endl;
}

int main(){
    double score; 
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

    //get the first score 
 while(Enter a condition here) { 
  char grade = getGrade(score); 
  //output the score and the grade 
  //determine which counter is updated 
  //get the next score 
 } 
  
 //output the frequencies

    return 0;
}