  int main(){
    int u = 0,y = 0;
                            unsigned int size = 10;
                            for(u=(size/2); u<=size; u+=2)
                            {
                                for(y=1; y<(size-u); y+=2)
                                {
                                    printf(" ");
                                }
                                for(y=1; y<=u; ++y)
                                {
                                    printf("*");
                                }
                                for(y=1; y<=(size-u); ++y)
                                {
                                    printf(" ");
                                }
                                for(y=1; y<=u; ++y)
                                {
                                    printf("*");
                                }
                                printf("\n");
                            }
                            for(u=size; u>=1; --u)
                            {
                                for(y=u; y<size; ++y)
                                {
                                    printf(" ");
                                }
                                for(y=1; y<=(u*2)-1; ++y)
                                {
                                    printf("*");
                                }
                                printf("\n");
                            }    
  }                        