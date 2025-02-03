#include<iostream>
using namespace std;

//Group of Functions for Ass
void login() {
    string username, password;
    do {
        cout << "Username: "; cin >> username;
        cout << "Password: "; cin >> password;
        if (!(username == "Admin" && password == "1122")) {
            cout << "Your info is not correct, please input again!" << endl;
        }
    } while (!(username == "Admin" && password == "1122"));
}

void show_Menu() {
    cout << endl;
    cout << "Welcome to Employee Salaries Management Software" << endl;
    cout << "Main Menu: " << endl;
    cout << "1. Input employee salaries" << endl;
    cout << "2. Display employee salaries" << endl;
    cout << "3. Calculate total of employee salaries" << endl;
    cout << "4. Calculate average of employee salaries" << endl;
    cout << "5. Find the highest and lowest salaries" << endl;
    cout << "6. Search for a specific salary" << endl;
    cout << "7. Sort salaries" << endl;
    cout << "8. Update an employee's salary" << endl;
    cout << "9. Delete an employee's salary" << endl;
    cout << "10. Count employees with salaries less than 500.00" << endl;
    cout << "11. Exit" << endl;
    cout << "Please select an option (1-11): ";
}

void inputSalary(float salary[], int &n){
    cout << "\n==== Input Employee Salaries==== " << endl;
    char more;
    do {
        cout << "Input employee's salary: "; 
        cin >> salary[n++];
        cout << "Do you want to input another employee's salary (Y/N)? ";
        cin >> more;

    } while (more == 'Y' || more == 'y');
}

void displaySalary(float salary[], int n){
    cout << "\n==== Display Employee Salaries ===="<<endl;
    for (int i = 0; i<n; i++){
        cout << "Employee's salary " << i + 1 << ": " << salary[i] <<endl;
    }
}

void Calculate_Total(float salary[], int n){
    cout << "\n==== Calculate Employee Salary==== "<<endl;
    float sum = 0 ;
    for (int i = 0; i<n; i++){
        sum += salary[i];
    }
    cout << "Total of employees's salaries is: " << sum << endl;
}

void Calculate_AVG(float salary[], int n){
    cout << "\n==== Calculate Average Of Employee Salary ==== "<<endl;
    float sum = 0;
    for (int i = 0; i<n; i++){
        sum += salary[i];
    }
    float avg = (n > 0) ? (sum / n) : 0;
    cout << "Average of employees's salary is: " << avg <<endl;
}

void findHighest_Lowest(float salary[], int n){
    cout << "\n==== Find Highest And Lowest Salary ===="<<endl;
    float highest = salary[0];
    float lowest = salary[0];
    for (int i = 0; i<n; i++){
        if (salary[i] > highest) highest = salary[i];
        if (salary[i] < lowest) lowest = salary[i];
    }
    cout << "The highest salary is: " << highest <<endl;
    cout << "The loweset salary is: " << lowest <<endl;
}

void search_Salary(float salary[], int n){
    cout << "\n==== Search For A Specific Salary ===="<<endl;
    float search;
    bool isSearch = false;
    cout << "Input salary to search: "; cin >> search;
    for (int i = 0; i<n; i++){
        if (search == salary[i]){
            cout << "Search found! ";
            cout << "Employee' salary " << i + 1 << ": " << salary[i]<<endl;
            isSearch = true;
            break;
        }
        if (!isSearch){
            cout << "Search not found!"<<endl;
            break;
        }
    }
}

void sort_Salary(float salary[], int n){
    float sort;
    cout << "\n==== Sort Salaries ====" << endl;
    cout << "\t1. From Highest to Lowest salary" << endl;
    cout << "\t2. From Lowest to Highest salary" << endl;
    cout << "Input your choice: "; cin >> sort;
    for (int i = 0; i<n; i++){
        for (int j = i + 1; j<n; j++){
            if ((sort == 1 && salary[i] > salary[j]) || (sort == 2 && salary[i]< salary[j]))
            {
                swap(salary[i],salary[j]);
            }
        }
    }
}

void update_Salary(float salary[], int n){
    cout << "\n==== Update an employee's salary ===="<<endl;
    float update;
    bool isUpdated = false;
    cout << "Enter current salary: "; cin >> update;
    for (int i = 0; i<n; i++){
        if (salary[i] == update){
            cout << "Input new salary: "; cin >> salary[i];
            cout << "New salary has been update!"<<endl;
        }
        if (!isUpdated){
            cout << "Update fail!"<<endl;
        }
    }
}

void delete_Salary(float salary[], int &n){
    cout << "\n==== Delete Employee's Salary ===="<<endl;
    float deleted;
    bool isDelete = false;
    cout << "Enter salary to delete: "; cin >> deleted;
    for (int i = 0; i<n; i++){
        if (salary[i] == deleted){
            for (int j = i; j< n-1; j++){
                salary[j] = salary[j + 1];
            }
            n--; //reduce the count for salary
            cout << "Employee's salary has been deleted!"<<endl;
            isDelete = true;
        }
        if (!isDelete){
            cout << "Delete not success!"<<endl;
        }
    }
}


void count_salary_less500(float salary[], int n){
     cout << "\n==== Count employees with salaries less than 500.00 ===="<<endl;
    bool count = false;
    for (int i = 0; i<n; i++){
        if (salary[i] < 500){
            cout << "Employee's salary " << i + 1 << ": " << salary[i] <<endl;
            count = true;
        }
        if (!count){
            cout << "No salary less than 500"<<endl;
        }
    }
}

void exit(){
    cout << "==== Exit program! ===="<<endl;
    exit(0);
    cout << "Good bye!"<<endl;
}

