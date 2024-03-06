#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Définir les variables de chaque étudiants
struct Student{
    string name;
    int age;
    string id;
};

// Function pour ajouter un student dans la base de données
void ajouterStudent(vector<Student> &database) {
    Student newStudent;
    cout <<"Rentrez le nom de l'étudient: ";
    getline(cin, newStudent.name);
    cout <<"Entrez l'age de l'étudient ";
    cin >> newStudent.age;
    cin.ignore();
    cout << "Entrez l'id de l'éleve ";
    getline(cin, newStudent.id);

    database.push_back(newStudent);
}


// Function pour display tout les étudients de la base de données
void displayAllStudents(const vector<Student> &database){
    cout << "Éleves dans la base de donnée:" <<endl;
    for (const auto &student : database) {
        cout << "Name: " << student.name << ", Age: " << student.age << ", ID: " << student.id << endl;
    }
}

int main(){
    vector<Student> studentDatabase;
    int choice;
    do{
        cout << "\nMenu:\n";
        cout << "1. Ajouter un étudiant\n";
        cout << "2. Afficher tous les étudiants\n";
        cout << "3. Quitter\n";
        cout << "Choisissez une option: ";
        cin >> choice;
        cin.ignore();

        switch (choice){

            case 1:
                ajouterStudent(studentDatabase);
                break;
            case 2:
                displayAllStudents(studentDatabase);
                break;
            case 3:
                cout << "Programme terminé.\n";
                break;
            default:
                cout << "Option invalide. Veuillez entrer un nombre entre 1 et 3.\n";
        }
    } while (choice !=3);

    return 0;
}








