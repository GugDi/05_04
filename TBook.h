#ifndef TBOOK_H
#define TBOOK_H

#include <string>

class TBook {
public:
    TBook();
    TBook(std::string title, std::string author, int year);
    std::string getTitle();
    std::string getAuthor();
    int getYear();

private:
    std::string m_title;
    std::string m_author;
    int m_year;
};

#endif