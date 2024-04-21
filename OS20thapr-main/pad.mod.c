#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcd6bb128, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x791d537b, "__register_chrdev" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x50481eea, "input_event" },
	{ 0xf532ed46, "input_allocate_device" },
	{ 0x9166fada, "strncpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa916b694, "strnlen" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "25C9776138C3F13412A0A8B");
