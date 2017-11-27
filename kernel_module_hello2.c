#include<linux/init.h>
#include<linux/module.h>
int kernel_module_hello2(void){
	printk(KERN_INFO"hello2\n");
	return 0;
}
int hello2_init(void){
	printk(KERN_INFO"module_hello2\n");
	return 0;
}
void hello2_exit(void){
	printk(KERN_INFO"module_hello2_bye\n");
}
EXPORT_SYMBOL(kernel_module_hello2);
module_init(hello2_init);
module_exit(hello2_exit);
