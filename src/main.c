#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<stdlib.h>
#include"Sort.h"

size_t random_range(size_t , size_t );
int binary_search( int *, int, int, int);
void set_seed();

int binary_search(
        int *arr,
        int first,
        int last,
        int item
)
{
    printf("first is %d and last is %d\n", first, last);
    if (first > last)
        return -1;
    int mid = random_range(first, last);
    printf("mid is %d\n", mid);
    if(item == arr[mid])
        return mid;
    else if (arr[mid] > item){ 
        return binary_search(arr, first, mid - 1, item);
    }
    else {
        printf("we are here at less than and mid is %d \n", mid);
        return binary_search(arr, mid + 1, last, item);
    }
}

void set_seed()
{
    unsigned int seed;
    /* 
     * we can use this for generating all random numbers but opening
     * and closing a file can be expensive
     * */
    FILE* urandom = fopen("/dev/urandom", "r");
    fread(&seed, sizeof(int), 1, urandom);
    fclose(urandom);
    srand(seed);
}

size_t random_range(size_t start, size_t end)
{
    if (start > end)
        return 0;
    if (start == end)
        return start;
    return  (start + rand() % (end - start  + 1));
}

int main(void) 
{
    set_seed();
    size_t size;
    printf("Enter the size of you array : ");
    scanf("%lu", &size);
    int arr[size];
    int item;
    scan_arr(arr, size);
    printf("Enter the item you want to find : ");
    scanf("%d", &item);
    int index = binary_search(arr, 0, size - 1 , item);
    if (index == -1)
        printf("Item not found\n");
    else
        printf("item found at %d\n", index);
    /*for(size_t i = 0; i < 10 ; ++i){*/
        /*printf("random number between 1 and 10 is %lu\n", random_range(8,9));*/
    /*}*/
    return 0;
} 

/*void print_hello(*/
        /*GtkWidget *widget, */
        /*gpointer data)*/
/*{*/
    /*g_print("Hello world");*/
/*}*/


/*static void*/
/*activate (GtkApplication* app,*/
          /*gpointer        user_data)*/
/*{*/
    /*GtkWidget *window;*/
    /*GtkWidget *grid;*/
    /*GtkWidget *button;*/

    /*[> create a new window, and set its title <]*/
    /*window = gtk_application_window_new (app);*/
    /*gtk_window_set_title (GTK_WINDOW (window), "Window");*/

    /*[> Here we construct the container that is going pack our buttons <]*/
    /*grid = gtk_grid_new();*/

    /*[> Pack the container in the window <]*/
    /*gtk_window_set_child (GTK_WINDOW (window), grid);*/

    /*button = gtk_button_new_with_label ("Button 1");*/
    /*g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);*/

    /* Place the first button in the grid cell (0, 0), and make it fill
    * just 1 cell horizontally and vertically (ie no spanning)
    */
    /*gtk_grid_attach (GTK_GRID (grid), button, 0, 0, 1, 1);*/

    /*button = gtk_button_new_with_label ("Button 2");*/
    /*g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);*/

    /* Place the second button in the grid cell (1, 0), and make it fill
    * just 1 cell horizontally and vertically (ie no spanning)
    */
    /*gtk_grid_attach (GTK_GRID (grid), button, 1, 0, 1, 1);*/

    /*button = gtk_button_new_with_label ("Quit");*/
    /*g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_window_destroy), window);*/

    /* Place the Quit button in the grid cell (0, 1), and make it
    * span 2 columns.
    */
    /*gtk_grid_attach (GTK_GRID (grid), button, 0, 1, 2, 1);*/

    /*gtk_widget_show (window);*/

/*}*/

/*int*/
/*main (int    argc,*/
      /*char **argv)*/
/*{*/
  /*GtkApplication *app;*/
  /*int status;*/

  /*app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);*/
  /*g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);*/
  /*status = g_application_run (G_APPLICATION (app), argc, argv);*/
  /*g_object_unref (app);*/

  /*return status;*/
/*}*/


/*int main(void) {*/
    /*[>The length & breadth of a rectangle and radius of a circle are<]*/
    /*[>input through the keyboard. Write a program to calculate the<]*/
    /*[>area & perimeter of the rectangle, and the area &<]*/
    /*[>circumference of the circle. <]*/
    /*double length, breadth, radius;*/

    /*//input*/
    /*printf("Enter the lenght of the rectangle in cm : ");*/
    /*scanf("%lf", &length);*/
    /*printf("Enter the breadth of the rectange in cm: ");*/
    /*scanf("%lf", &breadth);*/
    /*printf("Enter the radius of the circle (in cm): ");*/
    /*scanf("%lf", &radius);*/

    /*// calculations*/
    /*double perimeter_rectange = 2 * (length + breadth);*/
    /*double area_rectangle = length * breadth;*/
    /*double circumference_circle  = 2 * 3.14 * radius;*/
    /*double area_circle = 3.14 * radius * radius;*/


    /*//output*/
    /*printf("The perimeter of the rectangle is (in cm^2): %lf\n", perimeter_rectange);*/
    /*printf("The area of the rectangle is (in cm^2): %lf\n" , area_rectangle);*/
    /*printf("The circumference of the circle is : (in cm) %lf\n", circumference_circle);*/
    /*printf("The area of the circle is : (in cm^2) %lf\n", area_circle);*/
    /*return 0;*/
/*}*/


