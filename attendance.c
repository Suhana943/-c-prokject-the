

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
printf("Content-type:text/html\n\n");


char *query = getenv("QUERY_STRING");
if (!query) {
printf("<h2>Error: No input received!</h2>");
return 0;
}


int id, status;
char name[50];


sscanf(query, "id=%d&name=%[^&]&status=%d", &id, name, &status);


printf("<html><body style='font-family:Arial;'>");
printf("<h2>Attendance Recorded Successfully</h2>");
printf("<p><b>ID:</b> %d</p>", id);
printf("<p><b>Name:</b> %s</p>", name);
printf("<p><b>Status:</b> %s</p>", status ? "Present" : "Absent");
printf("</body></html>");


return 0;
}
