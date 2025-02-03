/*
Introduction to C++ Assignment 

Submit from:
1. Vorn Sivfong 
2. Bun Sopheak 
3. Tep Socheat 
4. Hun Samnangvisal 
5. Han Seakvicheathornin 

Submit to: Lecturer Un Vireak
*/


#include <iostream>
#include "function.cpp"
using namespace std;

//Main program
int main() {
    int n = 0;
    int choice;
    float salary[100];

    login();

    do {
        show_Menu();
        cin >> choice;
        switch (choice) {
            case 1: {

               inputSalary(salary,n);

            } break;
            case 2: {
               
               displaySalary(salary,n);

            } break;
            case 3: {

                Calculate_Total(salary,n);
           
            } break;
            case 4: {
                
                Calculate_AVG(salary,n);

            } break;
            case 5: {

                findHighest_Lowest(salary,n);
             
            } break;
            case 6: {

                search_Salary(salary,n);
                
            } break;
            case 7: {

                sort_Salary(salary,n);
              
            } break;
            case 8: {
               
                update_Salary(salary,n);

            } break;
            case 9: {

                delete_Salary(salary,n);
          
            } break;
            case 10: {

                count_salary_less500(salary,n);
               
            } break;
            case 11:

                exit();

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 11);

    return 0;
}


