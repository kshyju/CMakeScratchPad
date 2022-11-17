// CMakeScratchPad.cpp : Defines the entry point for the application.
//

#include "main.h"
#include <boost/json.hpp>
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
	SPDLOG_INFO("Hello from SPDLOG");

    try
    {
        std::string dir("C:\\Dev\\site");
        std::string fileName("worker.config.json");
        std::string fullPath = dir + "/" + fileName;
        SPDLOG_INFO("fullPath:{}", fullPath);

        //fs::path p(dir);
        //p.append(fileName);
        //auto fullPath1 = fs::absolute(p);
        //SPDLOG_INFO("fullPath1:{}", fullPath1);
       

        std::ifstream ifs(fullPath);
        std::string input(std::istreambuf_iterator<char>(ifs), {});

        SPDLOG_INFO("Printing JSON:");
        SPDLOG_INFO(input);

        auto v = boost::json::parse(input);
        boost::json::object& o = v.as_object();
        boost::json::object& d = o.at("description").as_object();
    }
    catch (const std::exception& ex) {
        SPDLOG_ERROR("Caught unknown exception inside handler.{}", ex.what());
    }

    SPDLOG_WARN("Exiting main.");
	return 0;
}
