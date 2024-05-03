#include "../includes/Importer.h"

#include <fstream>
#include <iostream>
#include <string>

std::optional<Deck> Importer::import_from_file() const
{
    std::ifstream ist{path};

    if (!ist)
    {
        std::cerr << "File cannot be opened for reading";
        return std::nullopt;
    }

    Deck deck;
    std::string line;

    while (std::getline(ist, line))
    {
        // TODO implement
        // add lines that were not parsed to log and show it after operation
        // if line parsed successfully, parse it to flashcard and add to deck
        auto parsed_line{parse_line(line)};
        if (parsed_line)
            deck.add(parsed_line->first, parsed_line->second);
    }

    if (deck.empty())
        return std::nullopt;

    return std::optional<Deck>{deck};
}

std::optional<std::pair<std::string, std::string>>
Importer::parse_line(const std::string& line, char delimiter) const
{
    auto delimiter_position{line.find(delimiter)};

    if (delimiter_position)
    {
        return std::optional<std::pair<std::string, std::string>>{
            std::pair{trim(line.substr(0, delimiter_position)),
                      trim(line.substr(delimiter_position + 1))}};
    }

    return std::nullopt;
}





// returns directory separator char of the underlying OS
char dir_separator()
{
#ifdef _WIN32
    return '\\';
#else
    return '/';
#endif
}

