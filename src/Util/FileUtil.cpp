#include "FileUtil.h"

#include <sstream>
#include <iostream>
#include <stdexcept>

std::string getFileData(const std::string& filePath)
{
    std::ifstream inFile(filePath);

    if(!inFile.is_open())
    {
        std::string error = "Unable to open file: " + filePath + "!";
        //throw std::runtime_error(error);
        std::cerr << error << std::endl;
    }

    std::ostringstream stream;
    stream << inFile.rdbuf();
    return stream.str();
}
