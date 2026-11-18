#include <iostream>
#include <string>
#include <vector>

/*
    Karl Rohr
        Contact Info
            Email: krohr@fullsail.com
            Discord: karlrohr
            Zoom: https://fullsail.zoom.us/zbook/karl-rohr/karl-rohr-office-hours

            Midterm and lab 6 were due at the latest, last night at 11:59 pm eastern. Tonight I'll start grading them

            Lab 7 and the final are due tomorrow night @ 11:59 pm eastern with the latest it can be turned in is, Friday @ 11:59 pm eastern

            Today we're going over a lot of concepts to get you started for pg2
                Command Line Interface
                    Commands
                    Git
                Github

                ctime
                chrono

                random

                file io
                    ifstream
                    ofstream
                    fstream

                colors
                    Universal way
                        There are windows and linux based ways

                maybe the game

                Getting started in roughly 3 minutes

                Create an account at 
                    https://github.com/
                        with your personal account

                Go to this website and download the latest (first one)
                    https://git-scm.com/install/windows



        Command Line Notes
            pwd
                print working directory
                    will show the true path to the folder you're in, in gitbash/terminal

            ls
                list
                    will show files and folders with limitations

                There are optional commands for a ton of commands in cli
                    ls -la
                    ls -ll


        cd
            change directory
                changes the folder you're in

                cd ..
                    moves to the parent directory
                        we started in c:\users\krohr (or your username}

                        when we cd .. we move to c:\users


                    Now when working with cd or file/folders paths theres two things we to know
                        relative path
                            relative path is relative to the folder you're currently in

                        true path
                            the exact ptah on your computer to something

         mkdir
            make directory
                makes a folder in the folder you're currently in
                    you can specify a path to place this folder if you want

                    when making a folder if you want it to have spaces wrap the entire thing in
                    quotes
                        OR use underscores or dashes


        If you everhave a situation where you see a command and then on the following line >
            example
                mkdir "example
                >

                to kill the command hold control and press c


        rmdir
            removes an empty directory

                rmdir folderName

        rm -r 
            removes a non empty folder and all files and folders
            rm -r one

        rm -rf
            forcibly removes a folder and any subfolders/files
                bypasses read/write protections

        becareful of running these when you get commands like this from online
            especially if it is the rf version and has System32 in the command

        touch
            creates a file

            same deal as the mkdir if you want spaces wrap the name in quotes
                touch "one two"

            Also you can delete files in the same way, if you want to delete multiple at the same 
            time, just type each one after the rm

                rm filename

                rm one.txt two.txt

        nano
            simple text editor for linux based terminals
                nano fileName

                name readme.txt

            once open it'll be similar to note pad and let you type,
            to save and exit, will be ctrl x, then y, then enter

            nano can open files that open files that already exist
            and create new

        break until 2:40 pm eastern


        git init
            initializes a local git repo
                sets up the folder to start using git commands

            use this command in git bash/terminal when your pwd shows the folder you want to
            init

            do not use this in c:
            only use it in project folders
            do not put a git repo inside a git repo
                i.e
                    don't git init c
                    then git init c:\Users\username\November

            git add
                git add -A
                    adds all files in a folder to the unseen staging area

            git status
                this shows files/folders in the staging area
                    green means they are ready to "commit"

                    
                    red means they are not ready to "commit"

            git commit -m "message"
                this creates a version or snapshot of the project
                or anything staged from the git add it creates an id/tag
                and will be pushed when you run the push command



        git remote add NAME URL
            this will create a connection to upload and download to that specific url

            gite remote add origin https://github.com/YOUR-USERNAME-GOESgit -HERE/WHAT-YOU-CALLED-THE-REPO.git


        If you get author unknown you'll need to set up the globals
            git config --global user.email "youremailhere"

            git config --global user.name "yournameoraliashere"

        Then you may need to commit again, then try to push

        git push yourConnectionName master
            this uploads all commits currently ready to be pushed

            for me it is
                git push github master

                most people it is 
                git push origin master

                all depends on what you called the connection







                            





*/

int main()
{
    std::cout << "Hello World!\n";
}
