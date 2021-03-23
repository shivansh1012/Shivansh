#include <stdio.h>
#include <string.h>

typedef struct employeeDetails
{
    char name[100];
    float wage;
    float minutes;
    float hours;
    float grossPay;
} Employee;


void input_employee_details(int totalEmployee, Employee employee[totalEmployee]){
    for(int i=0;i<totalEmployee;i++){
        scanf("%s",employee[i].name);
        scanf("%f",&employee[i].wage);
    }
}

int find_employee_index(int totalEmployee, Employee employee[totalEmployee], char tempName[]) {
    for(int index=0;index<totalEmployee;index++){
        if(! strcmp(tempName,employee[index].name)) return index;
    }
    return 0;
}

void input_employee_hours(int totalEmployee, Employee employee[totalEmployee]){
    int totalEntries, index, tempMinutes;
    char tempName[100];

    scanf("%d",&totalEntries);

    for(int i=0;i<totalEntries;i++){
        scanf("%s",tempName);
        index=find_employee_index(totalEmployee, employee, tempName);
        scanf("%d",&tempMinutes);
        employee[index].minutes+=tempMinutes;
    }
}

void input_data(int totalEmployees, Employee employee[totalEmployees]) {
    input_employee_details(totalEmployees,employee);
    input_employee_hours(totalEmployees,employee);
}

void compute_grossPay(int totalEmployee, Employee employee[totalEmployee]) {
    for(int i=0;i<totalEmployee;i++){
        employee[i].hours=(employee[i].minutes)/60;
        if(employee[i].hours<=40) employee[i].grossPay=(employee[i].wage)*(employee[i].hours);
        else employee[i].grossPay= (40*employee[i].wage)+((employee[i].hours-40)*employee[i].wage*1.5);
    }
}

void display_one_employee(char name[], float hours, float grossPay) {
    printf("%s: %.2f hours, $%.2f\n",name, hours, grossPay);
}

void display_all_employees(int totalEmployee, Employee employee[totalEmployee]){
    for(int i=0;i<totalEmployee;i++){
        if(employee[i].hours) display_one_employee(employee[i].name, employee[i].hours, employee[i].grossPay);
    }
}

int main(){
    int totalEmployees;
    scanf("%d",&totalEmployees);
    Employee employee[totalEmployees];
    input_data(totalEmployees, employee);
    compute_grossPay(totalEmployees,employee);
    display_all_employees(totalEmployees,employee);
}
