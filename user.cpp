#include "user.h"

User::User(const std::string &username, const std::string &password, const std::string &role)
{
    username_ = username;
    password_ = password;
    role_ = role;
    id_ = number_of_users_;
    number_of_users_++;
    usernames_.insert(username_);
}

void User::adminLogin(const std::string &username, const std::string &password)
{
    if(username=="adminUserP" && password == "adminPasswordP" ){
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

std::string User::getRole() const
{
    return role_;
}

int User::getNumberOfUsers() const
{
    return number_of_users_;
}

void User::deleteUser(const User &user)
{
    if(users_.size()==1){
        users_.pop_back();
    } else {
        for(std::vector<User>::iterator it = users_.begin(); 
        it != users_.end();){
            if(it->getId()==getId()){
                users_.erase(it);
            } else {
                ++it;
            }
    }
    }
}

int User::getId() const
{
    return id_;
}

std::vector<User> User::getUserVector() const
{
    return users_;
}

User User::operator[](int index)
{
    return users_[index];
}

bool User::operator==(const User &user)
{
    return username_ == user.getUsername() 
    && password_ == user.getPassword() 
    && role_ == user.getRole();
}

std::unordered_set<std::string> User::getUsernames() const
{
    return usernames_;
}

std::ostream& operator<<(std::ostream& out, const User& user)
{
    out << user.getUsername(); 
    return out;
}

void User::printVector()
{
    for(auto item : users_){
        std::cout<<item;
    }
}

void User::pushUser(const User &user)
{
    users_.push_back(user);
}

std::string User::getUsername() const
{
    return username_;
}

std::string User::getPassword() const
{
    return password_;
}
