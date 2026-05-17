// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int numer_odcinka;

//     printf("Podaj numer aktualnego odcinka One Piece: ");
//     if (scanf("%d", &numer_odcinka) != 1) {
//         printf("To nie jest poprawna liczba!\n");
//         return 1;
//     }

//     FILE *plik = fopen("index.html", "w");
//     if (plik == NULL) {
//         printf("Blad przy otwieraniu pliku!\n");
//         return 1;
//     }

//     fprintf(plik, "<!DOCTYPE html>\n<html lang=\"pl\">\n<head>\n");
//     fprintf(plik, "<meta charset=\"UTF-8\">\n<title>One Piece Update</title>\n");
//     fprintf(plik, "</head>\n<body>\n");
//     fprintf(plik, "<h1>Aktualny odcinek One Piece: %d</h1>\n", numer_odcinka);
//     fprintf(plik, "<p>Zaktualizowano z poziomu programu w C!</p>\n");
//     fprintf(plik, "</body>\n</html>\n");

//     fclose(plik);

//     printf("Plik index.html zostal wygenerowany!\n");
//     printf("Teraz musisz zrobic 'git add', 'git commit' i 'git push', aby zaktualizowac GitHub Pages.\n");

//     return 0;
// }