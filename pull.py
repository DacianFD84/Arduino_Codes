import subprocess

def git_command(command):
    # Rulează comanda Git în shell
    subprocess.run(command, shell=True)

def main():
    # Obține input-ul utilizatorului pentru numele branch-ului
    branch_name = input("Introduceți numele branch-ului (de exemplu, main, master): ")

    # Preia și unește schimbările
    git_command("git fetch origin")
    git_command(f'git merge origin/{branch_name}')

if __name__ == "__main__":
    main()
