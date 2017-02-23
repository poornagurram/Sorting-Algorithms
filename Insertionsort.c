
int main() {
int n;
scanf("%d",&n);
            int a[n];
            int i;
                for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                }
            int j;
                    for(j=1;j<n;j++){
                        int temp = a[j];
                        int k = j-1;
                            while(k>=0 && a[k]>temp)
                            {
                                a[k+1]=a[k];
                                k--;  
                            }
                       
                        a[k+1] = temp; 
                        for(i=0;i<n;i++)
                        printf("%d ",a[i]);
                    }
        printf("\n");
        }
        return 0;
        }
