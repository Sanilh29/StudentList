#include <cstring>
#include <vector>
#include <iostream>

using namespace std;

struct Student {
  float gpa;
  int id;
  char* firstname;
  char* lastname;
};


void addStudent(vector<Student*>*list);
void printStudent(vector<Student*>*list);
void deleteStudent(vector<Student*>*list);


int main() {
  char command[10];
  vector<Student*>*list = new vector<Student*>();
  cout << "Enter of the commands listed: add, remove, print." << endl;
  cin >> command;
  if (0 == strcmp(command, "add")){
    addStudent(list);
    }
  if (0==strcmp(command, "remove")){
    printStudent(list);
    }
  if (0==strcmp(command, "print")){
    deleteStudent(list);
  }
  return 0;
}

void addStudent(vector<Student*>*list){
  Student* student = new Student;
  int newid;
  char newfirstname[20];
  char newlastname[20];
  cout << "What's your first name?" << endl;
  cin.get(newfirstname, 20);
  cin.ignore();
  cout << "What's your last name?" << endl;
  cin.get(newlastname,20);
  cin.ignore();
  
}


void printStudent(vector<Student*>*list){
  cout << "hi" << endl;
 
}


void deleteStudent(vector<Student*>*list){
  cout << "hi" << endl;
}
