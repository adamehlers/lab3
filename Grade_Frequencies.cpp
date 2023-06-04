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