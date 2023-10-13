#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int id;
    string course;
    string section;

public:
    void setName(string Name) {
        name = Name;
    }

    void setId(int Id) {
        id = Id;
    }

    void setCourse(string Course) {
        course = Course;
    }

    void setSection(string Section) {
        section = Section;
    }

    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    string getCourse() {
        return course;
    }

    string getSection() {
        return section;
    }
};

int main() {
    Student data1;

    data1.setName("Akib Rayhan");
    data1.setId(858);
    data1.setCourse("CSE");
    data1.setSection("A");

    cout << "The Name is : " << data1.getName() << endl;
    cout << "The Id is : " << data1.getId() << endl;
    cout << "The Course is : " << data1.getCourse() << endl;
    cout << "The Section is : " << data1.getSection() << endl;

    return 0;
}
