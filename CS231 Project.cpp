#include <iostream>
using namespace std;

// Passenger

class Passenger{

private:
int id;
string name;
string passport;

public:

void setID(int x){
id = x;
}

void setName(string x){
name = x;
}

void setPassport(string x){
passport = x;
}

int getID(){
return id;
}

string getName(){
return name;
}

string getPassport(){
return passport;
}
};

struct PassengerNode{

Passenger data;
PassengerNode* next;
};

class PassengerList{

public:

PassengerNode* head;
PassengerList(){
head = NULL;
}

void insert(){

PassengerNode* n = new PassengerNode;
int id;
string name;
string passport;

cout << "\nEnter Passenger ID: ";
cin >> id;

cout << "Enter Passenger Name: ";
cin >> name;

cout << "Enter Passport: ";
cin >> passport;

n->data.setID(id);
n->data.setName(name);
n->data.setPassport(passport);

n->next = head;
head = n;

cout << "\nAdded Successfully\n";
}

void display(){
PassengerNode* t = head;

cout << "\n============================\n";
cout << "ID\tName\tPassport\n";
cout << "============================\n";

while(t != NULL){

cout << t->data.getID() << "\t";
cout << t->data.getName() << "\t";
cout << t->data.getPassport() << endl;

t = t->next;
}
}

void find(){

int id;
cout << "\nEnter ID to find: ";
cin >> id;

PassengerNode* t = head;

while(t != NULL){

if(t->data.getID() == id){

cout << "\nPassenger Found\n";
cout << "Name: ";
cout << t->data.getName() << endl;

return;
}

t = t->next;
}

cout << "\nPassenger Not Found\n";
}

void deleteNode(){

int id;

cout << "\nEnter ID to delete: ";
cin >> id;
PassengerNode* t = head;
PassengerNode* prev = NULL;

while(t != NULL){

if(t->data.getID() == id){

if(prev == NULL){
head = t->next;
}
else{
prev->next = t->next;
}

delete t;

cout << "\nDeleted Successfully\n";
return;
}

prev = t;
t = t->next;
}

cout << "\nPassenger Not Found\n";
}

void modify(){

int id;
cout << "\nEnter ID to modify: ";
cin >> id;

PassengerNode* t = head;

while(t != NULL){

if(t->data.getID() == id){

string name;

cout << "Enter New Name: ";
cin >> name;

t->data.setName(name);

cout << "\nUpdated Successfully\n";
return;
}

t = t->next;
}
cout << "\nPassenger Not Found\n";
}
};

// Stack
class PassengerStack{

public:

PassengerNode* top;

PassengerStack(){
top = NULL;
}

void push(Passenger p){

PassengerNode* n = new PassengerNode;
n->data = p;
n->next = top;

top = n;
}

void display(){
PassengerNode* t = top;

cout << "\n===== STACK DATA =====\n";

while(t != NULL){
cout << t->data.getID() << "\t";
cout << t->data.getName() << endl;

t = t->next;
}
}
};

// Queue
class PassengerQueue{

public:

PassengerNode* front;
PassengerNode* rear;

PassengerQueue(){

front = NULL;
rear = NULL;
}

void enqueue(Passenger p){

PassengerNode* n = new PassengerNode;

n->data = p;
n->next = NULL;

if(rear == NULL){

front = rear = n;
}
else{

rear->next = n;
rear = n;
}
}

void display(){

PassengerNode* t = front;

cout << "\n===== QUEUE DATA =====\n";

while(t != NULL){

cout << t->data.getID() << "\t";
cout << t->data.getName() << endl;

t = t->next;
}
}
};

// Flight

class Flight{

private:

int id;
string destination;
string gate;
string departureTime;

public:

void setID(int x){
id = x;
}

void setDestination(string x){
destination = x;
}

void setGate(string x){
gate = x;
}

void setDepartureTime(string x){
departureTime = x;
}

int getID(){
return id;
}

string getDestination(){
return destination;
}

string getGate(){
return gate;
}

string getDepartureTime(){
return departureTime;
}
};
struct FlightNode{

Flight data;
FlightNode* next;
};

class FlightList{

public:

FlightNode* head;

FlightList(){
head = NULL;
}

void insert(){

FlightNode* n = new FlightNode;

int id;
string destination;
string gate;
string time;

cout << "\nEnter Flight ID: ";
cin >> id;

cout << "Enter Destination: ";
cin >> destination;

cout << "Enter Gate: ";
cin >> gate;

cout << "Enter Departure Time: ";
cin >> time;

n->data.setID(id);
n->data.setDestination(destination);
n->data.setGate(gate);
n->data.setDepartureTime(time);

n->next = head;
head = n;

cout << "\nAdded Successfully\n";
}

void display(){
FlightNode* t = head;

cout << "\n========================================\n";
cout << "ID\tDestination\tGate\tTime\n";
cout << "========================================\n";

while(t != NULL){

cout << t->data.getID() << "\t";
cout << t->data.getDestination() << "\t";
cout << t->data.getGate() << "\t";
cout << t->data.getDepartureTime() << endl;

t = t->next;
}
}

void find(){

int id;

cout << "\nEnter Flight ID: ";
cin >> id;

FlightNode* t = head;

while(t != NULL){

if(t->data.getID() == id){

cout << "\nFlight Found\n";

cout << "Destination: ";
cout << t->data.getDestination() << endl;

cout << "Gate: ";
cout << t->data.getGate() << endl;

cout << "Departure Time: ";
cout << t->data.getDepartureTime() << endl;

return;
}

t = t->next;
}

cout << "\nFlight Not Found\n";
}

void deleteNode(){

int id;

cout << "\nEnter Flight ID to delete: ";
cin >> id;

FlightNode* t = head;
FlightNode* prev = NULL;

while(t != NULL){

if(t->data.getID() == id){

if(prev == NULL){
head = t->next;
}
else{
prev->next = t->next;
}

delete t;

cout << "\nDeleted Successfully\n";
return;
}

prev = t;
t = t->next;
}

cout << "\nFlight Not Found\n";
}

void modify(){

int id;

cout << "\nEnter Flight ID to modify: ";
cin >> id;

FlightNode* t = head;

while(t != NULL){

if(t->data.getID() == id){

string destination;

cout << "Enter New Destination: ";
cin >> destination;

t->data.setDestination(destination);

cout << "\nUpdated Successfully\n";
return;
}

t = t->next;
}

cout << "\nFlight Not Found\n";
}
};

// Ticket

class Ticket{

private:

int ticketID;
int passengerID;
int flightID;
string officeName;

public:

void setTicketID(int x){
ticketID = x;
}

void setPassengerID(int x){
passengerID = x;
}

void setFlightID(int x){
flightID = x;
}

void setOfficeName(string x){
officeName = x;
}

int getTicketID(){
return ticketID;
}

int getPassengerID(){
return passengerID;
}

int getFlightID(){
return flightID;
}

string getOfficeName(){
return officeName;
}
};

struct TicketNode{

Ticket data;
TicketNode* next;
};

class TicketList{

public:

TicketNode* head;

TicketList(){
head = NULL;
}

void insert(){

TicketNode* n = new TicketNode;

int id;
int pid;
int fid;
string office;

cout << "\nEnter Ticket ID: ";
cin >> id;

cout << "Enter Passenger ID: ";
cin >> pid;

cout << "Enter Flight ID: ";
cin >> fid;

cout << "Enter Office Name: ";
cin >> office;

n->data.setTicketID(id);
n->data.setPassengerID(pid);
n->data.setFlightID(fid);
n->data.setOfficeName(office);

n->next = head;
head = n;

cout << "\nAdded Successfully\n";
}

void display(){

TicketNode* t = head;

cout << "\n====================================================\n";
cout << "Ticket\tPassenger\tFlight\tOffice\n";
cout << "====================================================\n";

while(t != NULL){

cout << t->data.getTicketID() << "\t";
cout << t->data.getPassengerID() << "\t\t";
cout << t->data.getFlightID() << "\t";
cout << t->data.getOfficeName() << endl;

t = t->next;
}
}
};
// Office

class Office{

private:

int id;
string name;
string location;

public:

void setID(int x){
id = x;
}

void setName(string x){
name = x;
}

void setLocation(string x){
location = x;
}

int getID(){
return id;
}

string getName(){
return name;
}

string getLocation(){
return location;
}
};

struct OfficeNode{

Office data;
OfficeNode* next;
};

class OfficeList{

public:

OfficeNode* head;

OfficeList(){
head = NULL;
}

void insert(){

OfficeNode* n = new OfficeNode;

int id;
string name;
string location;

cout << "\nEnter Office ID: ";
cin >> id;

cout << "Enter Office Name: ";
cin >> name;

cout << "Enter Location: ";
cin >> location;

n->data.setID(id);
n->data.setName(name);
n->data.setLocation(location);

n->next = head;
head = n;

cout << "\nAdded Successfully\n";
}

void display(){

OfficeNode* t = head;

cout << "\n========================================\n";
cout << "ID\tName\tLocation\n";
cout << "========================================\n";

while(t != NULL){

cout << t->data.getID() << "\t";
cout << t->data.getName() << "\t";
cout << t->data.getLocation() << endl;

t = t->next;
}
}
};

// Main

int main(){

PassengerList pList;
PassengerStack pStack;
PassengerQueue pQueue;

FlightList fList;
TicketList tList;
OfficeList oList;

int ch;

do{

cout << "\n=========================\n";
cout << " AIRLINE MANAGEMENT MENU\n";
cout << "=========================\n";

cout << "1 Passenger\n";
cout << "2 Flight\n";
cout << "3 Ticket\n";
cout << "4 Office\n";
cout << "5 Exit\n";

cout << "Enter Choice: ";
cin >> ch;

// Passenger

if(ch == 1){

int op;

do{

cout << "\n----- Passenger Menu -----\n";

cout << "1 Insert\n";
cout << "2 Display\n";
cout << "3 Delete\n";
cout << "4 Find\n";
cout << "5 Modify\n";
cout << "6 Display\n";
cout << "7 Back\n";

cout << "Enter Choice: ";
cin >> op;

if(op == 1){
pList.insert();
Passenger p;

p.setID(1);
p.setName("Temp");
p.setPassport("P1");

pStack.push(p);
pQueue.enqueue(p);

}

else if(op == 2){
pList.display();
}

else if(op == 3){
pList.deleteNode();
}

else if(op == 4){
pList.find();
}

else if(op == 5){
pList.modify();
}

else if(op == 6){
pStack.display();
pQueue.display();
}

}while(op != 7);
}
// Flight

else if(ch == 2){

int op;

do{

cout << "\n----- Flight Menu -----\n";

cout << "1 Insert\n";
cout << "2 Display\n";
cout << "3 Delete\n";
cout << "4 Find\n";
cout << "5 Modify\n";
cout << "6 Back\n";

cout << "Enter Choice: ";
cin >> op;

if(op == 1){
fList.insert();
}
else if(op == 2){
fList.display();
}
else if(op == 3){
fList.deleteNode();
}
else if(op == 4){
fList.find();
}
else if(op == 5){
fList.modify();
}

}while(op != 6);
}

// Ticket

else if(ch == 3){

int op;

do{

cout << "\n----- Ticket Menu -----\n";

cout << "1 Insert\n";
cout << "2 Display\n";
cout << "3 Back\n";

cout << "Enter Choice: ";
cin >> op;

if(op == 1){
tList.insert();
}

else if(op == 2){
tList.display();
}

}while(op != 3);
}

// Office
else if(ch == 4){

int op;

do{
	
cout << "\n----- Office Menu -----\n";

cout << "1 Insert\n";
cout << "2 Display\n";
cout << "3 Back\n";
cout << "Enter Choice: ";
cin >> op;

if(op == 1){
oList.insert();

}

else if(op == 2){
oList.display();
}

}while(op != 3);
}

}while(ch != 5);
return 0;
}
