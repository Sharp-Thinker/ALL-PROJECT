#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;


//................................INCOMPLETE...............................WORKING....


/*
 -----------------------------
 function declaratiion..
 ----------------------------
*/
void make_attendence_sheet();
void take_attendence();







class Student
{
public:
    string name;
    int roll;
    Student(string st_name, int st_roll)
    {
        name = st_name;
        roll = st_roll;
    };
    Student()
    {

    };
};






int main ()
{
    cout << "\t-------------------------------------------------" << endl;
    cout << "\t|\t\tTHIS IS MAIN MENU\t\t|" << endl;
    cout << "\t-------------------------------------------------" << endl << endl;
    cout << "\t\t   1. Make Attendence Sheet " << endl;
    cout << "\t\t   2. Take attendence " << endl;
    cout << "\t\t   3. Open Attendence Sheet " << endl;
    cout << endl << "\tNote :   Choise your command (1 - 8)" << endl;
    cout << endl << "\t What yout want to do : ";
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        make_attendence_sheet();
        break;
    case 2:
        take_attendence();
        break;
    default:
        break;
    }

    return 0;
}


// make attendence sheet...input student data..........
void make_attendence_sheet()
{
    int studnet_number;
    cout << "How many Student in your classroom : ";
    cin >> studnet_number;
    vector<Student> data;
    int count = 1;
    for (int i = 0; i < studnet_number; i++)
    {
        cout << "Data of Student " << count <<" ------" << endl;

        string st_name;
        cout << "Enter Your Student Name : ";
        cin >> st_name;
        cout << "Enter Your student Roll : ";
        int st_roll;
        cin >> st_roll;
        Student me =Student(st_name, st_roll);
        data.push_back(me);
        count++;
        cout << endl << endl;
    }
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i].name << " " << data[0].roll << endl;
    }
}

// show attendence sheet....
void take_attendence()
{
    cout << endl << endl;
    cout << "\t-------------------------------------------------" << endl;
    cout << "\t|\t\tTAKE ATTENDENCE\t\t\t|" << endl;
    cout << "\t-------------------------------------------------" << endl << endl;
    cout << "\t------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t|\t   NAME\t\t|" << "    ROLL    |" << " ACTIVITY |" << endl;
    cout << "\t------------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        string name = "Gazi md. rifat";
        int roll = 458407;
        int space =22 - name.length();
        cout << "\t| " << name;
        for(int i = 0; i < space; i++)
        {
            cout << " ";
        }
        cout << "| " << roll;
        for (int i = 0; i < 5; i++){
            cout << " ";
        }
        cout << "| ---";
        char activity;
        cin >> activity;
        cout << endl;
        cout << "\t------------------------------------------------------------------------------------------------------" << endl;
    }
}