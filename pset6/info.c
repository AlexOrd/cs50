char* haystack = content;
    char* needle = strstr(haystack, "\r\n\r\n");
    if (needle == NULL)
    {
        free(content);
        error(500);
        return;
    }
    
    const char MIMETYPE[MIMETYPE_LENTH][2][16] = ( //// escho
    ("text/css",".css"),
    ("text/html",".html"),
    ("image/gif",".gif"),
    ("image/x-icon",".ico"),
    ("image/jpeg",".jpg"),
    ("text/javascript",".js"),
    ("text/x-php",".php"),
    ("image/png",".png")
);