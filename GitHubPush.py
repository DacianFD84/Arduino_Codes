import subprocess

def git_command(command):
    subprocess.run(command, shell=True)

def main():
    # Initialize Git repository
    git_command("git init")

    # Add all files to the staging area
    git_command("git add .")

    # Get user input for commit message
    commit_message = input("Enter your commit message: ")

    # Commit changes
    git_command(f'git commit -m "{commit_message}"')

    # Get user input for branch name
    branch_name = input("Enter the branch name (e.g., main, master): ")

    # Set upstream and push to the specified branch
    git_command(f'git push -u origin {branch_name}')

if __name__ == "__main__":
    main()
