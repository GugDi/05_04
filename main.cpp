#include <stdio.h>
#include "TBook.h"

int main() {
  TBook book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
  TBook book2("To Kill a Mockingbird", "Harper Lee", 1960);

  printf("%s by %s (%d)\n", book1.getTitle().c_str(), book1.getAuthor().c_str(), book1.getYear());
  printf("%s by %s (%d)\n", book2.getTitle().c_str(), book2.getAuthor().c_str(), book2.getYear());
};
