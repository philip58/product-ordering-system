#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include "user.cpp"

class OrderSystem 
{
    public:
        OrderSystem();
        void mainMenu();
        void adminMenu();
        void customerMenu();
        void exit();
        void login();
        int getNumberOfUsers();
        void adminAuthorizedPage();
    private:
        std::string product_name_;
        int product_number_;
        float product_price_;
        int number_of_users;
};

