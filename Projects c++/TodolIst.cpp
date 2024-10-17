#include <iostream>
#include <string>
using namespace std;

// Structure to represent a task
struct Task {
    string description;
    bool isDone;

    Task(string desc = "", bool done = false) : description(desc), isDone(done) {}
};

// Function to display tasks
void Tasks_display(Task tasks[], int Tasks_count) {
    if (Tasks_count == 0) {
        cout << "*** No Tasks to show *** " << endl;
    } else {
        // Loop through each task and display its status
        for (int i = 0; i < Tasks_count; i++) {
            cout << "Task " << i + 1 << ": " 
                 << tasks[i].description 
                 << " [" << (tasks[i].isDone ? "Done" : "Pending") << "]" << endl;
        }
    }
    cout << "*_______________________________*" << endl;
}

// Function to mark a task as done
void MarkTaskDone(Task tasks[], int Tasks_count) {
    int TaskNumber;
    cout << "Enter Task number to mark as done: ";
    cin >> TaskNumber;

    if (TaskNumber < 1 || TaskNumber > Tasks_count) {
        cout << "\n Not A Valid Task Number" << endl;
    } else {
        tasks[TaskNumber - 1].isDone = true;
        cout << "Task " << TaskNumber << " marked as done!" << endl;
    }
}

// Function to delete a task
void DeleteTask(Task tasks[], int &Tasks_count) {
    int del_task;
    cout << "Enter the Task number to be deleted: ";
    cin >> del_task;

    if (del_task < 1 || del_task > Tasks_count) {
        cout << "Invalid Task" << endl;
    } else {
        // Shift tasks to overwrite the deleted task
        for (int i = del_task - 1; i < Tasks_count - 1; i++) {
            tasks[i] = tasks[i + 1];
        }
        Tasks_count--;  // Reduce the task count
        cout << "Task " << del_task << " deleted successfully!" << endl;
    }
}

int main() {
    Task tasks[10];  // Array of tasks (maximum 10)
    int Tasks_count = 0;
    int option = -1;

    // Loop to access the functions
    while (option != 5) {
        cout << "  TO DO LIST  " << endl;
        cout << "__________________" << endl;
        cout << "1: Add a Task " << endl;
        cout << "2: View The Tasks " << endl;
        cout << "3: Mark A Task Done " << endl;
        cout << "4: Remove a Task " << endl;
        cout << "5: Terminate The Program " << endl;
        cin >> option;

        switch (option) {
            case 1: {
                if (Tasks_count >= 10) {
                    cout << " The List is full! " << endl;
                } else {
                    cout << " Adding a Task: " << endl;
                    cin.ignore();  // Ignore leftover newline character
                    getline(cin, tasks[Tasks_count].description);
                    Tasks_count++;
                }
            } break;

            case 2: {
                Tasks_display(tasks, Tasks_count);
            } break;

            case 3: {
                MarkTaskDone(tasks, Tasks_count);
            } break;

            case 4: {
                DeleteTask(tasks, Tasks_count);
            } break;

            case 5: {
                cout << " Program has been terminated." << endl;
            } break;

            default: {
                cout << " Not a valid option! " << endl;
            }
        }
    }

    return 0;
}
