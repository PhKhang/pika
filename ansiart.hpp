#pragma once
#include <iostream>

using namespace std;

string banVit = "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟\033[0;37m⣉⡥⠶⢶⣿⣿⣿⣿⣷⣆\033[0m⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⡿\033[0;37m⢡⡞⠁⠀⠀⠤⠈⠿⠿⠿⠿⣿\033[0m\033[0;31m⠀⢻⣦⡈\033[0m⠻⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⡇⠘⡁⠀\033[0;37m⢀⣀⣀⣀⣈⣁⣐⡒\033[0m\033[0;31m⠢⢤⡈⠛⢿⡄\033[0m⠻⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⡇⠀\033[0;37m⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄\033[0m\033[0;31m⠉⠐⠄⡈⢀\033[0m⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⠇\033[0;37m⢠⣿⣿⣿⣿⡿⢿⣿⣿⣿⠁⢈⣿⡄\033[0m⠀\033[0;36m⢀⣀\033[0m⠸⣿⣿⣿⣿\n\
⣿⣿⣿⣿⡿⠟\033[0;33m⣡⣶⣶⣬⣭⣥⣴\033[0m\033[0;37m⠀⣾⣿⣿⣿⣶⣾⣿⣧\033[0m\033[0;36m⠀⣼⣿⣷⣌\033[0m⡻⢿⣿\n\
⣿⣿⠟\033[0;33m⣋⣴⣾⣿⣿⣿⣿⣿⣿⣿⡇\033[0m\033[0;37m⢿⣿⣿⣿⣿⣿⣿⡿\033[0m\033[0;36m⢸⣿⣿⣿⣿⣷\033[0m⠄⢻\n\
⡏\033[0;33m⠰⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⢂\033[0m\033[0;37m⣭⣿⣿⣿⣿⣿⠇\033[0m\033[0;36m⠘⠛⠛⢉⣉\033[0m⣠⣴⣾\n\
⣿⣷⣦\033[0;33m⣬⣍⣉⣉⣛⣛⣉⠉\033[0m\033[0;37m⣤⣶⣾⣿⣿⣿⣿⣿⣿⡿\033[0m⢰⣿⣿⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧\033[0;37m⡘⣿⣿⣿⣿⣿⣿⣿⣿⡇\033[0m⣼⣿⣿⣿⣿⣿⣿⣿⣿\n\
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇\033[0;37m⢸⣿⣿⣿⣿⣿⣿⣿⠁\033[0m⣿⣿⣿⣿⣿⣿⣿⣿⣿\n";

string abc = "\033[31mA\033[32mB\033[33mC\033[34mD\033[35mE\033[36mF\033[0mG\033[31mH\033[32mI\033[33mJ\033[34mK\033[35mL\033[36mM\033[0mN\033[31mO\033[32mP\033[33mQ\033[34mR\033[35mS\033[36mT\033[0mU\033[31mV\033[32mW\033[33mX\033[34mY\033[35mZ\033[0m";

string fall[] = {
"\033[0m\033[46m                             \033[1m\033[33m■▄\033[43m▓\033[46m▄\033[0m\033[46m   \033[1m\033[31m▄▌\033[0m\033[33m\033[46m \033[37m   \033[31m▄\033[37m   \033[1m\033[31m▄▄\033[33m■\033[40m█\033[46m▀▀\033[0m\033[31m\033[46m▄\033[33m\033[41m░░\033[31m\033[40m▄ \033[1m\033[46m███\033[0m\033[30m\033[46m■▀██\033[1m\033[33m\033[40m░\033[0m\033[30m\033[46m █▓   \033[37m     \033[0m",
"\033[0m\033[46m                               \033[1m\033[33m▀██\033[43m▓\033[31m\033[46m▐▓\033[0m\033[33m\033[46m▄▌\033[37m   \033[31m▐\033[33m\033[41m░\033[37m\033[46m \033[1m\033[31m■▓██■\033[0m\033[30m\033[46m▄▄■■▀▀\033[31m\033[40m░░\033[30m\033[46m▄▄███\033[31m\033[40m░\033[30m\033[46m░\033[37m  \033[30m█▀■   \033[37m   \033[0m",
"\033[0m\033[46m                              \033[1m\033[33m■▀▀\033[0m\033[31m\033[46m▄\033[33m\033[41m▒\033[30m\033[46m▀▀▀▄▄▄\033[37m \033[31m▀\033[33m\033[41m▒\033[46m▌\033[1m\033[31m▄▄\033[0m\033[30m\033[46m ▀▀\033[37m \033[31m▄\033[33m\033[41m▀░\033[31m\033[46m▀\033[1m\033[33m▄■\033[0m\033[30m\033[46m▄▄██▀\033[1m\033[31m\033[41m░\033[0m\033[30m\033[46m▐▌\033[37m   \033[30m▌\033[37m    \033[30m \033[37m  \033[0m",
"\033[0m\033[46m                               \033[31m▄\033[33m\033[41m░░\033[31m\033[46m▀▌\033[37m  \033[30m ▄■▀▀\033[33m\033[40m▀\033[30m\033[46m▄▄\033[1m\033[31m\033[40m█■\033[0m\033[30m\033[46m▄\033[37m  \033[30m▀\033[31m\033[40m▀\033[30m\033[46m▄\033[1m\033[33m█\033[40m▀\033[0m\033[30m\033[46m██▀\033[1m\033[33m\033[41m▀\033[31m\033[46m▄\033[41m▒▒\033[0m\033[30m\033[46m█\033[1m\033[33m■██▄\033[0m\033[46m        \033[0m",
"\033[0m\033[46m                                           \033[30m  ▄▄▀▀▀▀▀\033[36m\033[40m▄\033[31m▄\033[30m\033[46m██▀\033[33m\033[41m▀■\033[1m\033[31m\033[46m▐\033[41m▓▓\033[0m\033[30m\033[46m▄██\033[37m \033[1m\033[33m▀▀■\033[0m\033[46m       \033[0m",
"\033[0m\033[46m                                   \033[1m\033[31m▄▌\033[0m\033[30m\033[46m▄■\033[37m    \033[30m▀▀\033[37m \033[1m\033[31m▄██■ \033[0m\033[30m\033[46m▄\033[31m█\033[40m▄\033[30m\033[46m█\033[1m\033[31m▀██\033[33m\033[41m▄\033[0m\033[31m\033[46m▀\033[1m▀\033[0m\033[46m  \033[30m▐▌▀▄\033[37m         \033[0m",
"\033[0m\033[46m                              \033[1m\033[33m▄■\033[0m\033[46m   \033[1m\033[31m▐█\033[0m\033[30m\033[46m▌\033[1m\033[31m▄■\033[33m▄▄\033[0m\033[46m    \033[1m\033[31m▀▓▀\033[0m\033[46m \033[1m\033[31m█\033[0m\033[30m\033[46m \033[31m\033[40m░\033[30m\033[46m█\033[31m\033[40m▐▓▓\033[46m▄▄\033[37m     \033[30m█\033[1m\033[31m▄▌\033[33m██▄▄\033[0m\033[46m     \033[0m",
"\033[0m\033[46m                         \033[30m    \033[1m\033[33m\033[43m▒▓\033[41m▀■\033[31m\033[46m▄\033[0m\033[46m \033[1m\033[33m▄\033[0m\033[46m \033[30m█▄\033[1m\033[33m██▀\033[31m▄\033[0m\033[46m       \033[30m ██▌▀\033[1m\033[33m█\033[41m▄▄\033[0m\033[31m\033[40m▄\033[46m■\033[37m     \033[30m▀▄\033[1m\033[33m▐▀\033[40m▓\033[0m\033[46m      \033[0m",
"\033[0m\033[46m                           \033[30m■▄\033[33m\033[40m▀\033[31m\033[46m██\033[1m\033[41m▄\033[46m▌\033[33m▓\033[31m▄▌\033[0m\033[31m\033[46m■\033[30m▀█\033[1m\033[31m▐█▌\033[0m\033[46m \033[30m■▄▄▄▄████▓\033[37m \033[31m▄\033[40m░\033[46m■\033[37m        \033[30m▐▌\033[37m        \033[0m",
"\033[0m\033[46m                             \033[1m\033[31m▄\033[0m\033[30m\033[46m▀▄\033[1m\033[31m█\033[0m\033[30m\033[46m▄\033[1m\033[31m██\033[0m\033[31m\033[46m▄\033[33m\033[41m░\033[30m\033[46m ▐█▄▄██▀▀▀\033[37m \033[30m ▐█▌\033[31m\033[40m░▓\033[33m\033[41m░\033[31m\033[46m▀\033[1m\033[33m▄▄\033[0m\033[46m      \033[1m\033[33m\033[40m▄\033[46m█\033[0m\033[36m\033[40m▌\033[37m\033[46m        \033[0m",
"\033[0m\033[46m                              \033[1m\033[31m▓█\033[0m\033[33m\033[40m▀\033[30m\033[46m▀▀\033[31m█\033[33m\033[41m▒\033[40m▀\033[30m\033[46m██▀▀ \033[37m      \033[30m▄██\033[37m \033[30m▐▌\033[31m▀\033[1m\033[33m█▀▀▀\033[0m\033[30m\033[46m_\033[37m   \033[1m\033[33m▐█▌\033[0m\033[30m\033[46m  \033[37m       \033[0m",
"\033[0m\033[46m                             \033[1m\033[31m▐▀\033[0m\033[30m\033[46m▐▌\033[1m\033[31m█▄■\033[0m\033[46m \033[30m■▀\033[37m         \033[30m▐█\033[36m\033[40m,\033[30m\033[46m▌ ▐▀█▄▄▄▀\033[1m\033[31m \033[0m\033[46m    \033[1m\033[33m■\033[0m\033[46m          \033[0m",
"\033[0m\033[46m                             \033[30m■▀\\\033[37m        \033[1m\033[33m▄\033[0m\033[46m \033[1m\033[33m▄\033[0m\033[46m   \033[30m ▐█▐█▌\033[31m▐\033[1m\033[41m░░\033[0m\033[30m\033[46m▀■\033[1m\033[31m▀\033[41m▓▓▓\033[46m▄\033[0m\033[46m              \033[0m",
"\033[0m\033[46m                                    \033[33m▌\033[31m▄\033[37m \033[1m\033[33m▐\033[41m█\033[46m█\033[41m▓░\033[0m\033[31m\033[46m▄\033[37m \033[30m █▌█\033[1m\033[33m■\033[0m\033[30m\033[46m▀▄▄■\033[31m▀■\033[37m   \033[1m\033[31m▀▀■\033[0m\033[46m             \033[0m",
"\033[0m\033[46m                            \033[1m\033[33m■██▄\033[0m\033[46m \033[1m\033[33m \033[0m\033[31m\033[46m▄■\033[1m\033[41m░\033[0m\033[33m\033[41m░\033[31m\033[46m█\033[1m\033[33m▀█\033[41m▀\033[0m\033[30m\033[41m▀\033[31m\033[46m█▌\033[30m▄█▀ ▐▌\033[1m\033[33m▓\033[0m\033[30m\033[46m█\033[37m  \033[1m\033[33m▄██▄\033[0m\033[46m                 \033[0m",
"\033[0m\033[46m                             \033[1m\033[31m▄\033[0m\033[46m \033[1m\033[33m▀\033[0m\033[30m\033[46m▄\033[31m█\033[1m\033[41m░\033[46m▐\033[41m▓\033[0m\033[31m\033[46m▀█▀\033[30m▄\033[31m\033[40m░ \033[30m\033[46m▄█▀\033[37m    \033[30m■\033[1m\033[33m█\033[0m\033[30m\033[46m▐▌\033[1m\033[33m█▀▀\033[0m\033[46m                   \033[0m",
"\033[0m\033[46m                            \033[1m\033[31m■▄▄█\033[41m▓\033[0m\033[30m\033[46m▀▄▄▄█▀\033[1m\033[33m\033[40m▄▄\033[46m█\033[0m\033[30m\033[46m▄\033[31m\033[40m░\033[30m\033[46m▌\033[1m\033[31m\033[41m░\033[0m\033[31m\033[46m▄▄\033[37m     \033[30m▐\033[37m                      \033[0m",
"\033[0m\033[46m                            \033[1m\033[33m_▄█\033[0m\033[31m\033[46m▄\033[1m\033[41m■\033[0m\033[31m\033[46m█▀\033[30m■▀\033[1m\033[31m█\033[33m\033[40m█\033[46m█▀\033[0m\033[30m\033[46m▐\033[31m\033[40m▐▓\033[30m\033[46m█\033[37m \033[31m▀▓\033[1m\033[33m\033[41m░\033[0m\033[46m    \033[30m▀▓  \033[37m                   \033[0m",
"\033[0m\033[46m                           \033[1m\033[33m■▀\033[0m\033[46m \033[31m▀\033[1m\033[33m\033[41m▀░\033[0m\033[46m  \033[1m\033[31m▐█\033[0m\033[30m\033[46m▄■▄▄█\033[31m ▀\033[30m▐▌\033[37m        \033[30m ▌\033[37m                    \033[0m",
"\033[0m\033[46m                                     \033[30m  ▄█▌\033[1m\033[33m▄▌\033[0m\033[30m\033[46m▐▓\033[37m         \033[30m`\033[37m                    \033[0m",
"\033[0m\033[46m                                  \033[30m▄▄▄█▀▀\033[37m  \033[1m\033[33m\033[41m▀▓\033[0m\033[30m\033[46m▄█\033[37m                              \033[0m",
"\033[0m\033[46m                               \033[30m ▄▀▀ ■▀\033[37m    \033[30m▄▀\033[37m \033[30m█▀■▄■\033[37m                          \033[0m",
"\033[0m\033[46m                               \033[30m▀\033[37m         \033[30m▐ \033[37m \033[30m ▐▄\033[37m                             \033[0m",
"\033[0m\033[46m                                        \033[30m \033[37m      \033[30m■\033[37m                            \033[0m",
"\033[0m\033[46m                                                                       φlda \033[0m"};

string fallMono = "     ■▄▓▄   ▄▌    ▄   ▄▄■█▀▀▄░░▄ ███■▀██░ █▓        \n\
       ▀██▓▐▓▄▌   ▐░ ■▓██■▄▄■■▀▀░░▄▄███░░  █▀■      \n\
      ■▀▀▄▒▀▀▀▄▄▄ ▀▒▌▄▄ ▀▀ ▄▀░▀▄■▄▄██▀░▐▌   ▌       \n\
       ▄░░▀▌   ▄■▀▀▀▄▄█■▄  ▀▀▄█▀██▀▀▄▒▒█■██▄        \n\
                     ▄▄▀▀▀▀▀▄▄██▀▀■▐▓▓▄██ ▀▀■       \n\
           ▄▌▄■    ▀▀ ▄██■ ▄█▄█▀██▄▀▀  ▐▌▀▄         \n\
      ▄■   ▐█▌▄■▄▄    ▀▓▀ █ ░█▐▓▓▄▄     █▄▌██▄▄     \n\
     ▒▓▀■▄ ▄ █▄██▀▄        ██▌▀█▄▄▄■     ▀▄▐▀▓      \n\
   ■▄▀██▄▌▓▄▌■▀█▐█▌ ■▄▄▄▄████▓ ▄░■        ▐▌        \n\
     ▄▀▄█▄██▄░ ▐█▄▄██▀▀▀  ▐█▌░▓░▀▄▄      ▄█▌        \n\
      ▓█▀▀▀█▒▀██▀▀       ▄██ ▐▌▀█▀▀▀_   ▐█▌         \n\
     ▐▀▐▌█▄■ ■▀         ▐█,▌ ▐▀█▄▄▄▀     ■          \n\
     ■▀         ▄ ▄    ▐█▐█▌▐░░▀■▀▓▓▓▄              \n\
            ▌▄ ▐██▓░▄  █▌█■▀▄▄■▀■   ▀▀■             \n\
    ■██▄  ▄■░░█▀█▀▀█▌▄█▀ ▐▌▓█  ▄██▄                 \n\
     ▄ ▀▄█░▐▓▀█▀▄░ ▄█▀    ■█▐▌█▀▀                   \n\
    ■▄▄█▓▀▄▄▄█▀▄▄█▄░▌░▄▄     ▐                      \n\
    _▄█▄■█▀■▀███▀▐▐▓█ ▀▓░    ▀▓                     \n\
   ■▀ ▀▀░  ▐█▄■▄▄█ ▀▐▌         ▌                    \n\
               ▄█▌▄▌▐▓         `                    \n\
          ▄▄▄█▀▀  ▀▓▄█                              \n\
        ▄▀▀ ■▀    ▄▀ █▀■▄■                          \n\
       ▀         ▐   ▐▄                             \n\
                       ■                            \n\
                                               φlda \n";
                                               