/********************************************************************************
The MIT License

Copyright (c) 2016 eaizy

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
********************************************************************************/

#ifndef _QQNETWORK_
#define _QQNETWORK_

#include <curl/curl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "memstr.h"

/* Declear using Safari 10.0 on macOS */
#define _USERAGENT_ "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_6) AppleWebKit/602.2.14 (KHTML, like Gecko) Version/10.0.1 Safari/602.2.14"
#define COOKIE_FILE "./cookie.txt"
#define PEM_FILE "./pem.txt"


int curl_getfile(char* url, FILE * fp);
int curl_get(char* url, MemoryStruct * data);
int curl_get_with_referer(char* url, MemoryStruct * data, char * referer);
int curl_post(char* url, MemoryStruct * data,char * post_data, char * referer);

#endif
