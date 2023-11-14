import subprocess

def git_command(command):
    # Rulează comanda Git în shell
    subprocess.run(command, shell=True)

def main():
    # Inițializează repository-ul Git
    git_command("git init")

    # Adaugă toate fișierele în zona de staging
    git_command("git add .")

    # Obține mesajul de commit de la utilizator
    commit_message = input("Introduceți mesajul de commit: ")

    # Comite schimbările
    git_command(f'git commit -m "{commit_message}"')

    # Obține numele branch-ului de la utilizator
    branch_name = input("Introduceți numele branch-ului (de exemplu, main, master): ")

    # Setează upstream și face push pe branch-ul specificat
    git_command(f'git push -u origin {branch_name}')

    # Întreabă dacă utilizatorul dorește să facă pull la schimbări
    pull_option = input("Doriți să faceți pull la schimbările din repository? (y/n): ")

    if pull_option.lower() == 'y':
        # Preia și unește schimbările
        git_command("git fetch origin")
        git_command(f'git merge origin/{branch_name}')

if __name__ == "__main__":
    main()
