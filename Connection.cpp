#include "Connection.h"

Connection::Connection(string dbname , string user , string password , string hostaddr , string port) {
    try
    {
        string conn_string = "dbname=" + dbname + " user=" + user + " password=" + password + " hostaddr=" + hostaddr + " port=" + port;
        conn = new connection(conn_string);
        if (conn->is_open()) {
            cout << "Database Connection Succesfull !" << endl;
        } else {
            cout << "Error connecting to database" << endl;
        }    
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
    }
        
}

Connection::~Connection(){
    conn->close();
    delete conn;
}

connection *Connection::getConnection() {
    return conn;
}