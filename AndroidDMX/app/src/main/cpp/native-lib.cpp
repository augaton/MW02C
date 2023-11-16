#include <jni.h>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androiddmx_MainActivity_stringFromJNI(
    JNIEnv* env,
    jobject) {
    std::string message;

    std::string m_adresseIPServeur = "172.20.21.17";
    int m_portServeur = 17777;

    int m_maSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(m_maSocket == -1)
    {
        message = "Creation de la socket : ERREUR.";
        return env->NewStringUTF(message.c_str());
    }
    message = "Creation de la socket : OK.";

    struct sockaddr_in serveurAJoindre;
    serveurAJoindre.sin_family = AF_INET;
    serveurAJoindre.sin_addr.s_addr = inet_addr(m_adresseIPServeur.c_str());
    serveurAJoindre.sin_port = htons(m_portServeur);

    int resultat = connect(m_maSocket, (const struct sockaddr *) &serveurAJoindre, sizeof(serveurAJoindre));
    if (resultat != 0)
    {
        message = "Connexion au serveur : ERREUR.";
        return env->NewStringUTF(message.c_str());
    }
    return env->NewStringUTF(message.c_str());
}