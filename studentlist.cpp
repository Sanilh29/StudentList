//Sanil Hattangadi, 11/1/16, keeps a directory of students with their first and last name, id, and GPA; can add, delete and print students

#include <cstring>
#include <iomanip> //imports setprecison
#include <vector>
#include <iostream>

using namespace std;

struct Student { //general variables that I will use 
  float gpa;
  int id;
  char* firstname;
  char* lastname;
};


void addStudent(vector<Student*>*list); //initizialises all the methods
void printStudent(vector<Student*>*list);
void deleteStudent(vector<Student*>*list);


int main() {
  char command[10];
  vector<Student*>*list = new vector<Student*>();//vector size can change to whatever
  bool playing = true;
  while (playing == true){
    cout << "Enter of the commands listed: add, delete, print, or quit." << endl;
    cin >> command;
    if (0 == strcmp(command, "add")){
      addStudent(list);
    }
    if (0==strcmp(command, "delete")){
      deleteStudent(list);
    }
    if (0==strcmp(command, "print")){
      printStudent(list);
    }
    if (0==strcmp(command, "quit")){
      playing = false;
    }
  }
}
void addStudent(vector<Student*>*list){
  Student* student = new Student;//adds student to the heap
  student->firstname = new char[25];//the char inputted will place the first name into firstname student
  student->lastname = new char[25];
  cout << "What's your first name?" << endl;
  cin.ignore();
  cin.get(student->firstname,25);
  cin.ignore();
  cout << "What's your last name?" << endl;
  cin.get(student->lastname,25);
  cin.ignore();
  cout << "What's your student ID?" << endl;
  cin >> student->id;
  cin.ignore();
  cout << "What's your GPA?"  << endl;
  cin >> student->gpa;
  cin.ignore();
  list->push_back(student); //pushes student into the vector
}


void printStudent(vector<Student*>*list){
  for (vector<Student*>::iterator it=(*list).begin(); it !=(*list).end(); ++it){//go through each iterator
    cout << "Name: " << (*(*it)).firstname << " " << (*(*it)).lastname << endl ;//print first and last name
    cout << "Student ID: " << (*it)-> id << endl;// print ID
    cout << "GPA: " << setprecision(2) << fixed << (*it)-> gpa << endl; //print GPA to 2 decimal places each time
  }
}


void deleteStudent(vector<Student*>*list){
  int deleteid;
  cout << "Enter the Student ID you wish to delete." << endl; 
  cin >> deleteid;
  cout << deleteid << endl;
  cout << "Student Deleted" << endl;
  for (vector<Student*>::iterator it=(*list).begin(); it != (*list).end(); ++it){ //go through the iterator
    if ((*it)->id == deleteid){//if the iterator is on the deleted ID
      cout << deleteid << endl;
      delete (*it); //delete student
      (*list).erase(it); //delete pointer
      break;//quit the forloop
    }
  }
}

