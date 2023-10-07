# 1 "CleanBuffer.c"
# 1 "<command-line>"
# 1 "CleanBuffer.c"



void CleanBuffer()
{

    int symbol = 0;
    do
    {
      symbol = getchar();
    }
      while (symbol != '\n' && symbol != EOF);
}
