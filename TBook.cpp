#include "TBook.h"

TBook::TBook() {}

TBook::TBook(std::string title, std::string author, int year) {
    m_title = title;
    m_author = author;
    m_year = year;
}
