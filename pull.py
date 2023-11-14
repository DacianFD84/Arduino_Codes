import subprocess

def git_command(command):
    subprocess.run(command, shell=True)

def main():
    # Get user input for branch name
    branch_name = input("Enter the branch name (e.g., main, master): ")

    # Fetch and merge changes
    git_command("git fetch origin")
    git_command(f'git merge origin/{branch_name}')

if __name__ == "__main__":
    main()
