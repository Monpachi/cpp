#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4)
		return (std::cerr << "wrong number of arguments" << std::endl, 1);
	std::string fileName = argv[1];
	std::string	outfileName = fileName + ".replace";
	std::string toFind = argv[2];
	std::string	replace = argv[3];
	std::ifstream infile;
	infile.open(fileName.c_str());
	if (!infile)
        return (std::cerr << "Unable to open infile" << std::endl, 1);
	std::ofstream outfile;
	std::remove(outfileName.c_str());
	outfile.open(outfileName.c_str(), std::fstream::app);
	if (!outfile)
		return (std::cerr << "Unable to open outfile" << std::endl, infile.close(), 1);
	std::string	line;
	while(std::getline(infile, line))
	{
		size_t	pos = line.find(toFind);
		while (pos != std::string::npos)
        { 
			line.erase(pos, toFind.length());
			line.insert(pos, replace);
			pos = line.find(toFind, pos + replace.size());
		}
        outfile << line << std::endl;
	}
	outfile.close();
	infile.close();
}
