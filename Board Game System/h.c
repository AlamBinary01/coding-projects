#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_USERS 30
#define MAX_GAMES_PER_USER 20
#define MAX_GAME_NAME_LENGTH 40
#define MAX_USERNAME_LENGTH 40


struct Game
{
    char name[MAX_GAME_NAME_LENGTH];
    int rating;
};

struct User
{
    char username[MAX_USERNAME_LENGTH];
    struct Game games[MAX_GAMES_PER_USER];
    int game_count;
};
int readDataFromFile(struct User users[], int *user_count, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char buffer[256];
    int current_user_index = -1; // To track the user being processed

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Remove leading and trailing whitespace
        char *trimmed_buffer = strtok(buffer, "\r\n\t ");

        if (trimmed_buffer == NULL) {
            continue; // Skip empty lines
        }

        if (strcmp(trimmed_buffer, "User:") == 0) {
            // Extract the username and remove leading/trailing whitespace
            char username[MAX_USERNAME_LENGTH];
            char *username_token = strtok(NULL, "\r\n\t ");
            if (username_token != NULL) {
                strncpy(username, username_token, MAX_USERNAME_LENGTH);
                username[MAX_USERNAME_LENGTH - 1] = '\0'; // Ensure null-terminated
                // Increment user count and add user
                current_user_index = (*user_count)++;
                users[current_user_index].game_count = 0;
                strncpy(users[current_user_index].username, username, MAX_USERNAME_LENGTH);
            }
        } else if (current_user_index != -1 && strncmp(trimmed_buffer, "Game:", 5) == 0) {
            // Extract the game name and rating for the current user
            char game_name[MAX_GAME_NAME_LENGTH];
            int rating;

            char *game_info = strtok(NULL, "\r\n\t"); // Move to the next part of the line
            if (sscanf(game_info, "Game: %39[^,], Rating: %d", game_name, &rating) == 2) {
                // Successfully parsed the game name and rating
                if (users[current_user_index].game_count < MAX_GAMES_PER_USER) {
                    strncpy(users[current_user_index].games[users[current_user_index].game_count].name, game_name, MAX_GAME_NAME_LENGTH);
                    users[current_user_index].games[users[current_user_index].game_count].rating = rating;
                    (users[current_user_index].game_count)++;
                }
            }
        }
    }

    fclose(file);
    return 1;
}

void writeDataToFile(struct User users[], int user_count, const char *filename)
{
    FILE *file = fopen(filename, "w");
    for (int i = 0; i < user_count; i++)
    {
        fprintf(file, "User: %s\n", users[i].username);
        for (int j = 0; j < users[i].game_count; j++)
        {
            fprintf(file, "  Game: %s, Rating: %d\n", users[i].games[j].name, users[i].games[j].rating);
        }
    }
    fclose(file);
   
}

int confirmAction(const char *action_name)
{
    char confirmation;
    printf("Do you still want %s? (y/n): ", action_name);
    scanf(" %c", &confirmation);

    if (confirmation == 'y' || confirmation == 'Y')
        return 1;
    else
        return 0;
}

void addU(struct User users[], int *user_count)
{
    char username[MAX_USERNAME_LENGTH];

    while (1)
    {
        if (*user_count >= MAX_USERS)
        {
            printf("The register is full.\n");
            break;
        }

        printf("Register new user (q to quit): ");
        scanf("%s", username);

        if (strcmp(username, "q") == 0)
        {
            printf("User creation canceled.\n");
            break;
        }

        int username_exists = 0;
        for (int i = 0; i < *user_count; i++)
        {
            if (strcmp(users[i].username, username) == 0)
            {
                printf("Username '%s' exists.Please choose another.\n", username);
                username_exists = 1;
                break;
            }
        }

        if (!username_exists)
        {
            struct User new_user;
            strcpy(new_user.username, username);
            new_user.game_count = 0;
            users[*user_count] = new_user;
            (*user_count)++;
            printf("User '%s' added.\n", username);
        }
    }
}
void removeU(struct User users[], int *user_count, const char *username)
{
    int found = 0;

    printf("Remove user (q to quit): ");
    scanf("%s", username);

    if (strcmp(username, "q") == 0) {
        printf("User removal canceled.\n");
        return;
    }

    for (int i = 0; i < *user_count; i++) {
        if (strcmp(users[i].username, username) == 0) {
            if (users[i].game_count == 0) {
                // No games, so we can remove the user directly
                for (int j = i; j < *user_count - 1; j++) {
                    users[j] = users[j + 1];
                }
                (*user_count)--;
                found = 1;
                printf("User '%s' removed.\n", username);
            } else {
                printf("Warning: User has rated games.\n");
                if (confirmAction("remove this user")) {
                    for (int j = i; j < *user_count - 1; j++) {
                        users[j] = users[j + 1];
                    }
                    (*user_count)--;
                    found = 1;
                    printf("User '%s' removed.\n", username);
                } else {
                    printf("User removal canceled.\n");
                }
            }
            break;
        }
    }

    if (!found) {
        printf("User '%s' not found.\n", username);
    }
}
int compareUsers(const void *a, const void *b) {
    return strcmp(((struct User *)a)->username, ((struct User *)b)->username);
}
void printAllUsers(struct User users[], int user_count) {
    if (user_count == 0) {
        printf("No registered users.\n");
    } else {
        // Sort the users array in alphabetical order
        qsort(users, user_count, sizeof(struct User), compareUsers);

        printf("Users:\n");
        printf("________________________________________\n");
        for (int i = 0; i < user_count; i++) {
            // Remove newline characters before printing
            char username[MAX_USERNAME_LENGTH];
            strcpy(username, users[i].username);
            username[strcspn(username, "\n")] = '\0';
            printf("%s\n", username);
        }
    }
}


int isDuplicateGame(struct User *user, const char *game_name) {
    for (int i = 0; i < user->game_count; i++) {
        if (strcmp(user->games[i].name, game_name) == 0) {
            return 1; // The game is a duplicate
        }
    }
    return 0; // The game is not a duplicate
}

void addG(struct User *user) {
    char new_game_name[MAX_GAME_NAME_LENGTH];
    int new_rating;

    while (1) {
        if (user->game_count >= MAX_GAMES_PER_USER) {
            printf("Your game register is full.\n");
            break;
        }

        printf("Register new boardgame (q to quit): ");
        scanf("%s", new_game_name);

        if (strcmp(new_game_name, "q") == 0) {
            printf("Game registration canceled.\n");
            break;
        }

        if (isDuplicateGame(user, new_game_name)) {
            printf("Boardgame already added.\n");
            continue; // Skip the current iteration of the loop
        }

        while (1) {
            printf("Rating (1-10): ");
            if (scanf("%d", &new_rating) != 1) {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                printf("Invalid input. Please enter a numeric rating between 1 and 10.\n");
            } else if (new_rating < 1 || new_rating > 10) {
                printf("Invalid rating. Please enter a rating between 1 and 10.\n");
            } else {
                break;
            }
        }

        if (user->game_count < MAX_GAMES_PER_USER) {
            strcpy(user->games[user->game_count].name, new_game_name);
            user->games[user->game_count].rating = new_rating;
            (user->game_count)++;
            printf("Game '%s' added with a rating of %d.\n", new_game_name, new_rating);
        } else {
            printf("Your game register is full. Cannot add more games.\n");
            break;
        }
    }
}


void printUserGame(struct User *user)
{
    if (user->game_count == 0)
    {
        printf("No games registered for user '%s'.\n", user->username);
    }
    else
    {
        printf("Games and Ratings for user '%s':\n", user->username);
        for (int i = 0; i < user->game_count; i++)
        {
            printf("Game: %s, Rating: %d\n", user->games[i].name, user->games[i].rating);
        }
    }
}
void searchG(struct User *user)
{
    int found = 0;

    if (user->game_count == 0)
    {
        printf("No games registered for user '%s'.\n", user->username);
        return;
    }

    while (1)
    {
        printf("Search (q for quit): ");
        char search_string[MAX_GAME_NAME_LENGTH];
        scanf("%s", search_string);

        if (strcmp(search_string, "q") == 0)
        {
            break; // Exit the search loop
        }

        printf("Matching games and Ratings for user '%s':\n", user->username);
        for (int i = 0; i < user->game_count; i++)
        {
            if (strstr(user->games[i].name, search_string) != NULL)
            {
                printf("Game: %s, Rating: %d\n", user->games[i].name, user->games[i].rating);
                found = 1;
            }
        }
        if (!found)
        {
            printf("No matching games found for user '%s'.\n", user->username);
        }
    }
}

void removeG(struct User *user, const char *game_name)
{
    int found = 0;

    printf("Search boardgame to remove (q to quit): ");
    scanf("%s", game_name);

    if (strcmp(game_name, "q") == 0)
    {
        return;
    }

    for (int i = 0; i < user->game_count; i++)
    {
        if (strcmp(user->games[i].name, game_name) == 0)
        {
            found = 1;
            if (confirmAction("remove this game"))
            {
                for (int j = i; j < user->game_count - 1; j++)
                {
                    user->games[j] = user->games[j + 1];
                }
                (user->game_count)--;
                printf("Game '%s' removed.\n", game_name);
                break;
            }
            else
            {
                printf("Game removal canceled.\n");
            }
        }
    }

    if (!found)
    {
        printf("Game '%s' not found in the user's list of games.\n", game_name);
    }
}
void printAllUserAndRating(struct User users[], int user_count)
{
    if (user_count == 0)
    {
        printf("No users registered.\n");
    }
    else
    {
        printf("List of all registered users and their ratings:\n");
        for (int i = 0; i < user_count; i++)
        {
            printf("User: %s\n", users[i].username);
            if (users[i].game_count > 0)
            {
                printf("Games and Ratings:\n");
                for (int j = 0; j < users[i].game_count; j++)
                {
                    printf("Game: %s, Rating: %d\n", users[i].games[j].name, users[i].games[j].rating);
                }
            }
            else
            {
                printf("No games registered for this user.\n");
            }
        }
    }
}

void addGame(struct User *user)
{
     addG(user);
}

void searchGame(struct User *user)
{
    char search_string[MAX_GAME_NAME_LENGTH];
    searchG(user);
}

void removeGame(struct User *user)
{
    char game_name[MAX_GAME_NAME_LENGTH];
    printf("Enter the game name to remove: ");
    scanf("%s", game_name);
    removeG(user, game_name);
}

void user_menu(struct User *user)
{
    while (1)
    {
        printf("\nUser Menu for '%s':\n", user->username);
        printf("1. Print Games\n");
        printf("2. Add Game\n");
        printf("3. Search Games\n");
        printf("4. Remove Game\n");
        printf("5. Exit\n");
        printf("Choose: ");

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printUserGame(user);
            break;
        case 2:
        {
            addGame(user);
            break;
        }
        case 3:
        {
            searchGame(user);
            break;
        }
        case 4:
        {
            removeGame(user);
            break;
        }
        case 5:
            return;
        default:
            printf("Invalid choice. Please enter 1, 2, 3, 4, or 5.\n");
        }
    }
}

void addUser(struct User users[], int *user_count)
{
    char username[MAX_USERNAME_LENGTH];
    addU(users, user_count);
}

void removeUser(struct User users[], int *user_count)
{
    char username[MAX_USERNAME_LENGTH];
    removeU(users, user_count, username);
}
void adminMenu(struct User users[], int *user_count, const char *filename) {
    while (1) {
        printf("\nAdministration:\n");
        printf("1. Add user\n");
        printf("2. Remove User\n");
        printf("3. Print All Users\n");
        printf("4. Print All Users and Ratings\n");
        printf("5. Exit\n");
        printf("Choose: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addU(users, user_count);
                break;
            case 2:
                removeUser(users, user_count);
                break;
            case 3:
                printAllUsers(users, *user_count);
                break;
            case 4:
                printAllUserAndRating(users, *user_count);
                break;
            case 5:
                writeDataToFile(users, *user_count, filename);
                return;
            default:
                printf("Invalid choice. Please enter 1, 2, 3, 4, or 5.\n");
        }
    }
}
int findUserByUsername(struct User users[], int user_count, const char *username) {
    for (int i = 0; i < user_count; i++) {
        if (strcmp(users[i].username, username) == 0) {
            return i; // Return the index of the user
        }
    }
    return -1; // User not found
}

int main() {
    struct User users[MAX_USERS];
    int user_count = 0;
    char filename[MAX_GAME_NAME_LENGTH];

    printf("Welcome to boardgame rating!\n");
    printf("Enter the text file name: ");
    scanf("%s", filename);

    // Construct the full filename including ".txt"
    char full_filename[MAX_GAME_NAME_LENGTH + 4];
    strcpy(full_filename, filename);
    strcat(full_filename, ".txt");

    int data_read = readDataFromFile(users, &user_count, full_filename);

    if (data_read) {
        printf("Data read from the file.\n");
    } else {
        printf("File does not exist or is empty.\n");
        // You can choose to exit the program or allow the user to continue
    }

    while (1) {
        printf("\nPlease enter a username, 'admin', or 'quit': ");
        char choice_str[MAX_USERNAME_LENGTH];
        scanf("%s", choice_str);

        if (strcmp(choice_str, "admin") == 0) {
            adminMenu(users, &user_count, full_filename);
        } else if (strcmp(choice_str, "quit") == 0) {
            writeDataToFile(users, user_count, full_filename);
            printf("Saving all data to %s\n", full_filename);
            printf("Goodbye\n");
            break; // Exit the program
        } else {
            int user_index = findUserByUsername(users, user_count, choice_str);
            if (user_index >= 0) {
                // User found, load their data
                user_menu(&users[user_index]);
            } else {
                printf("User '%s' does not exist.\n", choice_str);
            }
        }
    }

    return 0;
}
