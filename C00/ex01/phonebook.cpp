/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 16:36:51 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 08:05:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add(Contact *entry)
{
	std::string buf;

	std::cout<<"First name:";
	std::getline(std::cin, buf);
	entry->set_first_name(buf);
	std::cout<<"Last name:";
	std::getline(std::cin, buf);
	entry->set_last_name(buf);
	std::cout<<"Nickname:";
	std::getline(std::cin, buf);
	entry->set_nickname(buf);
	std::cout<<"Login:";
	std::getline(std::cin, buf);
	entry->set_login(buf);
	std::cout<<"Postal address:";
	std::getline(std::cin, buf);
	entry->set_postal_address(buf);
	std::cout<<"Email address:";
	std::getline(std::cin, buf);
	entry->set_email_address(buf);
	std::cout<<"Phone number:";
	std::getline(std::cin, buf);
	entry->set_phone_number(buf);
	std::cout<<"Birthdate:";
	std::getline(std::cin, buf);
	entry->set_birthdate(buf);
	std::cout<<"Favorite meal:";
	std::getline(std::cin, buf);
	entry->set_favorite_meal(buf);
	std::cout<<"Underwear color:";
	std::getline(std::cin, buf);
	entry->set_underwear_color(buf);
	std::cout<<"Darkest secret:";
	std::getline(std::cin, buf);
	entry->set_darkest_secret(buf);
	std::cout<<std::endl<<"Contact added successfully!"<<std::endl<<">";
}

void	print_entry_contact_info(Contact *entry)
{
	std::cout<< entry->getFirst_name() <<std::endl;
	std::cout<< entry->getLast_name() <<std::endl;
	std::cout<< entry->getPostal_address() <<std::endl;
	std::cout<< entry->getEmail_address() <<std::endl;
	std::cout<< entry->getPhone_number() <<std::endl;
}

void	welcome(void)
{
	std::cout <<std::endl <<"WELCOME TO THE LAME PHONEBOOK..." <<std::endl;
	std::cout <<"... where you can store, search and print up to 8 contacts!" <<std::endl;
	std::cout <<"Impressive no?!"<<std::endl<<std::endl<<"Available commands:"<<std::endl;
	std::cout <<" ______________________________________________ " <<std::endl;
	std::cout <<"|                                              |" <<std::endl;
	std::cout <<"|ADD___: adds a new contact                    |" <<std::endl;
	std::cout <<"|SEARCH: prints the contacts and allows you to |" <<std::endl;
	std::cout <<"|        get more info about a specific one    |" <<std::endl;
	std::cout <<"|EXIT__: exits this completely lame phonebook  |" <<std::endl;
	std::cout <<"|______________________________________________|" <<std::endl;
	std::cout << std::endl << "Enjoy!" <<std::endl;
}

void	search(Contact entries[8], int count)
{
	if (!count)
		std::cout<<"No contact has been added yet"<<std::endl;
	else
	{
		int index (1);
		std::cout <<"Provide the entry index of the contact info you wish to get or press \"q\" to quit"<<std::endl;
		std::cout <<std::endl<<"Available entries:" << std::endl; 
		std::cout <<" ___________________________________________"<<std::endl;
		std::cout <<"|  Index    First name    Name     Nickname |"<<std::endl;
		std::cout <<"|          |          |          |          |"<<std::endl;
		while (index <= count && index <= 8)
		{
			entries[index - 1].print_entry_id(index);
			index++;
		}
		std::cout <<"|__________|__________|__________|__________|"<<std::endl <<std::endl<<"Index of the entry you wish to have the contact info of ?"<<std::endl<<">>";
		while (1)
		{
			std::string	buf;
			std::getline(std::cin,buf);
			if (buf.size() == 1 && buf[0] == 'q')
				break ;
			else if (buf.size() == 1 && buf[0] > '0' && buf[0] <= ('0' + count))
			{
				print_entry_contact_info(&entries[buf[0] - '0' - 1]);
				break ;
			}
			else if (buf.size())
				std::cout <<"Error"<<std::endl<< "Provide the entry index of the contact info you wish to get or press \"q\" to quit"<<std::endl<<">>";
		}
	}
	std::cout<<'>';
	return ;
}



int		main(void)
{
	Contact		entries[8];
	int			count(0);
	std::string	buf;
	std::string add_command("ADD");
	std::string search_command("SEARCH");
	std::string exit_command("EXIT");

	welcome();
	std::cout<<">";
	while(1)
	{
		std::getline(std::cin,buf);
		if (!(add_command.compare(buf)))
		{
			if (count >= 8)
				std::cout<<"We said 'no more than 8 contacts' dude!"<<std::endl<<">";
			else
				add(&entries[count]);
			count++;
		}
		else if (!(search_command.compare(buf)))
			search(entries, count);
		else if (!(exit_command.compare(buf)))
			break ;
		else
			std::cout<<">";
	}
	std::cout<<"See ya! :)"<<std::endl;
	return (0);
}