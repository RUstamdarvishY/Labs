#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void initialize_file(string file_name)
{
    fstream file;
    file.open(file_name, ios::in);

    if (file.is_open())
    {
        file << "фамилия,группа,физика,информатика,математика,средняя," << endl;
        file.close();
    }
}

struct Students
{
    string surname;
    int group_number;
    int physics_grade;
    int informatics_grade;
    int math_grade;
    double average_grade;

    void read_students(string file_name){
        fstream file;
        file.open(file_name, ios::out);

        if (file.is_open()){
            string str;
            while (!file.eof()) 
            {
                getline(file, str); 
                if (str.empty()) continue; 
                cout << str << endl;
            }
            file.close();
        }
    };
    
    void add_student(string file_name){
        fstream file;
        file.open(file_name, ios::app);

        if (file.is_open()){
            
        }


    };

    
};


void write_students_to_file(string file_name){
        fstream file;
        file.open(file_name, ios::in);

        if (file.is_open()){
            for ()
            file <<  << ; 
            file.close(); 
        }
    }

void get_students_with_low_grades(){

    };



int main()
{
    string file_name;
    cout << "Enter file name in *.csv format: ";
    cin >> file_name;

    initialize_file(file_name);

    return 0;
}