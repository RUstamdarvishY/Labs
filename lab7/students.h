#ifndef Students
#define Students
#include <iostream>

class Students{
private:
    std::string surname;
    int group_number;
    int physics_grade;
    int informatics_grade;
    int math_grade;
    double average_grade;
    void initialize_file();

public:
    void read_students();

    void write_students_to_file();

    void add_student();

    void update_students(std::string surname, int option);

    void delete_students(std::string surname);

    void sort_students(int option);

    void get_students_with_low_grades();

    double get_average_grade();
};


#endif