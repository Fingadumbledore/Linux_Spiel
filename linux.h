#include <iostream>
using namespace std;

string ls = "standart";
string cd = " "; 
string standort;
string touch;
string command;
string apt;
string Software;
string linput;
string git;
string linput;
string sudo;
string gitstatus;
string uname;
string ssh;


string lsstandard;
string Dokumente;
string Downloads;
string Bilder;
string Videos;
string Musik;
string Test;
string Bin;
string Sbin;
string Root;
string Boot;
int lsfunktion(){ //Funktion für den Linux Command LS
    
    if (ls == "standart")
    {
        lsstandard = "Dokumente Downloads Bilder Videos Musik";
        cout << lsstandard;
    }
    else if (ls == "Dokumente")
    {
        Dokumente = "README.md";
        cout << Dokumente;
    }
    else if (ls == "Download")
    {
        Downloads = "README.md";
        cout << Downloads;
    }
    else if (ls == "Bilder")
    {
        Bilder = "README.md";
        cout << Bilder;
    }
    else if (ls == "Videos")
    {
        Videos = "README.md";
        cout << Videos;
    }
    else if (ls == "Musik")
    {
       Musik = "README.md";
       cout << Musik;
       
    }
    else if (ls == "Test")
    {
        Test = "README.md";
        cout << Test;
    }
    else if (ls == "Bin")
    {
        Bin = "README.md";
        cout << Bin;
    }
    else if (ls == "Sbin")
    {
        Sbin = "README.md";
        cout << Sbin;
    }
    else if (ls == "root")
    {
        Root = "README.md";
        cout << Root;
    }
    else if (ls == "boot")
    {
        Boot = "README.md";
        cout << Boot;
    }
       

}

int cdfunktion(){ //Funktion für den Linux Command CD

    if (cd == "standart")
    {
        ls = "standart";
        standort = "Standart";
    }
    else if (cd == "Dokumente")
    {
        ls = "Dokumente";
        standort = "Dokumente";
    }
    else if (cd == "Downloads")
    {
        ls = "Download";
        standort = "Downloads";
    }
    else if (cd == "Bilder")
    {
        ls = "Bilder";
        standort = "Bilder";
    }
    else if (cd == "Videos")
    {
        ls = "Videos";
        standort = "Videos";
    }
    else if (cd == "Musik")
    {
        ls = "Musik";
        standort = "Musik";
    }
    else if (cd == "Test")
    {
        ls = "Test";
        standort = "Test";
    }
    else if (cd == "Sbin")
    {
        ls = "Sbin";
        standort = "Sbin";
    }
    else if (cd == "Bin")
    {
        ls = "Bin";
        standort = "Bin";
    }
    else if (cd == "Root")
    {
        ls = "Root";
        standort = "Root";
    }
    else if (cd == "Boot")
    {
        ls = "Boot";
        standort = "Boot";
    }
    else
        cout << "error";
    
    

}

int sudofunktion(){ //Funktion für den Linux Command Sudo

    if (sudo == "yes")
    {
        /* code */
    }
    else 
    {
       cout << "Sudo steht für Super User, und ist dafür da erweiterte Rechte zu bekommen.\n";
       cout << "Für dieses Spiel benötigen wir es allerdings nicht";
    }
    
    
    


}

int pwdfunktion(){ //Funktion für den Linux Command pwd

    if (standort == "Dokumente" || standort == "Downloads" || standort == "Videos" || standort == "Bilder" || standort == "Musik" || standort == "Test" || standort =="standart")
    {
        cout << "/home/user/" << standort;
    }
    else
        cout << "/"<< standort;
    
}

int touchfunktion(){ //Funktion für den Linux Command touch

    cout << "$ ";
    cin >> touch;
    if (standort == "standart")
    {
        lsstandard = lsstandard + touch;
        touch = " ";
    }
    else if (standort == "Dokumente")
    {
        Dokumente = Dokumente + touch;
        touch = " ";
    }
    else if (standort == "Downloads")
    {
        Downloads = Downloads + touch;
        touch = " ";
    }
    else if (standort == "Bilder")
    {
        Bilder = Bilder + touch;
        touch = " ";
    }
    else if (standort == "Videos")
    {
        Videos = Videos + touch;
        touch = " ";
    }
    else if (standort == "Musik")
    {
        Musik = Musik + touch;
        touch = " ";
    }
    else if (standort == "Test")
    {
        Test = Test + touch;
        touch = " ";
    }
    else if (standort == "Bin")
    {
        Bin = Bin + touch;
        touch = " ";
    }
    else if (standort == "Sbin")
    {
        Sbin = Sbin + touch;
        touch = " ";
    }
    else if (standort == "Root")
    {
        Root = Root + touch;
        touch = " ";
    }
    else if (standort == "Boot")
    {
        Boot = Boot + touch;
        touch = " ";
    }
    
}

int nanofunktion(){ //Funktion für den Linux Command nano

    

}

int aptfunktion(){ //Funktion für den Linux Command apt
    if (Software == "git" || Software == "Git")
    {
        cout << "Reading package lists... Done\n";
        cout << "Building dependency tree... Done\n";
        cout << "Reading state information... Done\n";
        cout << "The following additional packages will be installed:\n";
        cout << "  git-man liberror-perl\n";
        cout << "Suggested packages:\n";
        cout << "  git-daemon-run | git-daemon-sysvinit git-doc git-el git-email git-gui gitk gitweb git-cvs git-mediawiki git-svn\n";
        cout << "The following NEW packages will be installed:\n";
        cout << "  git git-man liberror-perl\n";
        cout << "0 upgraded, 3 newly installed, 0 to remove and 0 not upgraded.\n";
        cout << "Need to get 6583 kB of archives.\n";
        cout << "After this operation, 33.1 MB of additional disk space will be used.\n";
        cout << "Do you want to continue? [Y/n] ";
        cin >> linput;
        if (linput == "Y" || linput == "y")
        {
            cout << "Selecting previously unselected package liberror-perl.\n";
            cout << "(Reading database ... 55218 files and directories currently installed.)\n";
            cout << "Preparing to unpack .../liberror-perl_0.17029-1_all.deb ...\n";
            cout << "Unpacking liberror-perl (0.17029-1) ...\n";
            cout << "Selecting previously unselected package git-man.\n";
            cout << "Preparing to unpack .../git-man_1%3a2.30.2-1_all.deb ...\n";
            cout << "Unpacking git-man (1:2.30.2-1) ...\n";
            cout << "Selecting previously unselected package git.\n";
            cout << "Preparing to unpack .../git_1%3a2.30.2-1_armhf.deb ...\n";
            cout << "Unpacking git (1:2.30.2-1) ...\n";
            cout << "Setting up liberror-perl (0.17029-1) ...\n";
            cout << "Setting up git-man (1:2.30.2-1) ...\n";
            cout << "Setting up git (1:2.30.2-1) ...\n";
            cout << "Processing triggers for man-db (2.9.4-2) ...\n";
        }
        else if (linput == "N" || linput == "n")
        {
            cout << "Abort\n";
        }
        else 
        {
            cout << "Abort\n";
        }
        
    }
    else 
    {
        cout << "Apt ist ein Packet Manager\n";
        cout << "Für Das spiel Benötigen wir es nicht Außer in dem Kapitel Git";
    }
    
    
}

int rmfunktion(){ //Funktion für den Linux Command rm


}

int mvfunktion(){ //Funktion für den Linux Command mv

}

int cpfunktion(){ //Funktion für den Linux Command cp


}

int catfunktion(){ //Funktion für den Linux Command cat

}

int echofunktion(){ //Funktion für den Linux Command echo

}

int notfoundfunktion(){ //Funktion für not found
    
    if (apt == "yes")
    {
        cout << "Command `" << command << "` not found, but can be installed with:\n";
        cout << "sudo apt install " << command ;
    }
    else if (apt == "no")
    {
         cout << command << ": command not foud";
    }
    else
        cout << "error";
}

int gitfunktion(){ //Funktion für den Linux Command Git
    if (git == "add")
    {
        cout << " git add ";
        gitstatus == "yes";
    }
    else if (git == "commit")
    {
        if (gitstatus == "yes")
        {
            cout << "commit Nachricht";
            gitstatus == "commit ";
        }
        else 
            cout << "Du musst erst eine Datei hinzufügen";
            gitstatus == " ";
        
    }
    else if (git == "push")
    {
       if (gitstatus == "commit")
       {
           cout << "pushing to remote Repository";
           cout << "normalerweise würdest du hier dein Benutzername und Passwort eingeben";
           gitstatus == " ";
       }
       else
        cout << "Du musst zu erst einen Commit machen um zu pushen";
       
    }
    else if (git == "pull")
    {
        cout << "Lokales Repository ist auf dem neusten Stand";
    }
    else if (git == "status")
    {
        cout << "status";
    }
    
    
    
    
}

int sshfunktion(){ // Funktion für den Linux Command ssh
    if (ssh == "yes")
    {
        cout << "Hier kommt normalerweise eine Frage ob der has richtig ist, und die Frage nach einem passwort (wenn hinterlegt)";
    }
    else    
        cout << "SSH Commands";
    
}

int unamefunktion(){ // Funktion für den Linux Commad uname
    if (uname == "r")
    {
        cout << "Dies ist ein Spiel, und hat keinen wirklichen Linux kernel";
    }
    else if (uname == "uname")
    {
        cout << "kernel 4.2";
    }

}

int Linuxsystem(){//Linux Hauptsystem nimmt commands an, und verteilt sie zu den passenden funktionen

    while (true)
    {
        linput == " ";
        cout << "user@spiel:~$ ";
        cin >> linput;


        if (linput == "sudo")
        {
            sudo == "no";
            sudofunktion();
        }
        else if (linput == "sudo -i" || linput == "sudo su")
        {
            sudo == "yes";
            sudofunktion();
        }
        else if (linput == "ls" || linput == "la")
        {
            lsfunktion();
        }
        else if (linput == "cd ...")
        {
            cdfunktion();
        }
        else if (linput == "git")
        {
            cout << "Git commands";
            git == " ";
        }
        else if (linput == "git add")
        {
            git == "add";
            gitstatus == "yes";
            gitfunktion();
            git == " ";
        }
        else if (linput == "git commit")
        {
            git == "commit";
            gitstatus == "commit";
            gitfunktion();
            git == " ";
        }
        else if (linput == "git push")
        {
           git == "push";
           gitfunktion();
           git == " ";
        }
        else if (linput == "git pull")
        {
            git == "pull";
            gitfunktion();
            git == " ";
        }
        else if (linput == "git status")
        {
            git == "status";
            gitfunktion();
            git == " ";
        }
        else if (linput == " uname")
        {
           uname == "uname";
           unamefunktion();
           uname == " ";
        }
        else if (linput == "uname -r")
        {
            uname == "r";
            unamefunktion();
            uname == " ";
        }
        else if (linput == "pwd")
        {
            pwdfunktion();
        }
        else if (linput == "nano")
        {
            nanofunktion();
        }
        else if (linput == "touch")
        {
           touchfunktion();
        }
        else if (linput == "apt" || linput == "apt update" || linput == "apt upgrade" || linput == "apt install")
        {
           aptfunktion();
        }
        else if (linput == "mv")
        {
            mvfunktion();
        }
        else if (linput == "rm")
        {
            rmfunktion();
        }
        else if (linput == "ssh")
        {
            sshfunktion();
        }
        else if (linput == "ssh user@ip")
        {
            ssh == "yes";
            sshfunktion();
            ssh == " ";
        }
        
        


    }
    
    

}