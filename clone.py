import subprocess

def git_command(command):
    subprocess.run(command, shell=True)

def main():
    # Get user input for repository URL
    repo_url = input("Enter the repository URL: ")

    # Get user input for the directory to clone into
    clone_directory = input("Enter the directory to clone into (press Enter for current directory): ").strip()

    if clone_directory:
        git_command(f'git clone {repo_url} {clone_directory}')
    else:
        git_command(f'git clone {repo_url}')

if __name__ == "__main__":
    main()
