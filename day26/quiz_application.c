#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    const char *questions[] = {
        "What is the capital of France?",
        "Which language is this program written in?",
        "What is 2 + 2?",
        "Which planet is known as the Red Planet?",
        "What is the result of 5 * 3?"
    };

    const char *choices[][4] = {
        {"A) Berlin", "B) Paris", "C) Rome", "D) Madrid"},
        {"A) Python", "B) Java", "C) C", "D) Ruby"},
        {"A) 3", "B) 4", "C) 5", "D) 6"},
        {"A) Venus", "B) Mars", "C) Jupiter", "D) Saturn"},
        {"A) 8", "B) 10", "C) 15", "D) 20"}
    };

    const char answers[] = {'B', 'C', 'B', 'B', 'C'};
    char input[16];
    int score = 0;
    int count = sizeof(questions) / sizeof(questions[0]);

    printf("Welcome to the Quiz Application!\n");
    printf("Answer the following questions by entering A, B, C, or D.\n\n");

    for (int i = 0; i < count; i++) {
        printf("Question %d: %s\n", i + 1, questions[i]);
        for (int j = 0; j < 4; j++) {
            printf("  %s\n", choices[i][j]);
        }
        printf("Your answer: ");

        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("Input error. Exiting.\n");
            return 1;
        }

        char answer = toupper(input[0]);
        if (answer == answers[i]) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong. The correct answer is %c.\n\n", answers[i]);
        }
    }

    printf("Quiz complete! You scored %d out of %d.\n", score, count);
    if (score == count) {
        printf("Excellent work!\n");
    } else if (score >= count / 2) {
        printf("Good job.\n");
    } else {
        printf("Keep practicing.\n");
    }

    return 0;
}
 
