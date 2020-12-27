#include <iostream>
#include <string>
using namespace std;
string encrytefunction(string message){
    string aphabet = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string encryptedMessage {" "};
    size_t index=0;
    encryptedMessage = message;
    for (char c:message) {
        size_t position = aphabet.find(c);
        if (position!=string::npos){
            if (position == aphabet.length()){
                position =0;
                encryptedMessage.at(index)=aphabet.at(position+3);
                ++index;
            }else{
                encryptedMessage.at(index)=aphabet.at(position+3);
                ++index;
            }
        }else{
            encryptedMessage.at(index)=c;
            ++index;
        }
    }
    return encryptedMessage;
}
string decryptefunction(string encrytedmessage){
    string aphabet = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string decryptedMessage {" "};
    size_t index=0;
    decryptedMessage = encrytedmessage;
    for (char c:encrytedmessage) {
        size_t position = aphabet.find(c);
        if (position!=string::npos){
            if (position == aphabet.length()){
                position =0;
                decryptedMessage.at(index)=aphabet.at(position-3);
                ++index;
            }else{
                decryptedMessage.at(index)=aphabet.at(position-3);
                ++index;
            }
        }else{
            decryptedMessage.at(index)=c;
            ++index;
        }
    }
    return decryptedMessage;
}

int main() {
    string message {};
    string encryptedMessage {" "};
    string longestmessage {" "};
    size_t lenght=0;
    cout<<endl;
    cout<< "Write your message that need to be encrypted: ";
    getline(cin, message);
    cout<< "Encryping..........."<<endl;
    for (size_t positions=0; positions<=message.length()-1; ++positions) {
        size_t condition = message.find(" ");
        if (condition!=string::npos){
            if (positions!= message.length()-1){
                if (isspace(message.at(positions)) && positions-lenght>longestmessage.length()-1) {
                    longestmessage = message.substr(lenght,positions-lenght+1);
                    lenght=positions;
                }
            }
            else if (longestmessage.length()-1<positions-lenght){
                longestmessage = message.substr(lenght,positions-lenght+1);
            }else{
                longestmessage = longestmessage;
            }
        }else{
            longestmessage = message;
            break;
        }
        
    }
    encryptedMessage = encrytefunction(longestmessage);
    cout<< "Encrypted message is: "<<encryptedMessage<<endl;
    cout<< "Decrypting..........."<<endl;
    encryptedMessage = decryptefunction(encryptedMessage);
    cout<< "Encrypted message is: "<<encryptedMessage<<endl;
    return 0;
}

