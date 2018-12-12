#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = /Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/source;/Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/kernel/tirtos/packages
override XDCROOT = /Applications/ti/xdctools_3_50_08_24_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = /Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/source;/Users/druepeters/ti/simplelink_msp432p4_sdk_2_30_00_14/kernel/tirtos/packages;/Applications/ti/xdctools_3_50_08_24_core/packages;..
HOSTOS = MacOS
endif
