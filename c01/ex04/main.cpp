#include <iostream>
#include <fstream>

void read_file(std::string &s, std::ifstream &in)
{
	std::string tmp;
	while (getline(in, tmp))
		s.append(tmp).append("\n");
}

void replace_all(std::string &src, const std::string &old_substr, const std::string &new_substr)
{
	int      substr_pos;
	int      last_find;
	std::string tmp;
	last_find = substr_pos = int(src.find(old_substr));
	while (substr_pos != -1 && !old_substr.empty())
	{
		tmp = src.substr(substr_pos + old_substr.length());
		if (substr_pos == 0)
			src = new_substr + tmp;
		else
			src = src.substr(0,substr_pos).append(new_substr).append(tmp);
		last_find = substr_pos = int(src.find(old_substr, last_find));
	}
}

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Wrong arg count" << std::endl;
		return (1);
	}
	std::string infile_name(av[1]);
	std::string outfile_name(infile_name);
	outfile_name.append(".replace");
	std::ofstream out;
	std::ifstream in;
	std::string res;
	in.open(infile_name.data(), std::ios::in);
	if (!in.is_open()) {
		std::cout << "Can't open " << infile_name << std::endl;
		return (2);
	}
	read_file(res, in);
	if (res.length() == 0)
	{
		std::cout << "File is empty or is a directory" << std::endl;
		in.close();
		return (3);
	}
	replace_all(res, av[2], av[3]);
	out.open(outfile_name.data(), std::ios::trunc);
	if (!out.is_open()) {
		in.close();
		std::cout << "Can't write result in " << infile_name << std::endl;
		return (4);
	}
	out.write(res.data(), long(res.length()));
	in.close();
	out.close();
	return 0;
}