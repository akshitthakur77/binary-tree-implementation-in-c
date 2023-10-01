#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
							struct node{
		int x;
		int *left;
		int *right;
	};
		int bt(){

	int y;
			printf("enter the data or 0 to no data : \n");
	      	scanf("%d",&y);
		struct node *newnode;
		 newnode=(struct node *)(malloc(sizeof(struct node)));
		if(y==0){
			return 0;
		}
	
		else{
		
	        newnode->x=y;
	        printf("enter the left %d node data : \n ",y);
	        newnode->left=bt();
	        printf("enter the right %d node data : \n",y);
	        newnode->right=bt();
		}
		return newnode;
	}
	
void printt(struct node *o){
	if(o==0){
		return ;
	}
	printf("%d",o->x);
	printt(o->left);
	printt(o->right);

}
int main() {
struct node *root;
root=bt();
printf("INORDER printing ....");
printt(root);
return 0;
}
