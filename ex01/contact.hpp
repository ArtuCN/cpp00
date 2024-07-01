#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

#define unt unsigned_int

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string number;
	public:
		void setFirstName(const std::string firstName);
		void setLastName(const std::string lastName);
		void setNickname(const std::string nickname);
		void setNumber(const std::string number);
		void setIndex(const uint8_t idx);

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getNumber() const;
		std::uint8_t getIndex() const;
		uint8_t idx;
};

# endif