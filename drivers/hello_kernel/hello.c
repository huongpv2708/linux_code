#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_start(void)
{
    printk(KERN_INFO "Hello, I am the kernel to help\n");
    return 0;
}

static void __exit hello_end(void)
{
    printk(KERN_INFO "Goodbye, see you again!\n");
}

module_init(hello_start);
module_exit(hello_end);

MODULE_LICENSE("GPL");
