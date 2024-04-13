#ifndef PEER_NETWORK_H
#define PEER_NETWORK_H

#include <string>
#include <vector>

// Définition de la classe Peer
class Peer {
private:
    std::string name;
    std::vector<Peer*> peers;

public:
    Peer(const std::string& n);

    void SendMessage(const std::string& message);
    void ReceiveMessage(const std::string& sender, const std::string& message);
    void AddPeer(Peer* peer);
};

// Fonction pour l'exemple 1 : réseau peer-to-peer basique
void ConnectMultiplePeers();

#endif

