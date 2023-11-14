import subprocess

def git_command(command):
    # Rulează comanda Git în shell
    subprocess.run(command, shell=True)

def main():
    # Obține input-ul utilizatorului pentru URL-ul repository-ului
    repo_url = input("Introduceți URL-ul repository-ului: ")

    # Obține input-ul utilizatorului pentru directorul în care se face clonarea
    clone_directory = input("Introduceți directorul în care se face clonarea (apăsați Enter pentru directorul curent): ").strip()

    if clone_directory:
        git_command(f'git clone {repo_url} {clone_directory}')
    else:
        git_command(f'git clone {repo_url}')

if __name__ == "__main__":
    main()
