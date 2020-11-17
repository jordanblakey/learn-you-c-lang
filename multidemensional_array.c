#include <string.h>
#include <stdio.h>

struct row
{
  const char *lang;
  const char *word;
};

struct row table[] = {
    {"english", "Welcome"},
    {"czech", "Vitejte"},
    {"danish", "Velkomst"},
    {"dutch", "Welkom"},
    {"estonian", "Tere tulemast"},
    {"finnish", "Tervetuloa"},
    {"flemish", "Welgekomen"},
    {"french", "Bienvenue"},
    {"german", "Willkommen"},
    {"irish", "Failte"},
    {"italian", "Benvenuto"},
    {"latvian", "Gaidits"},
    {"lithuanian", "Laukiamas"},
    {"polish", "Witamy"},
    {"spanish", "Bienvenido"},
    {"swedish", "Valkommen"},
    {"welsh", "Croeso"}};

const char *greet(char *language)
{
  if (!language)
    return table[0].word;

  int nRows = sizeof(table) / sizeof(struct row);

  for (int i = 0; i < nRows; ++i)
  {
    if (strcmp(language, table[i].lang) == 0)
      return table[i].word;
  }
  return table[0].word;
}

int *main()
{
  printf("%s\n", greet("english"));
  printf("%s\n", greet("welsh"));
  printf("%s\n", greet("swedish"));
  printf("%s\n", greet("polish"));
  printf("%s\n", greet("french"));
  return 0;
}