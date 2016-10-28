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
  bool playing = true;
  while (playing == true){
    cout << "Enter of the commands listed: Add, Remove, Print, or Quit." << endl;
    cin >> command;
    if (0 == strcmp(command, "Add")){
      addStudent(list);
    }
    if (0==strcmp(command, "Remove")){
      deleteStudent(list);
    }
    if (0==strcmp(command, "Print")){
      printStudent(list);
    }
    if (0==strcmp(command, "Quit")){
      playing = false;
    } 
  }
}
void addStudent(vector<Student*>*list){
  Student* student = new Student;
  student->firstname = new char[25];
  student->lastname = new char[25];
  cout << "What's your first name?" << endl;
  cin.ignore();
  cin.get(student->firstname,25);
  cin.ignore();
  cout << "What's your last name?" << endl;
  cin.get(student->lastname,25);
  cin.ignore();
  cout << "What's your student ID?" << endl;
  cin.ignore();
  cin >> student->id;
  cin.ignore();
  cout << "What's your GPA?"  << endl;
  cin.ignore();
  cin >> student->gpa;
  cin.ignore();
  list->push_back(student);
}


void printStudent(vector<Student*>*list){
  for (vector<Student*>::iterator it=(*list).begin(); it !=(*list).end(); ++it){
    cout << (*(*it)).firstname << " " << (*(*it)).lastname << endl ;
    //cout << (*it).-> firstname << endl;
  }
}


void deleteStudent(vector<Student*>*list){
  cout << "hi" << endl;
}

