#include <stdio.h>

int main() {
    // ANSI escape code for green text
    printf("\033[0;32m");

    // ASCII Art
    printf(" ________                                  __                      __        ________                                       \n");
    printf("|        \\                                |  \\                    |  \\      |        \\                                     \n");
    printf(" \\$$$$$$$$______    ______   ______ ____   \\$$ _______    ______  | $$       \\$$$$$$$$______    ______    ______    _______  __    __   ______    ______    _______ \n");
    printf("   | $$  /      \\  /      \\ |      \\    \\ |  \\|       \\  |      \\ | $$         | $$  /      \\  /      \\  |      \\  /       \\|  \\  |  \\ /      \\  /      \\  /       \\ \n");
    printf("   | $$ |  $$$$$$\\|  $$$$$$\\| $$$$$$\\$$$$\\| $$| $$$$$$$\\  \\$$$$$$\\| $$         | $$ |  $$$$$$\\|  $$$$$$\\  \\$$$$$$\\|  $$$$$$$| $$  | $$|  $$$$$$\\|  $$$$$$\\|  $$$$$$$ \n");
    printf("   | $$ | $$    $$| $$   \\$$| $$ | $$ | $$| $$| $$  | $$ /      $$| $$         | $$ | $$   \\$$| $$    $$ /      $$ \\$$    \\ | $$  | $$| $$   \\$$| $$    $$ \\$$    \\ \n");
    printf("   | $$ | $$$$$$$$| $$      | $$ | $$ | $$| $$| $$  | $$|  $$$$$$$| $$         | $$ | $$      | $$$$$$$$|  $$$$$$$ _\\$$$$$$\\| $$__/ $$| $$      | $$$$$$$$ _\\$$$$$$\\ \n");
    printf("   | $$  \\$$     \\| $$      | $$ | $$ | $$| $$| $$  | $$ \\$$    $$| $$         | $$ | $$       \\$$     \\ \\$$    $$|       $$ \\$$    $$| $$       \\$$     \\|       $$ \n");
    printf("    \\$$   \\$$$$$$$ \\$$       \\$$  \\$$  \\$$ \\$$ \\$$   \\$$  \\$$$$$$$ \\$$          \\$$  \\$$        \\$$$$$$$  \\$$$$$$$ \\$$$$$$$   \\$$$$$$  \\$$        \\$$$$$$$ \\$$$$$$$  \n");
    printf("                                                                                                                                                                   \n");

    // Story of Joe Grand, aka "Kingpin"
    printf("\nJoe Grand, known by his hacker handle 'Kingpin,' started his journey as a teenager who loved exploring electronics. "
           "He spent hours taking apart gadgets to understand how they worked. In the 1990s, Joe joined the famous hacker group "
           "'L0pht,' where he uncovered security flaws and became an advocate for cybersecurity.\n\n");

    printf("In 1998, Joe and the L0pht crew made history by testifying before the U.S. Congress. They warned that security gaps in "
           "critical systems could be disastrous, famously stating they could shut down the internet in just 30 minutes. "
           "But instead of causing chaos, Joe wanted to make systems safer and more secure.\n\n");

    printf("Over time, 'Kingpin' went from underground hacker to respected security expert, designing tools and sharing his skills "
           "with the next generation. He proved that hacking isn't just about breaking systems—it's about improving them.\n\n");

    printf("*Can you be the next 'Kingpin'?*\n");

    // Reset text color to default
    printf("\033[0m");

    return 0;
}
