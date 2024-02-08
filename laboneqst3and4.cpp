#include <iostream>
#include <string>
using namespace std;

// Define structure for Course
struct Course {
    string course_code;
    string course_name;
};

// Define structure for Grade
struct Grade {
    int mark;
    char the_grade;
};

// Define structure for Student
struct Student {
    string reg_number;
    string name;
    int age;
    Course course;
    Grade grade;
};

// Function to calculate grade based on mark
char calculateGrade(int mark) {
    if (mark > 69)
        return 'A';
    else if (mark > 59)
        return 'B';
    else if (mark > 49)
        return 'C';
    else if (mark > 39)
        return 'D';
    else
        return 'E';
}

int main() {
    const int MAX_STUDENTS = 40;
    Student students[MAX_STUDENTS];
    int num_students = 0;

    // Add students
    // Assume user input for simplicity
    // You can add input validation and error handling as needed
    cout << "Enter the number of students (up to 40): ";
    cin >> num_students;
    cin.ignore(); // Clear input buffer

    for (int i = 0; i < num_students; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Registration number: ";
        getline(cin, students[i].reg_number);
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cin.ignore(); // Clear input buffer

        cout << "Enter course details:" << endl;
        cout << "Course code: ";
        getline(cin, students[i].course.course_code);
        cout << "Course name: ";
        getline(cin, students[i].course.course_name);

        cout << "Enter mark: ";
        cin >> students[i].grade.mark;
        cin.ignore(); // Clear input buffer

        // Calculate and store grade
        students[i].grade.the_grade = calculateGrade(students[i].grade.mark);
    }

    // Display student details
    cout << "\nStudent Details:" << endl;
    for (int i = 0; i < num_students; ++i) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Registration number: " << students[i].reg_number << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course code: " << students[i].course.course_code << endl;
        cout << "Course name: " << students[i].course.course_name << endl;
        cout << "Mark: " << students[i].grade.mark << endl;
        cout << "Grade: " << students[i].grade.the_grade << endl;
        cout << endl;
    }

    return 0;
}
