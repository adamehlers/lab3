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
    cout << endl << "Score: " << setw(5) << fixed << setprecision(1) << score << ", " << "Grade: " << setw(1) << grade << endl;
}

void printFrequencies(int aCount, int bCount, int cCount, int dCount, int fCount){
    cout << "Grade  Frequency" << endl;
    cout << "----------------" << endl;
    cout << setw(5) << right << "A" << "      " << setw(3) << left << aCount << endl;
    cout << setw(5) << right << "B" << "      " << setw(3) << left << bCount << endl;
    cout << setw(5) << right << "C" << "      " << setw(3) << left << cCount << endl;
    cout << setw(5) << right << "D" << "      " << setw(3) << left << dCount << endl;
    cout << setw(5) << right << "F" << "      " << setw(3) << left << fCount << endl;
}



int main(){
    double score;
    bool main_function_loop_end_flag = false;
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;
 
    while(main_function_loop_end_flag == false) {
        cout << "Enter the score: ";
        cin >> score;
        if (cin.fail()){
            cin.clear();
            string incorrect_input;
            cin >> incorrect_input;
            cout << "Error: Not a valid input. Please try again." << endl;
            return main();
        }


        char grade = getGrade(score);
        if (grade == 'A'){
            aCount++;
        }
        if (grade == 'B'){
            bCount++;
        }
        if (grade == 'C'){
            cCount++;
        }
        if (grade == 'D'){
            dCount++;
        }
        if (grade == 'F'){
            fCount++;
        }
        if (grade == 'X'){
            main_function_loop_end_flag = true;
            break;
        }
        

        printGrade(score, getGrade(score));
    } 
    printFrequencies(aCount, bCount, cCount, dCount, fCount);
    return 0;
}