// CSC 134
// M7HW1
// Luis Rivera Gonzalez
// 5/14/25
// Computer Trivia Questions

#include <iostream>
#include <string>
#include "questions.h"

using namespace std;

void displayQuestion(Question currentQuestion, int questionNumber) {
    cout << endl;
    cout << "Question " << questionNumber << ": " << currentQuestion.text << endl;

    int numChoices = currentQuestion.choices.size();
    for (int choiceIndex = 0; choiceIndex < numChoices; choiceIndex++) {
        cout << choiceIndex + 1 << ") " << currentQuestion.choices[choiceIndex] << endl;
    }
}

bool askQuestion(Question currentQuestion, int questionNumber) {
    int userAnswer;
    int numChoices = currentQuestion.choices.size();

    displayQuestion(currentQuestion, questionNumber);
    cout << "Your answer (1-" << numChoices << "): ";
    cin >> userAnswer;

    while (cin.fail() || userAnswer < 1 || userAnswer > numChoices) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Try again (1-" << numChoices << "): ";
        cin >> userAnswer;
    }

    string selectedAnswer = currentQuestion.choices[userAnswer - 1];

    if (selectedAnswer == currentQuestion.correct) {
        cout << "✅ Correct!" << endl;
        return true;
    } else {
        cout << "❌ Wrong! The correct answer was: " << currentQuestion.correct << endl;
        return false;
    }
}

int main() {
    srand(time(0));
    int totalQuestions = questions.size();

    // Ask user how many questions they want to answer
    int chosenCount;
    cout << "Enter your name: ";
    string playerName;
    getline(cin, playerName);

    cout << "Hi " << playerName << "! How many questions would you like to answer? (5, 10, 15, 20, or 25): ";
    cin >> chosenCount;

    // Input validation
    while (cin.fail() || (chosenCount != 5 && chosenCount != 10 && chosenCount != 15 && chosenCount != 20 && chosenCount != 25)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Please enter 5, 10, 15, 20, or 25: ";
        cin >> chosenCount;
    }

    // Shuffle the questions
    for (int i = totalQuestions - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(questions[i], questions[j]);
    }

    int playerScore = 0;

    for (int i = 0; i < chosenCount; i++) {
        // Shuffle the choices
        int numChoices = questions[i].choices.size();
        for (int j = numChoices - 1; j > 0; j--) {
            int k = rand() % (j + 1);
            swap(questions[i].choices[j], questions[i].choices[k]);
        }

        if (askQuestion(questions[i], i + 1)) {
            playerScore++;
        }

        cout << "Press Enter to continue...";
        cin.ignore();
        cin.get();
    }

    cout << endl;
    cout << "🎉 GAME OVER 🎉" << endl;
    cout << "Thanks for playing, " << playerName << "!" << endl;
    cout << "Score: " << playerScore << " out of " << chosenCount << endl;

    double percentageCorrect = (static_cast<double>(playerScore) / chosenCount) * 100;

    if (playerScore == chosenCount) {
        cout << "🏆 Perfect score! You're a trivia master!" << endl;
    } else if (percentageCorrect >= 70) {
        cout << "🔥 Great job!" << endl;
    } else if (percentageCorrect >= 40) {
        cout << "👍 Not bad!" << endl;
    } else {
        cout << "😅 Better luck next time." << endl;
    }

    return 0;
}

