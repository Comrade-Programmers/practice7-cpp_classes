#include <iostream>

using namespace std;


class Student {
   public:
///construction of the Student class
       Student(int _age, int _level, string _firstName, string _lastName, string _middleName, string _program) {
           age = _age;
           level=_level;
           firstName = _firstName;
           lastName = _lastName;
           middleName = _middleName;
           program = _program;
       }

       int age, level;
       string firstName, lastName, middleName, program;

       string generateDetails() {
        return "The details are\n"
        "=================\n"
        "First name: " + firstName + "\n"
        "Middle name: " + middleName +" \n"
        "Last name: " + lastName +" \n"
        "Age: " + std::to_string(age) + "\n"
        "Program: " + program +" \n"
        "Year: " + std::to_string(level) + "\n";
       }

};

int main() {
///create students array
    Student bernice(20, 100, "Bernice", "Yevugah", "X", "Computer Science");
    Student frank(27, 100, "Frank", "Oppong", "Y", "Computer Science");
    Student donne(13, 100, "Dieu", "Donne", "D", "Computer Science");
    Student elvis(32, 100, "Elvis", "Feda", "Z", "Computer Science");
    Student alex(18, 100, "Alexander", "Takyi", "T", "Computer Science");
    Student prosper(22, 100, "Prosper", "Ababio", "C", "Computer Science");

    Student students[] = {bernice, frank, donne, elvis, alex, prosper,
        Student(22, 100, "Success", "Surname", "K", "Computer Science")};

///display a menu for user to make choice
    cout<<"Please select a student to view details\n"
        "=============================\n"
        "1. Bernice\n"
        "2. Frank\n"
        "3. Donne\n"
        "4. Elvis\n"
        "5. Alex\n"
        "6. Prosper\n"
        "7. Success\n";


///get user input
    int choice;
    cin>>choice;

///pick student by index and display details
    cout<<students[choice-1].generateDetails();

}
