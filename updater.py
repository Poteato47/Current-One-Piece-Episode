import requests

# !!! TUTAJ WKLEJ TEN SAM LINK CO W KODZIE HTML !!!
FIREBASE_URL = "https://one-piece-tracker-571fd-default-rtdb.europe-west1.firebasedatabase.app/odcinek.json"

print("====================================")
print("    ONE PIECE TRACKER - UPDATER     ")
print("====================================")

while True:
    try:
        user_input = input(
            "Podaj numer aktualnego odcinka (lub 'q' aby wyjść): "
            )

        if user_input.lower() == 'q':
            print("Zamykanie programu.")
            break

        # Zamiana tekstu na liczbę
        numer_odcinka = int(user_input)

        # Wysyłamy czystą liczbę do bazy danych metodą PUT
        response = requests.put(FIREBASE_URL, json=numer_odcinka)

        if response.status_code == 200:
            print(
                f"-> Pomyślnie zmieniono na odcinek {numer_odcinka}! "
                "Strona zaraz się zaktualizuje.\n")
        else:
            print(f"-> Błąd bazy danych (Status: {response.status_code})\n")

    except ValueError:
        print("-> Błąd: Musisz podać poprawną liczbę!\n")
    except Exception as e:
        print(f"-> Błąd sieciowy: {e}\n")
