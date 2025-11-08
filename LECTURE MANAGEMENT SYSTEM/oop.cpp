#include <iostream>
#include <string>
using namespace std;

// -------------------------------------------------------------
// Class Definition: Lecture
// Represents details of a single lecture
// -------------------------------------------------------------
class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // ---------------------------------------------------------
    // Constructor: Initializes all data members with default values
    // ---------------------------------------------------------
    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numberOfLectures = 0;
    }

    // ---------------------------------------------------------
    // Method 1: Assign Initial Values using Parameters
    // ---------------------------------------------------------
    Lecture(string lecturer, string subject, string course, int num) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numberOfLectures = num;
    }

    // ---------------------------------------------------------
    // Method 2: Add Lecture Details (User Input)
    // Business Logic: To input data from user
    // ---------------------------------------------------------
    void addLectureDetails() {
        cout << "\n--- Enter Lecture Details ---" << endl;
        cout << "Enter Lecturer Name        : ";
        getline(cin, lecturerName);
        cout << "Enter Subject Name         : ";
        getline(cin, subjectName);
        cout << "Enter Course Name          : ";
        getline(cin, courseName);
        cout << "Enter Number of Lectures   : ";
        cin >> numberOfLectures;
        cin.ignore(); // clear input buffer
        cout << "? Lecture details added successfully!\n" << endl;
    }

    // ---------------------------------------------------------
    // Method 3: Display Lecture Details
    // Business Logic: To display the stored lecture data
    // ---------------------------------------------------------
    void displayLectureDetails() const {
        cout << "---------------------------------------------------" << endl;
        cout << "????? Lecturer Name     : " << lecturerName << endl;
        cout << "?? Subject Name       : " << subjectName << endl;
        cout << "?? Course Name        : " << courseName << endl;
        cout << "?? Number of Lectures : " << numberOfLectures << endl;
        cout << "---------------------------------------------------" << endl;
    }

    // ---------------------------------------------------------
    // Method 4: Check if Lecture Object is Empty
    // Used to detect uninitialized entries
    // ---------------------------------------------------------
    bool isEmpty() const {
        return lecturerName.empty();
    }
};

// -------------------------------------------------------------
// Main Function: Lecture Management System
// -------------------------------------------------------------
int main() {
    const int MAX_LECTURES = 5;  // Maximum number of lecturers allowed
    Lecture lectures[MAX_LECTURES];  // Array of Lecture objects
    int lectureCount = 0;  // To keep track of how many lectures are added

    int choice;

    cout << "===============================================" << endl;
    cout << "         ?? LECTURE MANAGEMENT SYSTEM ??" << endl;
    cout << "===============================================" << endl;

    // Main menu loop
    do {
        cout << "\n--------------- MAIN MENU ----------------" << endl;
        cout << "1??  Add Lecture Details" << endl;
        cout << "2??  View All Lecture Details" << endl;
        cout << "3??  View Single Lecture Detail" << endl;
        cout << "4??  Exit" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        cin.ignore(); // clear buffer before taking next line input

        switch (choice) {
        case 1:
            // Business Logic: Add Lecture Details
            if (lectureCount < MAX_LECTURES) {
                lectures[lectureCount].addLectureDetails();
                lectureCount++;
            } else {
                cout << "?? You can only add details of 5 lecturers!\n" << endl;
            }
            break;

        case 2:
            // Business Logic: Display All Lecture Details
            if (lectureCount == 0) {
                cout << "?? No lecture details available! Please add first.\n";
            } else {
                cout << "\n======= All Lecture Details =======\n";
                for (int i = 0; i < lectureCount; i++) {
                    cout << "\nLecture #" << (i + 1) << endl;
                    lectures[i].displayLectureDetails();
                }
            }
            break;

        case 3:
            // Business Logic: Display Single Lecture Detail
            if (lectureCount == 0) {
                cout << "?? No lecture details available! Please add first.\n";
            } else {
                int index;
                cout << "Enter Lecture Number (1 to " << lectureCount << "): ";
                cin >> index;
                if (index >= 1 && index <= lectureCount) {
                    cout << "\n?? Details of Lecture #" << index << endl;
                    lectures[index - 1].displayLectureDetails();
                } else {
                    cout << "? Invalid Lecture Number!\n";
                }
            }
            break;

        case 4:
            cout << "\n?? Exiting Lecture Management System..." << endl;
            cout << "? Thank you for using this system!" << endl;
            break;

        default:
            cout << "? Invalid choice! Please enter between 1 to 4.\n";
            break;
        }

    } while (choice != 4);

    return 0;
}
