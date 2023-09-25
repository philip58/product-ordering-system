#pragma once
#include<iostream>
#include<string>
#include<vector>

class User {
    public:
        User(const std::string &username, const std::string &password, const std::string &role);
        void adminLogin(const std::string& username,const std::string& password);
        void customerLogin(const std::string& username,const std::string& password);
        void setRole(std::string role);
        std::string getUsername();
        std::string getPassword();
        std::string getRole();
        int getNumberOfUsers();
        int getId();
    private:
        std::string username_;
        std::string password_;
        std::string role_;
        int id_;
        std::vector<User> users_ {};
        int number_of_users = 0;
        
};