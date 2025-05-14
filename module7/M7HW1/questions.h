// CSC 134
// M7HW1
// Luis Rivera Gonzalez
// 5/14/25
// Computer Trivia Questions

#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <vector>
#include <string>
using namespace std;

struct Question {
    string text;
    vector<string> choices;
    string correct;
};

vector<Question> questions = {
    {"The acronym \"RIP\" stands for which of these?", {"Runtime Instance Processes", "Regular Interval Processes", "Routine Inspection Protocol", "Routing Information Protocol"}, "Routing Information Protocol"},
    {"HTML is what type of language?", {"Macro Language", "Programming Language", "Scripting Language", "Markup Language"}, "Markup Language"},
    {"What five letter word is the motto of the IBM Computer company?", {"Click", "Logic", "Pixel", "Think"}, "Think"},
    {"What is the main CPU is the Sega Mega Drive / Sega Genesis?", {"Zilog Z80", "Yamaha YM2612", "Intel 8088", "Motorola 68000"}, "Motorola 68000"},
    {"What did the name of the Tor Anonymity Network orignially stand for?", {"The Only Router", "The Orange Router", "The Ominous Router", "The Onion Router"}, "The Onion Router"},
    {"Originally used in PCM adapters, what frequency is the standard for sampling audio in the Compact Disc Digital Audio format?", {"32.0 kHz", "1.5 MHz", "20.5 kHz", "44.1 kHz"}, "44.1 kHz"},
    {"What amount of bits commonly equals one byte?", {"1", "2", "64", "8"}, "8"},
    {"What is the name of the process that sends one qubit of information using two bits of classical information?", {"Super Dense Coding", "Quantum Entanglement", "Quantum Programming", "Quantum Teleportation"}, "Quantum Teleportation"},
    {"Which RAID array type is associated with data mirroring?", {"RAID 0", "RAID 10", "RAID 5", "RAID 1"}, "RAID 1"},
    {".rs is the top-level domain for what country?", {"Romania", "Russia", "Rwanda", "Serbia"}, "Serbia"},
    {"Which of these is not a key value of Agile software development?", {"Individuals and interactions", "Customer collaboration", "Responding to change", "Comprehensive documentation"}, "Comprehensive documentation"},
    {"Which company was established on April 1st, 1976 by Steve Jobs, Steve Wozniak and Ronald Wayne?", {"Microsoft", "Atari", "Commodore", "Apple"}, "Apple"},
    {"Who is the founder of Palantir?", {"Mark Zuckerberg", "Marc Benioff", "Jack Dorsey", "Peter Thiel"}, "Peter Thiel"},
    {"In the server hosting industry IaaS stands for...", {"Internet as a Service", "Internet and a Server", "Infrastructure as a Server", "Infrastructure as a Service"}, "Infrastructure as a Service"},
    {"What major programming language does Unreal Engine 4 use?", {"Assembly", "C#", "ECMAScript", "C++"}, "C++"},
    {"What does the Prt Sc button do?", {"Nothing", "Saves a .png file of what's on the screen in your screenshots folder in photos", "Closes all windows", "Captures what's on the screen and copies it to your clipboard"}, "Captures what's on the screen and copies it to your clipboard"},
    {"How fast is USB 3.1 Gen 2 theoretically?", {"5 Gb/s", "8 Gb/s", "1 Gb/s", "10 Gb/s"}, "10 Gb/s"},
    {"What does \"LCD\" stand for?", {"Language Control Design", "Last Common Difference", "Long Continuous Design", "Liquid Crystal Display"}, "Liquid Crystal Display"},
    {"In computing terms, typically what does CLI stand for?", {"Common Language Input", "Control Line Interface", "Common Language Interface", "Command Line Interface"}, "Command Line Interface"},
    {"Nvidia's headquarters are based in which Silicon Valley city?", {"Palo Alto", "Cupertino", "Mountain View", "Santa Clara"}, "Santa Clara"},
    {"How many Hz does the video standard PAL support?", {"59", "60", "25", "50"}, "50"},
    {"What type of sound chip does the Super Nintendo Entertainment System (SNES) have?", {"FM Synthesizer", "Programmable Sound Generator (PSG)", "PCM Sampler", "ADPCM Sampler"}, "ADPCM Sampler"},
    {"What was the first company to use the term \"Golden Master\"?", {"IBM", "Microsoft", "Google", "Apple"}, "Apple"},
    {"What does the computer software acronym JVM stand for?", {"Java Vendor Machine", "Java Visual Machine", "Just Virtual Machine", "Java Virtual Machine"}, "Java Virtual Machine"},
    {"All of the following programs are classified as raster graphics editors EXCEPT:", {"Paint.NET", "GIMP", "Adobe Photoshop", "Inkscape"}, "Inkscape"}
};

#endif
