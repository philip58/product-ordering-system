#include "user.h"

User::User(const std::string &username, const std::string &password, const std::string &role)
{
    username_ = username;
    password_ = password;
    role_ = role;
    id_ = number_of_users;
    number_of_users++;
    users_.push_back({username,password,role});
}

void User::adminLogin(const std::string &username, const std::string &password)
{
    if(username=="adminUserP" && password == "adminPasswordP" || getRole() == "admin"){
        std::cout<<"-------------------------------------"<<std::endl<<std::endl;
        std::cout<<"            Welcome Admin!           "<<std::endl<<std::endl;
        std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    }
}

void User::customerLogin(const std::string &username, const std::string &password)
{
    if(getRole() == "customer"){
        std::cout<<"-------------------------------------"<<std::endl<<std::endl;
        std::cout<<"            Welcome Customer!           "<<std::endl<<std::endl;
        std::cout<<"-------------------------------------"<<std::endl<<std::endl;
    }
}

void User::setRole(std::string role)
{
    role_ = role;
}

std::string User::getRole()
{
    return role_;
}

int User::getNumberOfUsers()
{
    return number_of_users;
}

int User::getId()
{
    return id_;
}

std::string User::getUsername()
{
    return username_;
}

std::string User::getPassword()
{
    return password_;
}
