#include <iostream>
#include "peer_network.h"

using namespace std;

// Implémentation du constructeur de la classe Peer
Peer::Peer(const string& n) : name(n) {}

// Implémentation de la méthode SendMessage
void Peer::SendMessage(const string& message) {
    cout << name << " envoie : " << message << endl;
    for (Peer* peer : peers) {
        peer->ReceiveMessage(name, message);
    }
}

// Implémentation de la méthode ReceiveMessage
void Peer::ReceiveMessage(const string& sender, const string& message) {
    cout << name << " reçoit de " << sender << " : " << message << endl;
}

// Implémentation de la méthode AddPeer
void Peer::AddPeer(Peer* peer) {
    peers.push_back(peer);
}

// Implémentation de l'exemple 1
void ConnectMultiplePeers() {
    // Création des peers
    Peer alice("Alice");
    Peer bob("Bob");
    Peer charlie("Charlie");

    // Ajout des peers à la liste des pairs de chaque peer
    alice.AddPeer(&bob);
    alice.AddPeer(&charlie);

    bob.AddPeer(&alice);
    bob.AddPeer(&charlie);

    charlie.AddPeer(&alice);
    charlie.AddPeer(&bob);

    // Exemples d'envoi de messages
    alice.SendMessage("Bonjour tout le monde !");
    bob.SendMessage("Salut Alice et Charlie !");
    charlie.SendMessage("Coucou Bob !");
}

