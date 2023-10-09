#include "TBook.h"

TBook::TBook() {}

TBook::TBook(std::string title, std::string author, int year) {
    m_title = title;
    m_author = author;
    m_year = year;
}

std::string TBook::getTitle() {
    return m_title;
}
std::string TBook::getAuthor() {
    return m_author;
}
int TBook::getYear() {
    return m_year;
}
