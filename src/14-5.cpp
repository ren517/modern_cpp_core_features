#include <iostream>

enum class HighSchool {
    student,
    teacher,
    principal,
    headmaster
};

enum class University {
    student,
    professor,
    principal
};

int main() {
    HighSchool x = HighSchool::student;
    University y = University::student;
    bool b = x < HighSchool::headmaster;
    HighSchool c = HighSchool::headmaster;
    std::cout << (x > c) << std::endl;
    std::cout << std::boolalpha << b << std::endl;
}
