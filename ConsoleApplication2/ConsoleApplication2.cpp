#include <iostream>
#include <limits> 
#include "./PeerToPeer/peer_network.h"
#include "MVC/view.h"
#include "MVC/controller.h"
#include "MVC/model.h"
#include "EventBased/EventDriven.h"
#include "BrokerPattern/Broker.h"
#include "BrokerPattern/Entity.h"
#include "PipeAndFilter\pipe_filter.h"
#include "ECS/MovementSystem.h"

using namespace std;


void executePipeAndFilter() {
    // Chaîne de caractères initiale
    string input = "Bonjour, monde !";

    // Création et exécution des filtres
    MajusculeFilter majusculeFilter;
    InversionFilter inversionFilter;
    SuppressionEspacesFilter suppressionEspacesFilter;

    // Application des filtres en séquence
    majusculeFilter.process(input);
    inversionFilter.process(input);
    suppressionEspacesFilter.process(input);

    // Affichage de la chaîne de caractères finale
    cout << "Chaine de caracteres finale : " << input << endl;
}


void ConnectToWebSite()
{
    // Initialisation du modele, de la vue et du contrôleur
    UserDatabase userDB;
    userDB.addUser(UserModel("admin", "password")); // Ajouter un utilisateur pour tester
    LoginView loginView;
    LoginController loginController(userDB, loginView);
                
    // Authentification de l'utilisateur
    loginController.authenticateUser();
}

void ConnectViaBroker()
{
    //Broker pattern
    // Create a Broker instance
    Broker broker;

    // Create instances of ConcreteEntityA and ConcreteEntityB
    ConcreteEntityA entityA(broker);
    ConcreteEntityB entityB(broker);

    // Demonstrate communication between entities
    entityA.doSomething();
    entityB.doSomething();
}

void SubscribeToEvent()
{
    //Event driven pattern
    EventDriven eventDriven;
    eventDriven.CreateEventSubscription();
}

void ECSExample() {
    //ECS pattern
    // Create a MovementSystem instance
    MovementSystem movementSystem;

    // Create a GameObject
    GameObject gameObject;

    // Add Position and Velocity components to the GameObject
    Position position(0.0f, 0.0f);
    Velocity velocity(1.0f, 2.0f);

    cout << "Patron ECS " << '\n';

    // Update loop
    movementSystem.update(gameObject, position, velocity);
}


int main() {
    int choice = -1;

    do {
        // Affichage du menu
        cout << "Choisissez un exemple a executer :" << endl;
        cout << "1. Exemple 1 : Modele-Vue-Controleur pour l'authentification" << endl;
        cout << "2. Exemple 2 : Creation d'evennement C++" << endl;
        cout << "3. Exemple 3 : Connection Via Broker" << endl;
        cout << "4. Exemple 4 : Pipe and Filter Architecture pour le traitement d'une phrase" << endl;
        cout << "5. Exemple 5 : Deplacement d'un GameObject genere par le programme" << endl;
        cout << "6. Exemple 6 : Reseau peer-to-peer basique" << endl;
        cout << "0. Quitter" << endl;
        cout << "Votre choix : ";

        
        if (!(cin >> choice)) {
            cout << "Erreur : Veuillez entrer un nombre." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            choice = -1; 
        }
        else if (choice < 0 || choice > 6) {
            cout << "Choix invalide. Veuillez tenter de nouveau." << endl;
            choice = -1; // Reset choice to an uninitialized state
        }
        else {
            // Execution de l'exemple choisi
            switch(choice)
            {
            case 1:
                ConnectToWebSite();
                break;
            case 2:
                SubscribeToEvent();
                break;
            case 3:
                ConnectViaBroker();
                break;
            case 4:
                executePipeAndFilter();
                break;
            case 5:
                ECSExample();
                break;
            case 6:
                ConnectMultiplePeers();
                break;
            case 0:
                cout << "Au revoir !" << endl;
                break;
            }
        }
    } while(choice != 0);
    
    return 0;
}

