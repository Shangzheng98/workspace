#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc2996440, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x678ae26f, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x2d1451c, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x12abd86a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x96a67a26, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xec2ac905, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_sub_return) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x117ad121, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x7fd115f9, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x92f065f9, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xf9a3efb9, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_sub) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x71a1aa95, __VMLINUX_SYMBOL_STR(nf_register_hook) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xf5cc8013, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x75d5f6ab, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1f7386be, __VMLINUX_SYMBOL_STR(__ll_sc_atomic_add) },
	{ 0xb50b09da, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x356461c8, __VMLINUX_SYMBOL_STR(rtc_time64_to_tm) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x266184b1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x1fcaaaba, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xfc78f13c, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x29b3ae4e, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xfe5d4bb2, __VMLINUX_SYMBOL_STR(sys_tz) },
	{ 0x67138285, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xc1b1a68b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xbbb5fd24, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xdffb89af, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x3908fab5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x127bea46, __VMLINUX_SYMBOL_STR(nf_unregister_hook) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x49d42d5a, __VMLINUX_SYMBOL_STR(device_create_vargs) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xc9045e10, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x944dacf9, __VMLINUX_SYMBOL_STR(dump_page) },
	{ 0xf4918db9, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xffa0a433, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x6b1f00e5, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x6e22710, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "40CC0CC93AFED68960B744D");
