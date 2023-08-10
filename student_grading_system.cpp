#include<iostream>
using namespace std;
int main(){
    float Eng, CS, Phy, Che, Math, Percentage, Marks;
    cout << "Enter Your Name: ";
    string name;
    cin >> name;
    cout << "Hello " << name << ", Please enter the marks.." << "\n";
    cout << "English: ";
    cin >> Eng;
    cout << "Computer Science: ";
    cin >> CS;
    cout << "Physics: ";
    cin >> Phy;
    cout << "Chemistry: ";
    cin >> Che;
    cout << "Math: ";
    cin >> Math;
    Marks=Eng+CS+Phy+Che+Math;
    Percentage=(Marks/5);
    if(Percentage>50)
    cout << "Congratulations " << name << ", You are Pass\n";
    cout << "Total Marks: " << Marks << "\nPercentage: " << Percentage << "% \n";
    if(Percentage>90)
    cout << "Grade A+" << endl;
    else if(Percentage>80)
    cout << "Grade A" << endl;
    else if(Percentage>70)
    cout << "Grade B" << endl;
    else if(Percentage>60)
    cout << "Grade C" << endl;
    else if(Percentage>50)
    cout << "Grade D" << endl;
    else
    cout << "Fail";
    return 0;
}