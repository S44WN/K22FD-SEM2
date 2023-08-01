#include <stdio.h>
#include <string.h>

// Structure to represent a client
struct Client
{
    char name[100];
    char phone[20];
};

// Structure to represent a laptop
struct Laptop
{
    char brand[100];
    char model[100];
    int year;
};

// Structure to represent an expert
struct Expert
{
    char name[100];
    char expertise[100];
};

// Function to add a record of client
void addClient(struct Client clients[], int *numClients)
{
    if (*numClients < 100)
    {
        printf("Enter name: ");
        scanf("%s", clients[*numClients].name);
        printf("Enter phone number: ");
        scanf("%s", clients[*numClients].phone);
        (*numClients)++;
        printf("Client added successfully!\n");
    }
    else
    {
        printf("Maximum number of clients reached!\n");
    }
}

// Function to display all clients
void displayAllClients(struct Client clients[], int numClients)
{
    if (numClients > 0)
    {
        printf("Clients:\n");
        for (int i = 0; i < numClients; i++)
        {
            printf("Client %d:\n", i + 1);
            printf("Name: %s\n", clients[i].name);
            printf("Phone: %s\n", clients[i].phone);
        }
    }
    else
    {
        printf("No clients found!\n");
    }
}

// Function to add details of a laptop
void addLaptop(struct Laptop laptops[], int *numLaptops)
{
    if (*numLaptops < 100)
    {
        printf("Enter brand: ");
        scanf("%s", laptops[*numLaptops].brand);
        printf("Enter model: ");
        scanf("%s", laptops[*numLaptops].model);
        printf("Enter year: ");
        scanf("%d", &laptops[*numLaptops].year);
        (*numLaptops)++;
        printf("Laptop added successfully!\n");
    }
    else
    {
        printf("Maximum number of laptops reached!\n");
    }
}

// Function to display all laptops
void displayAllLaptops(struct Laptop laptops[], int numLaptops)
{
    if (numLaptops > 0)
    {
        printf("Laptops:\n");
        for (int i = 0; i < numLaptops; i++)
        {
            printf("Laptop %d:\n", i + 1);
            printf("Brand: %s\n", laptops[i].brand);
            printf("Model: %s\n", laptops[i].model);
            printf("Year: %d\n", laptops[i].year);
        }
    }
    else
    {
        printf("No laptops found!\n");
    }
}

// Function to update/delete a record of client
void updateDeleteClient(struct Client clients[], int *numClients)
{
    if (numClients > 0)
    {
        char searchName[100];
        int found = 0;
        printf("Enter name to search: ");
        scanf("%s", searchName);
        for (int i = 0; i < numClients; i++)
        {
            if (strcmp(clients[i].name, searchName) == 0)
            {
                printf("Client found:\n");
                printf("Name: %s\n", clients[i].name);
                printf("Phone: %s\n", clients[i].phone);
                printf("Do you want to update (U) or delete (D) this client? ");
                char choice;
                scanf(" %c", &choice);
                if (choice == 'U' || choice == 'u')
                {
                    printf("Enter new name: ");
                    scanf("%s", clients[i].name);
                    printf("Enter new phone number: ");
                    scanf("%s", clients[i].phone);
                    printf("Client updated successfully!\n");
                }
                else if (choice == 'D' || choice == 'd')
                {
                    for (int j = i; j < numClients - 1; j++)
                    {
                        strcpy(clients[j].name, clients[j + 1].name);
                        strcpy(clients[j].phone, clients[j + 1].phone);
                    }
                    (*numClients)--;
                    printf("Client deleted successfully!\n");
                }
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("Client not found!\n");
        }
    }
    else
    {
        printf("No clients found!\n");
    }
}

// Function to update/delete a record of laptop
void updateDeleteLaptop(struct Laptop laptops[], int *numLaptops)
{
    if (numLaptops > 0)
    {
        char searchBrand[100];
        int found = 0;
        printf("Enter brand to search: ");
        scanf("%s", searchBrand);
        for (int i = 0; i < numLaptops; i++)
        {
            if (strcmp(laptops[i].brand, searchBrand) == 0)
            {
                printf("Laptop found:\n");
                printf("Brand: %s\n", laptops[i].brand);
                printf("Model: %s\n", laptops[i].model);
                printf("Year: %d\n", laptops[i].year);
                printf("Do you want to update (U) or delete (D) this laptop? ");
                char choice;
                scanf(" %c", &choice);
                if (choice == 'U' || choice == 'u')
                {
                    printf("Enter new brand: ");
                    scanf("%s", laptops[i].brand);
                    printf("Enter new model: ");
                    scanf("%s", laptops[i].model);
                    printf("Enter new year: ");
                    scanf("%d", &laptops[i].year);
                    printf("Laptop updated successfully!\n");
                }
                else if (choice == 'D' || choice == 'd')
                {
                    for (int j = i; j < numLaptops - 1; j++)
                    {
                        strcpy(laptops[j].brand, laptops[j + 1].brand);
                        strcpy(laptops[j].model, laptops[j + 1].model);
                        laptops[j].year = laptops[j + 1].year;
                    }
                    (*numLaptops)--;
                    printf("Laptop deleted successfully!\n");
                }
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("Laptop not found!\n");
        }
    }
    else
    {
        printf("No laptops found!\n");
    }
}

// Function to add a record of expert
void addExpert(struct Expert experts[], int *numExperts)
{
    if (*numExperts < 100)
    {
        printf("Enter name: ");
        scanf("%s", experts[*numExperts].name);
        printf("Enter expertise: ");
        scanf("%s", experts[*numExperts].expertise);
        (*numExperts)++;
        printf("Expert added successfully!\n");
    }
    else
    {
        printf("Maximum number of experts reached!\n");
    }
}

// Function to display all experts
void displayAllExperts(struct Expert experts[], int numExperts)
{
    if (numExperts > 0)
    {
        printf("Experts:\n");
        for (int i = 0; i < numExperts; i++)
        {
            printf("Expert %d:\Name: %s\n", experts[i].name);
            printf("Expertise: %s\n", experts[i].expertise);
        }
    }
    else
    {
        printf("No experts found!\n");
    }
}

int main()
{
    struct Client clients[100];
    struct Laptop laptops[100];
    struct Expert experts[100];
    int numClients = 0;
    int numLaptops = 0;
    int numExperts = 0;
    char choice;
    do
    {
        printf("Welcome to Laptop Repair System\n");
        printf("1. Add record of client\n");
        printf("2. Display all clients\n");
        printf("3. Add details of laptop\n");
        printf("4. Display all laptops\n");
        printf("5. Update/Delete record of client\n");
        printf("6. Update/Delete record of laptop\n");
        printf("7. Add record of expert\n");
        printf("8. Display all experts\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            addClient(clients, &numClients);
            break;
        case '2':
            displayAllClients(clients, numClients);
            break;
        case '3':
            addLaptop(laptops, &numLaptops);
            break;
        case '4':
            displayAllLaptops(laptops, numLaptops);
            break;
        case '5':
            updateDeleteClient(clients, &numClients);
            break;
        case '6':
            updateDeleteLaptop(laptops, &numLaptops);
            break;
        case '7':
            addExpert(experts, &numExperts);
            break;
        case '8':
            displayAllExperts(experts, numExperts);
            break;
        case '9':
            printf("Thank you for using Laptop Repair System. Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '9');

    return 0;
}
