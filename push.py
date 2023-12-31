# Scriptul de Inițializare și Push (push.py):
# Acest script automatizează procesul de inițializare a unui repository Git local.
# După adăugarea tuturor fișierelor în zona de staging, utilizatorul introduce un mesaj de commit și numele branch-ului.
# Scriptul efectuează apoi comiterea și face push la branch-ul specificat către repository-ul remote (origin).

import subprocess

def git_command(command):
    # Rulează comanda Git în shell
    subprocess.run(command, shell=True)

def main():
    # Initializează repository-ul Git
    git_command("git init")

    # Adaugă toate fișierele în zona de staging
    git_command("git add .")

    # Obține mesajul de commit de la utilizator
    commit_message = input("Introduceți mesajul de commit: ")

    # Comite schimbările
    git_command(f'git commit -m "{commit_message}"')

    # Obține numele branch-ului de la utilizator
    branch_name = input("Introduceți numele branch-ului (de exemplu, main, master): ")

    # Setează upstream și trimite pe branch-ul specificat
    git_command(f'git push -u origin {branch_name}')

if __name__ == "__main__":
    main()

