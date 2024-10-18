#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

#define unt unsigned_int

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _number;
	public:
		void setFirstName(const std::string firstName);
		void setLastName(const std::string lastName);
		void setNickname(const std::string nickname);
		void setNumber(const std::string number);
		void setIndex(const int idx);

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getNumber() const;
		int getIndex() const;
		int idx;
};

# endif