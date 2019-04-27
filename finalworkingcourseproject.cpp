struct employeedata{
  char name[50];
  char id[50];
  int age;
  string role;
  int salary;
  string gender;

  void showthedetails(){
    FILE *file;
    file = fopen("data.txt","r");
    assert(!fin.fail())
    fin >> data
    while (!fin.eof())
    {
      cout << data << endl;
      fin >> data;
    }
    fin.close();
    assert(!fin.fail())
    //using the assert.h headers

  }
  void employeesearch(){
    FILE *file;
    file = fopen("data.txt","r");
    char id[50];
    cout << "Enter the id please" << endl;
    cin >> id;
    while ()
  }
}
