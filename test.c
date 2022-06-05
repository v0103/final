#include <gtk/gtk.h>

static void
print_hello (GtkWidget *widget,
             gpointer   data)
{
  g_print ("Hello World\n");
}

static void
move_ADD (GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget *window;
  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "ADD NBA PLAYERS");
  gtk_window_set_default_size (GTK_WINDOW (window), 500, 200);
  gtk_window_set_position(GTK_WINDOW (window), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable(GTK_WINDOW (window), FALSE);
}

static void
activate (GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget *window;
  GtkWidget *grid;
  GtkWidget *button1;
  GtkWidget *button2;
  GtkWidget *button3;
  GtkWidget *button4;
  GtkWidget *button5;
  GtkWidget *button6;
  GtkWidget *button7;
  GtkWidget *button8;

  /* create a new window, and set its title */
  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "NBA STATES");
  gtk_window_set_default_size (GTK_WINDOW (window), 500, 200);
  gtk_window_set_position(GTK_WINDOW (window), GTK_WIN_POS_CENTER);
  gtk_window_set_resizable(GTK_WINDOW (window), FALSE);
  
  
  
  
  /* Here we construct the container that is going pack our buttons */
  grid = gtk_grid_new ();
  
  /* Pack the container in the window */
  gtk_container_add (GTK_CONTAINER (window), grid);
  
  

  button1 = gtk_button_new_with_label ("ADD");
  g_signal_connect (button1, "clicked", G_CALLBACK (move_ADD), NULL);
  
  /* Place the first button in the grid cell (0, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
   gtk_grid_attach (GTK_GRID (grid), button1, 0, 0, 1, 1);
  
  button2 = gtk_button_new_with_label ("DELETE");
  g_signal_connect (button2, "clicked", G_CALLBACK (print_hello), NULL);
  
   /* Place the second button in the grid cell (1, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
  gtk_grid_attach (GTK_GRID (grid), button2, 1, 0, 1, 1);
  
  button3 = gtk_button_new_with_label ("SEARCH");
  g_signal_connect (button3, "clicked", G_CALLBACK (print_hello), NULL);
  
  /* Place the third button in the grid cell (2, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
  gtk_grid_attach (GTK_GRID (grid), button3, 2, 0, 1, 1);
  
  button4 = gtk_button_new_with_label ("COMPARE");
  g_signal_connect (button4, "clicked", G_CALLBACK (print_hello), NULL);
  
  /* Place the fourth button in the grid cell (3, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
  gtk_grid_attach (GTK_GRID (grid), button4, 3, 0, 1, 1);
  
  button5 = gtk_button_new_with_label ("SORT (ASCEND)");
  g_signal_connect (button5, "clicked", G_CALLBACK (print_hello), NULL);
  
  /* Place the fifth button in the grid cell (4, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
  gtk_grid_attach (GTK_GRID (grid), button5, 4, 0, 1, 1);
  
  button6 = gtk_button_new_with_label ("SORT (DESCEND)");
  g_signal_connect (button6, "clicked", G_CALLBACK (print_hello), NULL);
  
  /* Place the sixth button in the grid cell (5, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
  gtk_grid_attach (GTK_GRID (grid), button6, 5, 0, 1, 1);
  
  button7 = gtk_button_new_with_label ("TRAVERSE");
  g_signal_connect (button7, "clicked", G_CALLBACK (print_hello), NULL);
  
  /* Place the seventh button in the grid cell (6, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
  gtk_grid_attach (GTK_GRID (grid), button7, 6, 0, 1, 1);
  
  button8 = gtk_button_new_with_label ("QUIT");
  g_signal_connect (button8, "clicked", G_CALLBACK (print_hello), NULL);
  
  /* Place the eighth button in the grid cell (7, 0), and make it fill
   * just 1 cell horizontally and vertically (ie no spanning)
   */
  gtk_grid_attach (GTK_GRID (grid), button8, 7, 0, 1, 1);
  


  gtk_widget_show_all (window);
}

int
main (int    argc,
      char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
