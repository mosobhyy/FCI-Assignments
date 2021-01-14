/*
    Name: Mohamed Sobhy Abd-ElFattah           ID: 20180356
*/

#include <iostream>
#include <FciVector.h>
#include <vector>
#include <Course.h>
#include <Student.h>
using namespace std;

void insertOperation();
int options;
char otherOperations;

int main()
{
    char choice;
start:
    while (true)
    {
        cout << "Insert type of vector you would like to create:" << endl;
        cout << "   1- list of integer." << endl;
        cout << "   2- list of character." << endl;
        cout << "   3- list of string." << endl;
        cout << "   4- list of float." << endl;
        cout << "   5- list of students." << endl;
        cout << "   6- Exit." << endl;
        cout << "\nChoice: ";
        cin >> choice;
        cout << endl;
        if ( (choice>='1'&& choice <='6') )
            break;
        else
            cout << "\nInvalid Choice\n\n";
    }
    if (choice == '1')
    {
        cout << "A vector of integers is created successfully.\n";
        FciVector<int> vec;
        int value;
operations1:
        insertOperation();
        if (options == 1)
        {
            int elements;
            cout << "How many elements you would like to add ? ";
            cin >> elements;
            cout << "Enter Elements: ";
            for (int i = 0 ; i < elements ; i++)
            {
                cin >> value;
                vec.push_back(value);
            }
            cout << "Elements have been submitted Successfully\n";
            vec.print();
        }

        else if (options == 2)
        {
            if (vec.size() != 0)
            {
                vec.pop_back();
                cout << "Last element removed Successfully\n";
            }
            vec.print();
        }
        else if (options == 3)
        {
            while (true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                cout << "Enter value to add:";
                cin >> value;
                vec.insert(vec.begin()+ position-1, value);
                vec.print();
                break;
            }
        }

        else if (options == 4)
        {
            while(true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                vec.erase(vec.begin()+ position-1);
                vec.print();
                break;
            }
        }

        else if (options == 5)
        {
            vec.clear();
            cout << "Vector cleared Successfully\n";
        }

        else if (options == 6)
        {
            if (vec.size() != 0)
            {
                cout << "First Element: " << vec.front() << endl;
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 7)
        {
            if (vec.size() != 0)
            {
                cout << "Last Element: " << vec.back() << endl;
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 8)
        {
            int position;
reEnter1_8:
            cout << "Enter Position: ";
            cin >> position;
            if (position <=0 || position > vec.size())
            {
                cout << "This index is Out of boundary !\n";
                goto reEnter1_8;
            }
            else
                cout << "Element at position " << position << ": " << vec[position-1] << endl;
        }

        else if (options == 9)
            cout << "Vector Size: " << vec.size() << endl;

        else if (options == 10)
            cout << "Vector Capacity: " << vec.Capacity() << endl;

        else if (options == 11)
        {
            if (vec.empty() == 1)
                cout << "Yes, Vector is Empty.\n";
            else
                cout << "No, Vector is Not Empty.\n";
        }
        while(true)
        {
            cout << "\nWould you like to perform other operations? (Y/N)\n";
            cin >> otherOperations;
            if (otherOperations == 'Y')
            {
                goto operations1;
                break;
            }
            else if (otherOperations == 'N')
            {
                goto start;
                break;
            }
            else
                cout << "\nInvalid Choice\n\n";
        }
    }


    else if (choice == '2')
    {
        cout << "A vector of characters is created successfully.\n";
        FciVector<char> vec;
        char value;
operations2:
        insertOperation();
        if (options == 1)
        {
            int elements;
            cout << "How many elements you would like to add ? ";
            cin >> elements;
            cout << "Enter Elements: ";
            for (int i = 0 ; i < elements ; i++)
            {
                cin >> value;
                vec.push_back(value);
            }
            cout << "Elements have been submitted Successfully\n";
            vec.print();
        }

        else if (options == 2)
        {
            if (vec.size() != 0)
            {
                vec.pop_back();
                cout << "Last element removed Successfully\n";
            }
            vec.print();
        }
        else if (options == 3)
        {
            while (true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                cout << "Enter value to add:";
                cin >> value;
                vec.insert(vec.begin()+ position-1, value);
                vec.print();
                break;
            }
        }

        else if (options == 4)
        {
            while(true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                vec.erase(vec.begin()+ position-1);
                vec.print();
                break;
            }
        }

        else if (options == 5)
        {
            vec.clear();
            cout << "Vector cleared Successfully\n";
        }

        else if (options == 6)
        {
            if (vec.size() != 0)
            {
                cout << "First Element: " << vec.front() << endl;
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 7)
        {
            if (vec.size() != 0)
            {
                cout << "Last Element: " << vec.back() << endl;
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 8)
        {
            int position;
reEnter2_8:
            cout << "Enter Position: ";
            cin >> position;
            if (position <=0 || position > vec.size())
            {
                cout << "This index is Out of boundary !\n";
                goto reEnter2_8;
            }
            else
                cout << "Element at position " << position << ": " << vec[position-1] << endl;
        }

        else if (options == 9)
            cout << "Vector Size: " << vec.size() << endl;

        else if (options == 10)
            cout << "Vector Capacity: " << vec.Capacity() << endl;

        else if (options == 11)
        {
            if (vec.empty() == 1)
                cout << "Yes, Vector is Empty.\n";
            else
                cout << "No, Vector is Not Empty.\n";
        }
        while(true)
        {
            cout << "\nWould you like to perform other operations? (Y/N)\n";
            cin >> otherOperations;
            if (otherOperations == 'Y')
            {
                goto operations2;
                break;
            }
            else if (otherOperations == 'N')
            {
                goto start;
                break;
            }
            else
                cout << "\nInvalid Choice\n\n";
        }
    }
    else if (choice == '3')
    {
        cout << "A vector of strings is created successfully.\n";
        FciVector<string> vec;
        string value;
operations3:
        insertOperation();
        if (options == 1)
        {
            int elements;
            cout << "How many elements you would like to add ? ";
            cin >> elements;
            cout << "Enter Elements: ";
            cin.ignore();
            for (int i = 0 ; i < elements ; i++)
            {
                getline(cin, value);
                vec.push_back(value);
            }
            cout << "Elements have been submitted Successfully\n";
            vec.print();
        }

        else if (options == 2)
        {
            if (vec.size() != 0)
            {
                vec.pop_back();
                cout << "Last element removed Successfully\n";
            }
            vec.print();
        }
        else if (options == 3)
        {
            while (true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                cout << "Enter value to add:";
                cin >> value;
                vec.insert(vec.begin()+ position-1, value);
                vec.print();
                break;
            }
        }

        else if (options == 4)
        {
            while(true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                vec.erase(vec.begin()+ position-1);
                vec.print();
                break;
            }
        }

        else if (options == 5)
        {
            vec.clear();
            cout << "Vector cleared Successfully\n";
        }

        else if (options == 6)
        {
            if (vec.size() != 0)
            {
                cout << "First Element: " << vec.front() << endl;
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 7)
        {
            if (vec.size() != 0)
            {
                cout << "Last Element: " << vec.back() << endl;
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 8)
        {
            int position;
reEnter3_8:
            cout << "Enter Position: ";
            cin >> position;
            if (position <=0 || position > vec.size())
            {
                cout << "This index is Out of boundary !\n";
                goto reEnter3_8;
            }
            else
                cout << "Element at position " << position << ": " << vec[position-1] << endl;
        }

        else if (options == 9)
            cout << "Vector Size: " << vec.size() << endl;

        else if (options == 10)
            cout << "Vector Capacity: " << vec.Capacity() << endl;

        else if (options == 11)
        {
            if (vec.empty() == 1)
                cout << "Yes, Vector is Empty.\n";
            else
                cout << "No, Vector is Not Empty.\n";
        }
        while(true)
        {
            cout << "\nWould you like to perform other operations? (Y/N)\n";
            cin >> otherOperations;
            if (otherOperations == 'Y')
            {
                goto operations3;
                break;
            }
            else if (otherOperations == 'N')
            {
                goto start;
                break;
            }
            else
                cout << "\nInvalid Choice\n\n";
        }
    }


    else if (choice == '4')
    {
        cout << "A vector of floats is created successfully.\n";
        FciVector<float> vec;
        float value;
operations4:
        insertOperation();
        if (options == 1)
        {
            int elements;
            cout << "How many elements you would like to add ? ";
            cin >> elements;
            cout << "Enter Elements: ";
            for (int i = 0 ; i < elements ; i++)
            {
                cin >> value;
                vec.push_back(value);
            }
            cout << "Elements have been submitted Successfully\n";
            vec.print();
        }

        else if (options == 2)
        {
            if (vec.size() != 0)
            {
                vec.pop_back();
                cout << "Last element removed Successfully\n";
            }
            vec.print();
        }
        else if (options == 3)
        {
            while (true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                cout << "Enter value to add:";
                cin >> value;
                vec.insert(vec.begin()+ position-1, value);
                vec.print();
                break;
            }
        }

        else if (options == 4)
        {
            while(true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                vec.erase(vec.begin()+ position-1);
                vec.print();
                break;
            }
        }

        else if (options == 5)
        {
            vec.clear();
            cout << "Vector cleared Successfully\n";
        }

        else if (options == 6)
        {
            if (vec.size() != 0)
            {
                cout << "First Element: " << vec.front() << endl;
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 7)
        {
            if (vec.size() != 0)
            {
                cout << "Last Element: " << vec.back() << endl;
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 8)
        {
            int position;
reEnter4_8:
            cout << "Enter Position: ";
            cin >> position;
            if (position <=0 || position > vec.size())
            {
                cout << "This index is Out of boundary !\n";
                goto reEnter4_8;
            }
            else
                cout << "Element at position " << position << ": " << vec[position-1] << endl;
        }

        else if (options == 9)
            cout << "Vector Size: " << vec.size() << endl;

        else if (options == 10)
            cout << "Vector Capacity: " << vec.Capacity() << endl;

        else if (options == 11)
        {
            if (vec.empty() == 1)
                cout << "Yes, Vector is Empty.\n";
            else
                cout << "No, Vector is Not Empty.\n";
        }
        while(true)
        {
            cout << "\nWould you like to perform other operations? (Y/N)\n";
            cin >> otherOperations;
            if (otherOperations == 'Y')
            {
                goto operations4;
                break;
            }
            else if (otherOperations == 'N')
            {
                goto start;
                break;
            }
            else
                cout << "\nInvalid Choice\n\n";
        }
    }


    else if (choice == '5')
    {
        cout << "A vector of students is created successfully.\n";
        FciVector<Student> vec;
        int numOfCourses;
operations5:
        insertOperation();
        if (options == 1)
        {
            int elements;
            cout << "How many elements you would like to add ? ";
            cin >> elements;
            cout << "Enter Elements: \n";
            cin.ignore();
            for (int i = 0 ; i < elements ; i++)
            {
                Student student;
                cout << "Student Name: ";
                getline(cin, student.sName);
                cout << "Student ID: ";
                cin >> student.sID;
                cout << "Student Department: ";
                cin.ignore();
                getline(cin, student.sDepartment);
                cout << "Number of Courses: ";
                cin >> numOfCourses;
                cin.ignore();
                for (int x = 0 ; x < numOfCourses ; x++)
                {
                    Course course;
                    cout << "Enter Course #" << x+1 << " info:\n";
                    cout << "Course Name: ";
                    getline(cin, course.courseName);
                    cout << "Course Code: ";
                    getline(cin, course.courseCode);
                    cout << "Course Grade: ";
                    cin >> course.courseGrade;
                    cout << "Course Point: ";
                    cin >> course.coursePoint;
                    cout << "Course Year: ";
                    cin >> course.courseYear;
                    cout << "Course Semester: ";
                    cin >> course.courseSemester;
                    student.courseVec.push_back(course);
                }
                vec.push_back(student);
            }
            cout << "\nElements have been submitted Successfully\n";
            for (int i = 0 ; i < vec.size() ; i++)
            {
                cout << "\n*********************************************************\n";
                cout << "Student number: " << i+1 << endl;
                cout << "-----------------\n";
                vec[i].printInfo();
                cout << "\n*********************************************************\n";
            }
        }


        else if (options == 2)
        {
            if (vec.size() != 0)
            {
                vec.pop_back();
                cout << "Last element removed Successfully\n";
            }
        }

        else if (options == 3)
        {
            while (true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                cin.ignore();
                Student student;
                cout << "Student Name: ";
                getline(cin, student.sName);
                cout << "Student ID: ";
                cin >> student.sID;
                cout << "Student Department: ";
                cin.ignore();
                getline(cin, student.sDepartment);
                cout << "Number of Courses: ";
                cin >> numOfCourses;
                cin.ignore();
                for (int x = 0 ; x < numOfCourses ; x++)
                {
                    Course course;
                    cout << "Enter Course #" << x+1 << " info:\n";
                    cout << "Course Name: ";
                    getline(cin, course.courseName);
                    cout << "Course Code: ";
                    getline(cin, course.courseCode);
                    cout << "Course Grade: ";
                    cin >> course.courseGrade;
                    cout << "Course Point: ";
                    cin >> course.coursePoint;
                    cout << "Course Year: ";
                    cin >> course.courseYear;
                    cout << "Course Semester: ";
                    cin >> course.courseSemester;
                    student.courseVec.push_back(course);
                }
                vec.insert(vec.begin()+ position-1, student);
                break;
            }
            for (int i = 0 ; i < vec.size() ; i++)
            {
                cout << "Student number: " << i+1 << endl;
                cout << "----------------\n";
                vec[i].printInfo();
            }
        }

        else if (options == 4)
        {
            while(true)
            {
                int position;
                cout << "Enter Position:";
                cin >> position;
                if (position <=0 ||position > vec.size())
                {
                    cout << "This index is Out of boundary !\n";
                    break;
                }
                vec.erase(vec.begin()+ position-1);
                for (int i = 0 ; i < vec.size() ; i++)
                {
                    cout << "\n*********************************************************\n";
                    cout << "Student number: " << i+1 << endl;
                    cout << "-----------------\n";
                    vec[i].printInfo();
                    cout << "\n*********************************************************\n";
                }
                break;
            }
        }


        else if (options == 5)
        {
            vec.clear();
            cout << "Vector cleared Successfully\n";
        }

        else if (options == 6)
        {
            if (vec.size() != 0)
            {
                cout << "\n*********************************************************\n";
                vec.front().printInfo();
                cout << "\n*********************************************************\n";
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 7)
        {
            if (vec.size() != 0)
            {
                cout << "\n*********************************************************\n";
                vec.back().printInfo();
                cout << "\n*********************************************************\n";
            }
            else
                cout << "Sorry, Vector is Empty !\n";
        }

        else if (options == 8)
        {
            int position;
reEnter5_8:
            cout << "Enter Position: ";
            cin >> position;
            if (position <=0 || position > vec.size())
            {
                cout << "This index is Out of boundary !\n";
                goto reEnter5_8;
            }
            else
            {
                cout << "\n*********************************************************\n";
                vec[position-1].printInfo();
                cout << "\n*********************************************************\n";
            }
        }

        else if (options == 9)
            cout << "Vector Size: " << vec.size() << endl;

        else if (options == 10)
            cout << "Vector Capacity: " << vec.Capacity() << endl;

        else if (options == 11)
        {
            if (vec.empty() == 1)
                cout << "Yes, Vector is Empty.\n";
            else
                cout << "No, Vector is Not Empty.\n";
        }

        while(true)
        {
            cout << "\nWould you like to perform other operations? (Y/N)\n";
            cin >> otherOperations;
            if (otherOperations == 'Y')
            {
                goto operations5;
                break;
            }
            else if (otherOperations == 'N')
            {
                goto start;
                break;
            }
            else
                cout << "\nInvalid Choice\n\n";
        }
    }

    else if (choice == '6')
        cout << "Thanks for using our application ^_^\n";

    return 0;
}

void insertOperation()
{
    while(true)
    {
        cout << "\nWhat kind of operation would you like to perform ?" << endl;
        cout << "   1- Add element." << endl;
        cout << "   2- Remove last element." << endl;
        cout << "   3- Insert element at certain position." << endl;
        cout << "   4- Erase element from a certain position." << endl;
        cout << "   5- Clear" << endl;
        cout << "   6- Display first element." << endl;
        cout << "   7- Display last element." << endl;
        cout << "   8- Display element at certain position." << endl;
        cout << "   9- Display vector size." << endl;
        cout << "   10- Display vector capacity." << endl;
        cout << "   11- Is empty ?" << endl;
        cout << "\nChoice: ";
        cin >> options;
        if ( (options >=1&& options <=11) )
            break;
        else
            cout << "\nInvalid Choice\n\n";
    }
}
