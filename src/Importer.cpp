#include "../includes/Importer.h"

#include <fstream>
#include <iostream>

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
        // add lines that were not parsed to log and show it after operation
        // if line parsed successfully, parse it to flashcard and add to deck
        auto parsed_line{parse_line(line)};
        if (parsed_line)
        {
            deck.add_flashcard(parsed_line->first, parsed_line->second);
        }
    }

    if (deck.empty())
        return std::nullopt;

    return deck;
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

