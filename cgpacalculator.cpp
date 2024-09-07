#include<iostream>
#include<string>
using namespace std;
 
 class StudentGPA{
    private:
    float *array;
    int size;
    float TotalGPA = 0.0, TotalCGPA = 0.0;
 
    public:
    //constructor to initialize the array with a given size
    StudentGPA(int initialSize): size(initialSize)
    {
        array = new float[size];
        // now initialize the array elements and store 0 in it 
        for(int i = 0 ; i<size; i++)
        {
            array[i] = 0;
        }
    }
    // create a destructor to free the dynamically allocated memory
     ~StudentGPA(){
        delete[] array;
    }
    //make a method to get the data from user
    void GetCGPA(){
        cout<<"Enter the Previous GPA"<<endl;
        for(int i = 0; i<size; i++)
        {
            cin>> array[i];
        }

    }
    //method to calculate CGPA
    void calculateCGPA(){
        string Grade;
        for(int i = 0; i<size; i++){
            TotalGPA = array[i] + TotalGPA;

        }
        TotalCGPA = TotalGPA / size;
        cout<<" your current CGPA is :"<<TotalCGPA<<endl;
    


      if (static_cast<int>(TotalCGPA) == 4.0)

    {
        Grade = "A";
    }
    else if ((static_cast<int>(TotalCGPA) >= 3.0)  &&(static_cast<int>(TotalCGPA) < 4.0)){
        Grade = " B ";
    }
    else if ((static_cast<int>(TotalCGPA) >= 2.0)  &&(static_cast<int>(TotalCGPA) < 3.0)){
        Grade = " C ";
    }
     else if ((static_cast<int>(TotalCGPA) >= 1.0)  &&(static_cast<int>(TotalCGPA) < 2.0)){
        Grade = " D ";
     }
     else{
          Grade = "Not need to say:)";
     }
        cout<<"your current Grade is :"<<Grade;
    }


 };
   
    int main()

   {
    // create a dynamic array to store the total semester you have clear
    int TotalSemester;
    cout<<"How many Semester you have cleared"<<endl;
    cin>>TotalSemester;
    //make and object of class StudentGPA
    StudentGPA Student(TotalSemester);

    //first call get methods
    Student.GetCGPA();
    //then call calculate methods
    Student.calculateCGPA();
    return 0;

   }
 