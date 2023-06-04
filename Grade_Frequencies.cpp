/**
 *    @file: Grade_Frequencies.cpp
 *  @author: Adam Ehlers
 *    @date: 06/04/2023
 *   @brief: This code will keep taking in values for graded assignments (in terms of percentage) and list the percentage, corresponding letter grade, and finally the total number of each letter grade when a negative percentage is inputted
 *  
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/**
 *  Function:   getgrade    
 *              returns a letter grade depending on the double value inputted
 * 
 *  @param score - The grade (in terms of percentage) of an assignment
 *  @return - The corresponding letter grade
*/
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


/**
 *  Function:   printGrade
 *              displays the percentage grade and letter grade that was just inputted
 *  
 *  @param score - The grade in terms of percentage
 *  @param grade - The letter grade of the assignment
 *  @return - A formatted terminal output that displays both grades
*/
void printGrade(double score, char grade){
    cout << endl << "Score: " << setw(5) << fixed << setprecision(1) << score << ", " << "Grade: " << setw(1) << grade << endl;
}

/**
 *  Function:   printFrequencies
 *              displays the total of each letter grade that has been counted
 * 
 *  @param aCount - The total number of 'A' letter grades
 *  @param bCount - The total number of 'B' letter grades
 *  @param cCount - The total number of 'C' letter grades
 *  @param dCount - The total number of 'D' letter grades
 *  @param fCount - The total number of 'F' letter grades
 *  @return - A formatted printed table of the different letter grades and the number of each grade that has been counted
*/
void printFrequencies(int aCount, int bCount, int cCount, int dCount, int fCount){
    cout << endl;
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
    bool main_function_loop_end_flag = false;   ///Flag to keep a while loop running until it becomes true
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;     ///Used to count the amount of each letter grade
 
    while(main_function_loop_end_flag == false) {   
        cout << "Enter the score: ";
        char grade = ' ';
        cin >> score;
        if (cin.fail()){    ///If a grade (in terms of percentage) is not entered, the incorrect input will be discarded and the loop will continue
            cin.clear();
            string incorrect_input;
            cin >> incorrect_input;
            cout << "Error: Not a valid input. Please try again." << endl;
            continue;   ///Skip to the next iteration of the loop (slightly different than the Python 3 continue statement)
        }


        grade = getGrade(score);    ///Prompt the user for the percentage grade (and incriment the correct counter)
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
        
        printGrade(score, getGrade(score));     ///Print a nicely formatted output for the percentage and letter grade
    } 
    printFrequencies(aCount, bCount, cCount, dCount, fCount);   ///Once a negative number has been inputted, print the total number of each letter grade to the terminal
    return 0;
}