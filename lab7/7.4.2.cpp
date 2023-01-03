#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string initialize_file()
{
    string file_name;
    cout << "Enter file name: ";
    cin >> file_name;

    fstream file;
    file.open(file_name, ios::out);

    if (file.is_open())
    {
        cout << "File created" << endl;

        file << "фамилия,группа,физика,математика,информатика,средняя,\n";
        file.close();
    }
    return file_name;
}

void read_students(string file_name)
{
    fstream file;
    file.open(file_name, ios::in);

    if (file.is_open())
    {
        string str;
        while (!file.eof())
        {
            getline(file, str);
            if (str.empty())
                continue;
            cout << str << endl;
        }
        file.close();
    }
};

void add_student(string file_name)
{
    string surname;
    int group_number;
    int physics_grade;
    int math_grade;
    int informatics_grade;
    double average_grade;

    fstream file;
    file.open(file_name, ios::app);

    if (file.is_open())
    {
        cout << "Enter student surname: ";
        cin >> surname;
        cout << "Enter group number: ";
        cin >> group_number;
        cout << "Enter physics grade: ";
        cin >> physics_grade;
        cout << "Enter math grade: ";
        cin >> math_grade;
        cout << "Enter informatics grade: ";
        cin >> informatics_grade;
        average_grade = static_cast<double>(physics_grade + math_grade + informatics_grade) / 3;

        file << surname << "," << group_number << "," << physics_grade << "," << math_grade << "," << informatics_grade << "," << average_grade << "," << endl;

        cout << "Student added" << endl;
    }
};

void get_students_with_low_grades(string file_name)
{
    fstream file;
    file.open(file_name, ios::out);

    string group_number;
    cout << "Enter group number" << endl;
    cin >> group_number;

    int passing_grade = 4;

    vector<vector<string>> student_info;
    if (file.is_open())
    {
        int j;
        while (!file.eof())
        {
            for (int i = 0; i < 6; i++)
            {
                getline(file, student_info[j][i], ',');
                if (student_info[j].empty())
                    continue;
            }
            j++;
        }
        file.close();
    }
    for (int i = 0; i < student_info.size(); i++)
    {
        if (student_info[i][1] == group_number)
        {
            if (stoi(student_info[i][2]) < passing_grade || stoi(student_info[i][3]) < passing_grade || stoi(student_info[i][4]) < passing_grade)
            {
                cout << "Student with low grade: " << student_info[i][0] << endl;
            }
        }
    }
};

int main()
{

    // initialize_file();

    add_student("student.csv");
    cout << "\n";
    read_students("student.csv");
    cout << "\n";
    get_students_with_low_grades("student.csv");

    return 0;
}