/*
 * Helper to submit via JSON-RPC and get back response.
 */

#include "_lightning-cli.c"

int main(int argc, char *argv[])
{
    int32_t retval = -1,maxsize = 1000000; char *buffer = malloc(maxsize);
    if ( buffer != 0 )
    {
        if ( cli_main(buffer,maxsize,argc,argv) == 0 )
        {
            printf("%s\n",buffer);
            retval = 1;
        } else printf("error from cli_main\n");
        free(buffer);
    }
    return(retval);
}

