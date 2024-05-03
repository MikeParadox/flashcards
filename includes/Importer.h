#ifndef IMPORTER_H
#define IMPORTER_H

#include "../includes/Deck.h"

#include <array>
#include <optional>
#include <string>

// TODO fix "import_from_file" to behave appropriate to the error occured
// TODO add some simple logging system to "import_from_file"
/*
class to import a deck from a text file
*/

class Importer
{
public:
    explicit Importer(const std::string& p) : path{p} {}

    /*reads cards from text file and return a deck or optional.empty
        in case of any problems*/
    std::optional<Deck> import_from_file() const;



private:
    const std::string path;
    static constexpr std::array<std::string, 2> extensions{"txt", "csv"};

    // TODO implement
    // checks if given path is valid
    bool validate_path(const std::string& path) const;
    // TODO implement
    // checks that given filename has correct format and extension
    bool check_file_extension(const std::string& path) const;
    // TODO implement
    // splits a string using delimiter
    std::optional<std::pair<std::string, std::string>>
    parse_line(const std::string& line, char delimiter = '|') const;
    // trims leading and trailing whitespaces of given string
    std::string trim(std::string&& str) const;
};



#endif // IMPORTER_H
