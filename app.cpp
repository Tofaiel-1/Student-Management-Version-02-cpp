//============================================================================
// Name        : .cpp
// Author      : Tofaiel_1
// Version     :01
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//date: 10/07/2024
//============================================================================

#include<iostream>
#include<string.h>
using namespace std;

class STUDENT
{
    int STU_ROLL;
    char STU_NAME[20];
    char STU_SEC[20];
    char STU_DEPT[20];
    char CONTACT[15];
    char HOME_DISTRICT[20];
    char BLOOD_GROUP[5];
    char FAV_FRIEND[20];

public:
    int Insert(STUDENT *p, int n)
    {
        cout << "Enter ROLL: ";
        cin >> p[n].STU_ROLL;
        cout << "Enter Name: ";
        cin >> p[n].STU_NAME;
        cout << "Enter SECTION: ";
        cin >> p[n].STU_SEC;
        cout << "Enter DEPT: ";
        cin >> p[n].STU_DEPT;
        cout << "Enter Contact: ";
        cin >> p[n].CONTACT;
        cout << "Enter Home District: ";
        cin >> p[n].HOME_DISTRICT;
        cout << "Enter Blood Group: ";
        cin >> p[n].BLOOD_GROUP;
        cout << "Enter Favourite Friend: ";
        cin >> p[n].FAV_FRIEND;
        cout << "\nRECORD INSERTED...\n";
        n++;
        return n;
    }

    void Search(STUDENT *p, int roll, int n)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (p[i].STU_ROLL == roll)
            {
                cout << "ROLL\tNAME\tSEC\tDEPT\tCONTACT\tHOME DISTRICT\tBLOOD GROUP\tFAV FRIEND\n";
                cout << "=================================================================================================\n";
                cout << p[i].STU_ROLL << "\t" << p[i].STU_NAME << "\t" << p[i].STU_SEC << "\t" << p[i].STU_DEPT << "\t" << p[i].CONTACT << "\t" << p[i].HOME_DISTRICT << "\t" << p[i].BLOOD_GROUP << "\t" << p[i].FAV_FRIEND << "\n";
                break;
            }
        }
        if (i == n)
        {
            cout << "\nRECORD NOT FOUND.\n";
        }
    }

    void Display()
    {
        cout << STU_ROLL << "\t" << STU_NAME << "\t" << STU_SEC << "\t" << STU_DEPT << "\t" << CONTACT << "\t" << HOME_DISTRICT << "\t" << BLOOD_GROUP << "\t" << FAV_FRIEND << "\n";
    }

    int Del(STUDENT *p, int n, int roll)
    {
        int j = 0, k, flag = 0;
        for (j = 0; j < n; j++)
        {
            if (p[j].STU_ROLL == roll)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            for (k = j; k < n - 1; k++)
            {
                p[k] = p[k + 1];
            }
            cout << "\nRECORD DELETED.\n";
            return n - 1;
        }
        else
        {
            cout << "\nRecord Not Found\n";
            return n;
        }
    }

    int Update(STUDENT *p, int roll, int n)
    {
        int i, ch1;
        for (i = 0; i < n; i++)
        {
            if (p[i].STU_ROLL == roll)
            {
                while (1) {
                    cout << "\n!!===OPTIONS IN UPDATE===!!\n";
                    cout << "\n 1. Update Section";
                    cout << "\n 2. Update Department";
                    cout << "\n 3. Update Contact";
                    cout << "\n 4. Update Home District";
                    cout << "\n 5. Update Blood Group";
                    cout << "\n 6. Update Favourite Friend";
                    cout << "\n 7. Update All";
                    cout << "\n 8. Return to main Menu";
                    cout << "\n\n Enter Your Choice: ";
                    cin >> ch1;
                    switch (ch1) {
                    case 1: cout << "Section: ";
                        cin >> p[i].STU_SEC;
                        cout << "Record Updated...\n";
                        break;
                    case 2: cout << "DEPT: ";
                        cin >> p[i].STU_DEPT;
                        cout << "Record Updated...\n";
                        break;
                    case 3: cout << "Contact: ";
                        cin >> p[i].CONTACT;
                        cout << "Record Updated...\n";
                        break;
                    case 4: cout << "Home District: ";
                        cin >> p[i].HOME_DISTRICT;
                        cout << "Record Updated...\n";
                        break;
                    case 5: cout << "Blood Group: ";
                        cin >> p[i].BLOOD_GROUP;
                        cout << "Record Updated...\n";
                        break;
                    case 6: cout << "Favourite Friend: ";
                        cin >> p[i].FAV_FRIEND;
                        cout << "Record Updated...\n";
                        break;
                    case 7: cout << "Section: ";
                        cin >> p[i].STU_SEC;
                        cout << "DEPT: ";
                        cin >> p[i].STU_DEPT;
                        cout << "Contact: ";
                        cin >> p[i].CONTACT;
                        cout << "Home District: ";
                        cin >> p[i].HOME_DISTRICT;
                        cout << "Blood Group: ";
                        cin >> p[i].BLOOD_GROUP;
                        cout << "Favourite Friend: ";
                        cin >> p[i].FAV_FRIEND;
                        cout << "Record Updated...\n";
                        break;
                    case 8: return n;
                    default: cout << "!! Wrong Key !!";
                        break;
                    }
                }
                break;
            }
        }
        if (i == n)
        {
            cout << "\nRecord Not Found\n\n";
        }
        return n;
    }
};

int main()
{
    STUDENT o[10];
    int i = 0, ch, j, roll;
    while (1)
    {
        cout << "\n!!===** STUDENT MANAGEMENT SYSTEM C++ **===!!";
        cout << "\n";
        cout << "\n 1. INSERT";
        cout << "\n 2. SEARCH";
        cout << "\n 3. DISPLAY";
        cout << "\n 4. DELETE";
        cout << "\n 5. UPDATE";
        cout << "\n 6. EXIT";
        cout << "\n\n ENTER YOUR CHOICE: ";
        cin >> ch;
        switch (ch) {
        case 1: i = o[0].Insert(o, i);
            break;
        case 3: cout << "ROLL\tNAME\tSEC\tDEPT\tCONTACT\tHOME DISTRICT\tBLOOD GROUP\tFAV FRIEND\n";
            cout << "=================================================================================================\n";
            for (j = 0; j < i; j++) {
                o[j].Display();
            }
            break;
        case 2:
            cout << "Enter the ROLL for Search: ";
            cin >> roll;
            o[0].Search(o, roll, i);
            break;
        case 4:
            cout << "Enter the ROLL to Delete: ";
            cin >> roll;
            i = o[0].Del(o, i, roll);
            break;
        case 5:
            cout << "Enter the ROLL For Data Update: ";
            cin >> roll;
            i = o[0].Update(o, roll, i);
            break;
        case 6: exit(0);
        default: cout << "Wrong Key!!";
            break;
        }
    }
}
