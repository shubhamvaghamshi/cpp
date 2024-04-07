#include<iostream>
using namespace std;
class Employ {
public:
    int employe_num;
    string employe_name;
    int basic_salary;
    double DA;
    int IT;
    double net_salary;
};
int main()
{
    Employ e1;
    cout << "Enter Employe number: " << endl;
    cin >> e1.employe_num ;
    cout << "Enter Employe name: " << endl;
    cin >> e1.employe_name;
    cout << "Enter Basic salary: " << endl;
    cin >> e1.basic_salary;
    cout << "Enter DA: " << endl;
    cin >> e1.DA;
    cout << "Enter Income tex: " << endl;
    cin >> e1.IT;
    cout << "Enter Net salary: " << endl;
    cin >> e1.net_salary;
    
    cout << "Employe name is: " <<e1.employe_num << endl;
    cout << " Employe name is :" <<e1.employe_name << endl;
    cout << " Basic salary is:" <<e1.basic_salary << endl;
    cout << " DA is: " <<e1.DA << endl;
    cout << " Income tex is: " <<e1.IT << endl;
    cout << "Enter Net salary: " <<e1.net_salary << endl;
    return 0;
}
