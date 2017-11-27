#include<linux/init.h>
#include<linux/module.h>
extern int kernel_module_hello2(void);
int a=1;
module_param(a,int,S_IRUGO);
static int hello_init(void){
	printk(KERN_WARNING"%d\n",a);
	kernel_module_hello2();
	return 0;
}
static void hello_exit(void){
	printk(KERN_WARNING"bye\n");
}
module_init(hello_init);
module_exit(hello_exit);
