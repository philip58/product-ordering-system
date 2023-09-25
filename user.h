#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>

class User {
    public:
        User(const std::string &username, const std::string &password, const std::string &role);
        void adminLogin(const std::string& username,const std::string& password);
        void customerLogin(const std::string& username,const std::string& password);
        void setRole(std::string role);
        std::string getUsername() const;
        std::string getPassword() const;
        std::string getRole() const;
        int getNumberOfUsers() const;
        void deleteUser(const User& user);
        int getId() const;
        std::vector<User> getUserVector() const;
        std::unordered_set<std::string> getUsernames() const;
        User operator[](int index);
        bool operator==(const User& user);
        friend std::ostream& operator<<(std::ostream& out, const User& user);
        
        void printVector();
        void pushUser(const User& user);
    private:
        std::string username_;
        std::string password_;
        std::string role_;
        int id_;
        std::vector<User> users_ = {};
        int number_of_users_ = 0;
        std::unordered_set<std::string> usernames_;
        
};