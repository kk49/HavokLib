#include "HavokApi.hpp"
#include <iostream>

int main(int argc, char const** argv)
{
    if(argc < 3)
    {
        std::cout << "<EXE> <INPUT HAVOK FILE> <OUTPUT HAVOK XML FILE NAME>" << std::endl;
        return -1;
    }

    IhkPackFile *hdr = IhkPackFile::Create(argv[1]);
    hdr->ExportXML(argv[2], HK2014);

    return 0;
}