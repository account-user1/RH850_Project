# Version of the language definition syntax used in the file
version = "1"

%include "c_style_preprocessors_internal.gsc"
# To define the color for preprocessors, use a statement like the
# following one, otherwise, the default color is used:
# language.preprocessor.color = "#008080"

# language specification for syntax coloring and
# auto-indention in MULTI's editor.
language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS-FIREFLY"
	description = "FireFly Assembly Language"
	# File extensions for the language
	extension = {"fly"}

	# The following are some other information about the language

	# Is the language case-sensitive? If no explicit specification
	# for it, the default value is true.
	case_sensitive = false

	# Priority conflict solution.
	# Comment, string and character have the same priority.
	# When preprocessor conflicts with them, some language, like
	# C/C++, let comment, string and character have higher priority,
	# other language, like PASCAL, do the other choice.
	# We choose the behavior of C/C++ as the default behavior.
	# If you want to change, like for PASCAL, use the following 
	# statement:
	# pascal_style_priority = true

	# Separator of the language to delimit syntax tokens
	separator = "\\\"+-*/<=>:,;\'\t()[]^%!~|& {}.?"

	# Escape sequence leader: one character(like the one in C).
	# escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	
	# Instructions
	name += {"abs", "abs.3"}
	name += {"abs16", "abs16.3"}
	name += {"abs32", "abs32.3"}
	name += {"abs64", "abs64.3"}
	name += {"abs8", "abs8.3"}
	name += {"acc16d", "acc16d.3"}
	name += {"acc16d2", "acc16d2.3"}
	name += {"acc32d", "acc32d.3"}
	name += {"acc32d2", "acc32d2.3"}
	name += {"acc8d", "acc8d.3"}
	name += {"acc8d2", "acc8d2.3"}
	name += {"add", "add.2", "add.3", "add.4", "add.6"}
	name += {"add16", "add16.3"}
	name += {"add32", "add32.3"}
	name += {"add64", "add64.3"}
	name += {"add8", "add8.3"}
	name += {"add_sats", "add_sats.3"}
	name += {"add_sats16", "add_sats16.3"}
	name += {"add_sats32", "add_sats32.3"}
	name += {"add_sats64", "add_sats64.3"}
	name += {"add_sats8", "add_sats8.3"}
	name += {"add_satu", "add_satu.3"}
	name += {"add_satu16", "add_satu16.3"}
	name += {"add_satu32", "add_satu32.3"}
	name += {"add_satu64", "add_satu64.3"}
	name += {"add_satu8", "add_satu8.3"}
	name += {"addc", "addc.3"}
	name += {"addc16", "addc16.3"}
	name += {"addc32", "addc32.3"}
	name += {"addc64", "addc64.3"}
	name += {"addc8", "addc8.3"}
	name += {"addzc", "addzc.3"}
	name += {"addzc16", "addzc16.3"}
	name += {"addzc32", "addzc32.3"}
	name += {"addzc64", "addzc64.3"}
	name += {"addzc8", "addzc8.3"}
	name += {"and", "and.2", "and.3"}
	name += {"andnot", "andnot.2", "andnot.3"}
	name += {"axset", "axset.2"}
	name += {"barrier", "barrier.3"}
	name += {"bb0", "bb0.3"}
	name += {"bb1", "bb1.3"}
	name += {"bcond", "bcond.3"}
	name += {"beq", "beq.3"}
	name += {"beqz", "beqz.3"}
	name += {"bit", "bit.2", "bit.3"}
	name += {"bit16", "bit16.3"}
	name += {"bit32", "bit32.3"}
	name += {"bit64", "bit64.3"}
	name += {"bit8", "bit8.3"}
	name += {"bitclr", "bitclr.3"}
	name += {"bitclr16", "bitclr16.3"}
	name += {"bitclr32", "bitclr32.3"}
	name += {"bitclr64", "bitclr64.3"}
	name += {"bitclr8", "bitclr8.3"}
	name += {"bitflip", "bitflip.3"}
	name += {"bitflip16", "bitflip16.3"}
	name += {"bitflip32", "bitflip32.3"}
	name += {"bitflip64", "bitflip64.3"}
	name += {"bitflip8", "bitflip8.3"}
	name += {"bitisl", "bitisl.3"}
	name += {"bitisl16", "bitisl16.3"}
	name += {"bitisl32", "bitisl32.3"}
	name += {"bitisl64", "bitisl64.3"}
	name += {"bitisl8", "bitisl8.3"}
	name += {"bitset", "bitset.3"}
	name += {"bitset16", "bitset16.3"}
	name += {"bitset32", "bitset32.3"}
	name += {"bitset64", "bitset64.3"}
	name += {"bitset8", "bitset8.3"}
	name += {"bne", "bne.3"}
	name += {"bnez", "bnez.3"}
	name += {"break", "break.1"}
	name += {"bsge", "bsge.3"}
	name += {"bsgt", "bsgt.3"}
	name += {"bsle", "bsle.3"}
	name += {"bslt", "bslt.3"}
	name += {"buge", "buge.3"}
	name += {"bugt", "bugt.3"}
	name += {"bule", "bule.3"}
	name += {"bult", "bult.3"}
	name += {"call", "call.2", "call.3", "call.6"}
	name += {"callind", "callind.1", "callind.2"}
	name += {"circdec", "circdec.3"}
	name += {"circdec2", "circdec2.3"}
	name += {"circinc", "circinc.3"}
	name += {"circinc2", "circinc2.3"}
	name += {"clo", "clo.3"}
	name += {"clo16", "clo16.3"}
	name += {"clo32", "clo32.3"}
	name += {"clo64", "clo64.3"}
	name += {"clo8", "clo8.3"}
	name += {"cls", "cls.3"}
	name += {"cls16", "cls16.3"}
	name += {"cls32", "cls32.3"}
	name += {"cls64", "cls64.3"}
	name += {"cls8", "cls8.3"}
	name += {"clz", "clz.3"}
	name += {"clz16", "clz16.3"}
	name += {"clz32", "clz32.3"}
	name += {"clz64", "clz64.3"}
	name += {"clz8", "clz8.3"}
	name += {"cmp", "cmp.3"}
	name += {"cmp16", "cmp16.3"}
	name += {"cmp32", "cmp32.3"}
	name += {"cmp64", "cmp64.3"}
	name += {"cmp8", "cmp8.3"}
	name += {"cmplxmul16", "cmplxmul16.3"}
	name += {"cmplxmul32", "cmplxmul32.3"}
	name += {"cmplxmul8", "cmplxmul8.3"}
	name += {"cnadd", "cnadd.3"}
	name += {"cnadd16", "cnadd16.3"}
	name += {"cnadd32", "cnadd32.3"}
	name += {"cnadd64", "cnadd64.3"}
	name += {"cnadd8", "cnadd8.3"}
	name += {"cnmov", "cnmov.3"}
	name += {"cnmov16", "cnmov16.3"}
	name += {"cnmov32", "cnmov32.3"}
	name += {"cnmov64", "cnmov64.3"}
	name += {"cnmov8", "cnmov8.3"}
	name += {"cnmovn", "cnmovn.3"}
	name += {"cnmovn16", "cnmovn16.3"}
	name += {"cnmovn32", "cnmovn32.3"}
	name += {"cnmovn64", "cnmovn64.3"}
	name += {"cnmovn8", "cnmovn8.3"}
	name += {"cnsub", "cnsub.3"}
	name += {"cnsub16", "cnsub16.3"}
	name += {"cnsub32", "cnsub32.3"}
	name += {"cnsub64", "cnsub64.3"}
	name += {"cnsub8", "cnsub8.3"}
	name += {"crs", "crs.3"}
	name += {"crs16", "crs16.3"}
	name += {"crs32", "crs32.3"}
	name += {"crs64", "crs64.3"}
	name += {"crs8", "crs8.3"}
	name += {"ctnadd", "ctnadd.3"}
	name += {"ctnadd16", "ctnadd16.3"}
	name += {"ctnadd32", "ctnadd32.3"}
	name += {"ctnadd64", "ctnadd64.3"}
	name += {"ctnadd8", "ctnadd8.3"}
	name += {"ctnmov", "ctnmov.3"}
	name += {"ctnmov16", "ctnmov16.3"}
	name += {"ctnmov32", "ctnmov32.3"}
	name += {"ctnmov64", "ctnmov64.3"}
	name += {"ctnmov8", "ctnmov8.3"}
	name += {"ctnsub", "ctnsub.3"}
	name += {"ctnsub16", "ctnsub16.3"}
	name += {"ctnsub32", "ctnsub32.3"}
	name += {"ctnsub64", "ctnsub64.3"}
	name += {"ctnsub8", "ctnsub8.3"}
	name += {"ctzadd", "ctzadd.3"}
	name += {"ctzadd16", "ctzadd16.3"}
	name += {"ctzadd32", "ctzadd32.3"}
	name += {"ctzadd64", "ctzadd64.3"}
	name += {"ctzadd8", "ctzadd8.3"}
	name += {"ctzmov", "ctzmov.3"}
	name += {"ctzmov16", "ctzmov16.3"}
	name += {"ctzmov32", "ctzmov32.3"}
	name += {"ctzmov64", "ctzmov64.3"}
	name += {"ctzmov8", "ctzmov8.3"}
	name += {"ctzsub", "ctzsub.3"}
	name += {"ctzsub16", "ctzsub16.3"}
	name += {"ctzsub32", "ctzsub32.3"}
	name += {"ctzsub64", "ctzsub64.3"}
	name += {"ctzsub8", "ctzsub8.3"}
	name += {"czadd", "czadd.3"}
	name += {"czadd16", "czadd16.3"}
	name += {"czadd32", "czadd32.3"}
	name += {"czadd64", "czadd64.3"}
	name += {"czadd8", "czadd8.3"}
	name += {"czmov", "czmov.3"}
	name += {"czmov16", "czmov16.3"}
	name += {"czmov32", "czmov32.3"}
	name += {"czmov64", "czmov64.3"}
	name += {"czmov8", "czmov8.3"}
	name += {"czmovn", "czmovn.3"}
	name += {"czmovn16", "czmovn16.3"}
	name += {"czmovn32", "czmovn32.3"}
	name += {"czmovn64", "czmovn64.3"}
	name += {"czmovn8", "czmovn8.3"}
	name += {"czsub", "czsub.3"}
	name += {"czsub16", "czsub16.3"}
	name += {"czsub32", "czsub32.3"}
	name += {"czsub64", "czsub64.3"}
	name += {"czsub8", "czsub8.3"}
	name += {"dadd", "dadd.3"}
	name += {"ddiv", "ddiv.3"}
	name += {"debug", "debug.3"}
	name += {"di", "di.3"}
	name += {"dma", "dma.4"}
	name += {"dms", "dms.4"}
	name += {"dmul", "dmul.3"}
	name += {"dot16", "dot16.3"}
	name += {"dot2d16", "dot2d16.3"}
	name += {"dot2d32", "dot2d32.3"}
	name += {"dot2d64", "dot2d64.3"}
	name += {"dot2d8", "dot2d8.3"}
	name += {"dot2dadd16", "dot2dadd16.3"}
	name += {"dot2dadd32", "dot2dadd32.3"}
	name += {"dot2dadd64", "dot2dadd64.3"}
	name += {"dot2dadd8", "dot2dadd8.3"}
	name += {"dot2djx16", "dot2djx16.3"}
	name += {"dot2djx32", "dot2djx32.3"}
	name += {"dot2djx64", "dot2djx64.3"}
	name += {"dot2djx8", "dot2djx8.3"}
	name += {"dot2djxadd16", "dot2djxadd16.3"}
	name += {"dot2djxadd32", "dot2djxadd32.3"}
	name += {"dot2djxadd64", "dot2djxadd64.3"}
	name += {"dot2djxadd8", "dot2djxadd8.3"}
	name += {"dot2djxsub16", "dot2djxsub16.3"}
	name += {"dot2djxsub32", "dot2djxsub32.3"}
	name += {"dot2djxsub64", "dot2djxsub64.3"}
	name += {"dot2djxsub8", "dot2djxsub8.3"}
	name += {"dot2dsub16", "dot2dsub16.3"}
	name += {"dot2dsub32", "dot2dsub32.3"}
	name += {"dot2dsub64", "dot2dsub64.3"}
	name += {"dot2dsub8", "dot2dsub8.3"}
	name += {"dot2dx16", "dot2dx16.3"}
	name += {"dot2dx32", "dot2dx32.3"}
	name += {"dot2dx64", "dot2dx64.3"}
	name += {"dot2dx8", "dot2dx8.3"}
	name += {"dot2dxadd16", "dot2dxadd16.3"}
	name += {"dot2dxadd32", "dot2dxadd32.3"}
	name += {"dot2dxadd64", "dot2dxadd64.3"}
	name += {"dot2dxadd8", "dot2dxadd8.3"}
	name += {"dot2dxsub16", "dot2dxsub16.3"}
	name += {"dot2dxsub32", "dot2dxsub32.3"}
	name += {"dot2dxsub64", "dot2dxsub64.3"}
	name += {"dot2dxsub8", "dot2dxsub8.3"}
	name += {"dot32", "dot32.3"}
	name += {"dot8", "dot8.3"}
	name += {"dotadd16", "dotadd16.3"}
	name += {"dotadd32", "dotadd32.3"}
	name += {"dotadd8", "dotadd8.3"}
	name += {"dotjx16", "dotjx16.3"}
	name += {"dotjx32", "dotjx32.3"}
	name += {"dotjx8", "dotjx8.3"}
	name += {"dotjxadd16", "dotjxadd16.3"}
	name += {"dotjxadd32", "dotjxadd32.3"}
	name += {"dotjxadd8", "dotjxadd8.3"}
	name += {"dotjxsub16", "dotjxsub16.3"}
	name += {"dotjxsub32", "dotjxsub32.3"}
	name += {"dotjxsub8", "dotjxsub8.3"}
	name += {"dotsub16", "dotsub16.3"}
	name += {"dotsub32", "dotsub32.3"}
	name += {"dotsub8", "dotsub8.3"}
	name += {"dotx16", "dotx16.3"}
	name += {"dotx32", "dotx32.3"}
	name += {"dotx8", "dotx8.3"}
	name += {"dotxadd16", "dotxadd16.3"}
	name += {"dotxadd32", "dotxadd32.3"}
	name += {"dotxadd8", "dotxadd8.3"}
	name += {"dotxsub16", "dotxsub16.3"}
	name += {"dotxsub32", "dotxsub32.3"}
	name += {"dotxsub8", "dotxsub8.3"}
	name += {"dscalb", "dscalb.3"}
	name += {"dsub", "dsub.3"}
	name += {"dtof", "dtof.3"}
	name += {"dtos32", "dtos32.3"}
	name += {"dtos64", "dtos64.3"}
	name += {"dtou32", "dtou32.3"}
	name += {"dtou64", "dtou64.3"}
	name += {"ea", "ea.3"}
	name += {"ea16", "ea16.3"}
	name += {"ea32", "ea32.3"}
	name += {"ea64", "ea64.3"}
	name += {"ea8", "ea8.3"}
	name += {"ei", "ei.3"}
	name += {"epilog", "epilog.1"}
	name += {"eq", "eq.3"}
	name += {"eq16", "eq16.3"}
	name += {"eq32", "eq32.3"}
	name += {"eq64", "eq64.3"}
	name += {"eq8", "eq8.3"}
	name += {"fabs", "fabs.3"}
	name += {"fadd", "fadd.3"}
	name += {"fdiv", "fdiv.3"}
	name += {"fma", "fma.4"}
	name += {"fms", "fms.4"}
	name += {"fmul", "fmul.3"}
	name += {"fneg", "fneg.3"}
	name += {"fscalb", "fscalb.3"}
	name += {"fsub", "fsub.3"}
	name += {"ftod", "ftod.3"}
	name += {"ftos32", "ftos32.3"}
	name += {"ftos64", "ftos64.3"}
	name += {"ftou32", "ftou32.3"}
	name += {"ftou64", "ftou64.3"}
	name += {"fxadd32", "fxadd32.3"}
	name += {"fxadd64", "fxadd64.3"}
	name += {"fxdiv32", "fxdiv32.3"}
	name += {"fxdiv64", "fxdiv64.3"}
	name += {"fxfrac2_32", "fxfrac2_32.3"}
	name += {"fxfrac2_64", "fxfrac2_64.3"}
	name += {"fxfrac2_add32", "fxfrac2_add32.3"}
	name += {"fxfrac2_add64", "fxfrac2_add64.3"}
	name += {"fxmul32", "fxmul32.3"}
	name += {"fxmul64", "fxmul64.3"}
	name += {"fxmulhuus32", "fxmulhuus32.3"}
	name += {"fxmulhuus64", "fxmulhuus64.3"}
	name += {"fxpack32", "fxpack32.3"}
	name += {"fxpack64", "fxpack64.3"}
	name += {"fxrsqrt32", "fxrsqrt32.3"}
	name += {"fxrsqrt64", "fxrsqrt64.3"}
	name += {"fxshrst32", "fxshrst32.3"}
	name += {"fxshrst64", "fxshrst64.3"}
	name += {"fxsqrt32", "fxsqrt32.3"}
	name += {"fxsqrt64", "fxsqrt64.3"}
	name += {"fxsub32", "fxsub32.3"}
	name += {"fxsub64", "fxsub64.3"}
	name += {"fxswap_add32", "fxswap_add32.3"}
	name += {"fxswap_add64", "fxswap_add64.3"}
	name += {"fxswap_sub32", "fxswap_sub32.3"}
	name += {"fxswap_sub64", "fxswap_sub64.3"}
	name += {"hvc", "hvc.3"}
	name += {"jump", "jump.2", "jump.3", "jump.6"}
	name += {"ld128", "ld128.3"}
	name += {"ld128hx", "ld128hx.3"}
	name += {"ld128hxr", "ld128hxr.3"}
	name += {"ld128r", "ld128r.3"}
	name += {"ld128x", "ld128x.3"}
	name += {"ld128xr", "ld128xr.3"}
	name += {"ld16h", "ld16h.3"}
	name += {"ld16hr", "ld16hr.3"}
	name += {"ld16s", "ld16s.2", "ld16s.3", "ld16s.4", "ld16s.6"}
	name += {"ld16shx", "ld16shx.3"}
	name += {"ld16shxr", "ld16shxr.3"}
	name += {"ld16sr", "ld16sr.3"}
	name += {"ld16sx", "ld16sx.3"}
	name += {"ld16sxr", "ld16sxr.3"}
	name += {"ld16u", "ld16u.2", "ld16u.3", "ld16u.4", "ld16u.6"}
	name += {"ld16uhx", "ld16uhx.3"}
	name += {"ld16uhxr", "ld16uhxr.3"}
	name += {"ld16ur", "ld16ur.3"}
	name += {"ld16ux", "ld16ux.3"}
	name += {"ld16uxr", "ld16uxr.3"}
	name += {"ld32", "ld32.2", "ld32.3", "ld32.4", "ld32.6"}
	name += {"ld32h", "ld32h.3"}
	name += {"ld32hr", "ld32hr.3"}
	name += {"ld32hx", "ld32hx.3"}
	name += {"ld32hxr", "ld32hxr.3"}
	name += {"ld32r", "ld32r.3"}
	name += {"ld32s", "ld32s.2", "ld32s.3", "ld32s.4", "ld32s.6"}
	name += {"ld32shx", "ld32shx.3"}
	name += {"ld32shxr", "ld32shxr.3"}
	name += {"ld32sr", "ld32sr.3"}
	name += {"ld32sx", "ld32sx.3"}
	name += {"ld32sxr", "ld32sxr.3"}
	name += {"ld32u", "ld32u.2", "ld32u.3", "ld32u.4", "ld32u.6"}
	name += {"ld32uhx", "ld32uhx.3"}
	name += {"ld32uhxr", "ld32uhxr.3"}
	name += {"ld32ur", "ld32ur.3"}
	name += {"ld32ux", "ld32ux.3"}
	name += {"ld32uxr", "ld32uxr.3"}
	name += {"ld32x", "ld32x.3"}
	name += {"ld32xr", "ld32xr.3"}
	name += {"ld64", "ld64.2", "ld64.3", "ld64.4", "ld64.6"}
	name += {"ld64hx", "ld64hx.3"}
	name += {"ld64hxr", "ld64hxr.3"}
	name += {"ld64r", "ld64r.3"}
	name += {"ld64x", "ld64x.3"}
	name += {"ld64xr", "ld64xr.3"}
	name += {"ld8h", "ld8h.3"}
	name += {"ld8hr", "ld8hr.3"}
	name += {"ld8s", "ld8s.2", "ld8s.3", "ld8s.4", "ld8s.6"}
	name += {"ld8sr", "ld8sr.3"}
	name += {"ld8u", "ld8u.2", "ld8u.3", "ld8u.4", "ld8u.6"}
	name += {"ld8ur", "ld8ur.3"}
	name += {"lda", "lda.2", "lda.3", "lda.4", "lda.6"}
	name += {"lda2", "lda2.3"}
	name += {"lda2r", "lda2r.3"}
	name += {"ldar", "ldar.3"}
	name += {"ldd2", "ldd2.2", "ldd2.3", "ldd2.4", "ldd2.6"}
	name += {"li32m", "li32m.6"}
	name += {"loopeq", "loopeq.3"}
	name += {"loopne", "loopne.3"}
	name += {"maddhqq", "maddhqq.3"}
	name += {"maddhqq16", "maddhqq16.3"}
	name += {"maddhqq32", "maddhqq32.3"}
	name += {"maddhqq64", "maddhqq64.3"}
	name += {"maddhqq8", "maddhqq8.3"}
	name += {"maddhss", "maddhss.3"}
	name += {"maddhss16", "maddhss16.3"}
	name += {"maddhss32", "maddhss32.3"}
	name += {"maddhss64", "maddhss64.3"}
	name += {"maddhss8", "maddhss8.3"}
	name += {"maddhuu", "maddhuu.3"}
	name += {"maddhuu16", "maddhuu16.3"}
	name += {"maddhuu32", "maddhuu32.3"}
	name += {"maddhuu64", "maddhuu64.3"}
	name += {"maddhuu8", "maddhuu8.3"}
	name += {"maddl", "maddl.3"}
	name += {"maddl16", "maddl16.3"}
	name += {"maddl32", "maddl32.3"}
	name += {"maddl64", "maddl64.3"}
	name += {"maddl8", "maddl8.3"}
	name += {"maddxhqq", "maddxhqq.3"}
	name += {"maddxhqq16", "maddxhqq16.3"}
	name += {"maddxhqq32", "maddxhqq32.3"}
	name += {"maddxhqq64", "maddxhqq64.3"}
	name += {"maddxhqq8", "maddxhqq8.3"}
	name += {"maddxhss", "maddxhss.3"}
	name += {"maddxhss16", "maddxhss16.3"}
	name += {"maddxhss32", "maddxhss32.3"}
	name += {"maddxhss64", "maddxhss64.3"}
	name += {"maddxhss8", "maddxhss8.3"}
	name += {"maddxhuu", "maddxhuu.3"}
	name += {"maddxhuu16", "maddxhuu16.3"}
	name += {"maddxhuu32", "maddxhuu32.3"}
	name += {"maddxhuu64", "maddxhuu64.3"}
	name += {"maddxhuu8", "maddxhuu8.3"}
	name += {"maddxls", "maddxls.3"}
	name += {"maddxls16", "maddxls16.3"}
	name += {"maddxls32", "maddxls32.3"}
	name += {"maddxls64", "maddxls64.3"}
	name += {"maddxls8", "maddxls8.3"}
	name += {"maddxlz", "maddxlz.3"}
	name += {"maddxlz16", "maddxlz16.3"}
	name += {"maddxlz32", "maddxlz32.3"}
	name += {"maddxlz64", "maddxlz64.3"}
	name += {"maddxlz8", "maddxlz8.3"}
	name += {"maddxqq", "maddxqq.3"}
	name += {"maddxqq16", "maddxqq16.3"}
	name += {"maddxqq32", "maddxqq32.3"}
	name += {"maddxqq64", "maddxqq64.3"}
	name += {"maddxqq8", "maddxqq8.3"}
	name += {"maddxss", "maddxss.3"}
	name += {"maddxss16", "maddxss16.3"}
	name += {"maddxss32", "maddxss32.3"}
	name += {"maddxss64", "maddxss64.3"}
	name += {"maddxss8", "maddxss8.3"}
	name += {"maddxuu", "maddxuu.3"}
	name += {"maddxuu16", "maddxuu16.3"}
	name += {"maddxuu32", "maddxuu32.3"}
	name += {"maddxuu64", "maddxuu64.3"}
	name += {"maddxuu8", "maddxuu8.3"}
	name += {"mov", "mov.2", "mov.3", "mov.4", "mov.6"}
	name += {"movd2", "movd2.2"}
	name += {"msubhqq", "msubhqq.3"}
	name += {"msubhqq16", "msubhqq16.3"}
	name += {"msubhqq32", "msubhqq32.3"}
	name += {"msubhqq64", "msubhqq64.3"}
	name += {"msubhqq8", "msubhqq8.3"}
	name += {"msubhss", "msubhss.3"}
	name += {"msubhss16", "msubhss16.3"}
	name += {"msubhss32", "msubhss32.3"}
	name += {"msubhss64", "msubhss64.3"}
	name += {"msubhss8", "msubhss8.3"}
	name += {"msubhuu", "msubhuu.3"}
	name += {"msubhuu16", "msubhuu16.3"}
	name += {"msubhuu32", "msubhuu32.3"}
	name += {"msubhuu64", "msubhuu64.3"}
	name += {"msubhuu8", "msubhuu8.3"}
	name += {"msubl", "msubl.3"}
	name += {"msubl16", "msubl16.3"}
	name += {"msubl32", "msubl32.3"}
	name += {"msubl64", "msubl64.3"}
	name += {"msubl8", "msubl8.3"}
	name += {"msubxhqq", "msubxhqq.3"}
	name += {"msubxhqq16", "msubxhqq16.3"}
	name += {"msubxhqq32", "msubxhqq32.3"}
	name += {"msubxhqq64", "msubxhqq64.3"}
	name += {"msubxhqq8", "msubxhqq8.3"}
	name += {"msubxhss", "msubxhss.3"}
	name += {"msubxhss16", "msubxhss16.3"}
	name += {"msubxhss32", "msubxhss32.3"}
	name += {"msubxhss64", "msubxhss64.3"}
	name += {"msubxhss8", "msubxhss8.3"}
	name += {"msubxhuu", "msubxhuu.3"}
	name += {"msubxhuu16", "msubxhuu16.3"}
	name += {"msubxhuu32", "msubxhuu32.3"}
	name += {"msubxhuu64", "msubxhuu64.3"}
	name += {"msubxhuu8", "msubxhuu8.3"}
	name += {"msubxls", "msubxls.3"}
	name += {"msubxls16", "msubxls16.3"}
	name += {"msubxls32", "msubxls32.3"}
	name += {"msubxls64", "msubxls64.3"}
	name += {"msubxls8", "msubxls8.3"}
	name += {"msubxlz", "msubxlz.3"}
	name += {"msubxlz16", "msubxlz16.3"}
	name += {"msubxlz32", "msubxlz32.3"}
	name += {"msubxlz64", "msubxlz64.3"}
	name += {"msubxlz8", "msubxlz8.3"}
	name += {"msubxqq", "msubxqq.3"}
	name += {"msubxqq16", "msubxqq16.3"}
	name += {"msubxqq32", "msubxqq32.3"}
	name += {"msubxqq64", "msubxqq64.3"}
	name += {"msubxqq8", "msubxqq8.3"}
	name += {"msubxss", "msubxss.3"}
	name += {"msubxss16", "msubxss16.3"}
	name += {"msubxss32", "msubxss32.3"}
	name += {"msubxss64", "msubxss64.3"}
	name += {"msubxss8", "msubxss8.3"}
	name += {"msubxuu", "msubxuu.3"}
	name += {"msubxuu16", "msubxuu16.3"}
	name += {"msubxuu32", "msubxuu32.3"}
	name += {"msubxuu64", "msubxuu64.3"}
	name += {"msubxuu8", "msubxuu8.3"}
	name += {"mul", "mul.2", "mul.3"}
	name += {"mul16", "mul16.3"}
	name += {"mul32", "mul32.3"}
	name += {"mul64", "mul64.3"}
	name += {"mul8", "mul8.3"}
	name += {"mulhqq", "mulhqq.3"}
	name += {"mulhqq16", "mulhqq16.3"}
	name += {"mulhqq32", "mulhqq32.3"}
	name += {"mulhqq64", "mulhqq64.3"}
	name += {"mulhqq8", "mulhqq8.3"}
	name += {"mulhss", "mulhss.3"}
	name += {"mulhss16", "mulhss16.3"}
	name += {"mulhss32", "mulhss32.3"}
	name += {"mulhss64", "mulhss64.3"}
	name += {"mulhss8", "mulhss8.3"}
	name += {"mulhuu", "mulhuu.3"}
	name += {"mulhuu16", "mulhuu16.3"}
	name += {"mulhuu32", "mulhuu32.3"}
	name += {"mulhuu64", "mulhuu64.3"}
	name += {"mulhuu8", "mulhuu8.3"}
	name += {"mulxhqq", "mulxhqq.3"}
	name += {"mulxhqq16", "mulxhqq16.3"}
	name += {"mulxhqq32", "mulxhqq32.3"}
	name += {"mulxhqq64", "mulxhqq64.3"}
	name += {"mulxhqq8", "mulxhqq8.3"}
	name += {"mulxhss", "mulxhss.3"}
	name += {"mulxhss16", "mulxhss16.3"}
	name += {"mulxhss32", "mulxhss32.3"}
	name += {"mulxhss64", "mulxhss64.3"}
	name += {"mulxhss8", "mulxhss8.3"}
	name += {"mulxhuu", "mulxhuu.3"}
	name += {"mulxhuu16", "mulxhuu16.3"}
	name += {"mulxhuu32", "mulxhuu32.3"}
	name += {"mulxhuu64", "mulxhuu64.3"}
	name += {"mulxhuu8", "mulxhuu8.3"}
	name += {"mulxls", "mulxls.3"}
	name += {"mulxls16", "mulxls16.3"}
	name += {"mulxls32", "mulxls32.3"}
	name += {"mulxls64", "mulxls64.3"}
	name += {"mulxls8", "mulxls8.3"}
	name += {"mulxlz", "mulxlz.3"}
	name += {"mulxlz16", "mulxlz16.3"}
	name += {"mulxlz32", "mulxlz32.3"}
	name += {"mulxlz64", "mulxlz64.3"}
	name += {"mulxlz8", "mulxlz8.3"}
	name += {"mulxqq", "mulxqq.3"}
	name += {"mulxqq16", "mulxqq16.3"}
	name += {"mulxqq32", "mulxqq32.3"}
	name += {"mulxqq64", "mulxqq64.3"}
	name += {"mulxqq8", "mulxqq8.3"}
	name += {"mulxss", "mulxss.3"}
	name += {"mulxss16", "mulxss16.3"}
	name += {"mulxss32", "mulxss32.3"}
	name += {"mulxss64", "mulxss64.3"}
	name += {"mulxss8", "mulxss8.3"}
	name += {"mulxuu", "mulxuu.3"}
	name += {"mulxuu16", "mulxuu16.3"}
	name += {"mulxuu32", "mulxuu32.3"}
	name += {"mulxuu64", "mulxuu64.3"}
	name += {"mulxuu8", "mulxuu8.3"}
	name += {"ne", "ne.3"}
	name += {"ne16", "ne16.3"}
	name += {"ne32", "ne32.3"}
	name += {"ne64", "ne64.3"}
	name += {"ne8", "ne8.3"}
	name += {"neg", "neg.2", "neg.3"}
	name += {"neg16", "neg16.3"}
	name += {"neg32", "neg32.3"}
	name += {"neg64", "neg64.3"}
	name += {"neg8", "neg8.3"}
	name += {"negb", "negb.3"}
	name += {"negb16", "negb16.3"}
	name += {"negb32", "negb32.3"}
	name += {"negb64", "negb64.3"}
	name += {"negb8", "negb8.3"}
	name += {"nexus0", "nexus0.3"}
	name += {"nexus1", "nexus1.3"}
	name += {"nexus2", "nexus2.3"}
	name += {"nop", "nop.1"}
	name += {"not", "not.2", "not.3"}
	name += {"or", "or.2", "or.3"}
	name += {"pend", "pend.3"}
	name += {"permute", "permute.3"}
	name += {"permute2", "permute2.3"}
	name += {"prefetchc", "prefetchc.2"}
	name += {"prefetchd", "prefetchd.2"}
	name += {"probec", "probec.3"}
	name += {"prolog0", "prolog0.1"}
	name += {"prolog1", "prolog1.1"}
	name += {"purgec", "purgec.2"}
	name += {"purged", "purged.2"}
	name += {"recipa", "recipa.3"}
	name += {"recipa16", "recipa16.3"}
	name += {"recipa32", "recipa32.3"}
	name += {"recipa64", "recipa64.3"}
	name += {"recipa8", "recipa8.3"}
	name += {"recmul", "recmul.3"}
	name += {"recmul16", "recmul16.3"}
	name += {"recmul32", "recmul32.3"}
	name += {"recmul64", "recmul64.3"}
	name += {"recmul8", "recmul8.3"}
	name += {"recmuln", "recmuln.3"}
	name += {"recmuln16", "recmuln16.3"}
	name += {"recmuln32", "recmuln32.3"}
	name += {"recmuln64", "recmuln64.3"}
	name += {"recmuln8", "recmuln8.3"}
	name += {"recmulx", "recmulx.3"}
	name += {"recmulx16", "recmulx16.3"}
	name += {"recmulx32", "recmulx32.3"}
	name += {"recmulx64", "recmulx64.3"}
	name += {"recmulx8", "recmulx8.3"}
	name += {"recquo", "recquo.3"}
	name += {"recquo16", "recquo16.3"}
	name += {"recquo32", "recquo32.3"}
	name += {"recquo64", "recquo64.3"}
	name += {"recquo8", "recquo8.3"}
	name += {"rep16", "rep16.3"}
	name += {"rep32", "rep32.3"}
	name += {"rep8", "rep8.3"}
	name += {"retbrk", "retbrk.3"}
	name += {"retint", "retint.3"}
	name += {"retrap", "retrap.1"}
	name += {"return", "return.1"}
	name += {"revbit", "revbit.3"}
	name += {"revbit16", "revbit16.3"}
	name += {"revbit32", "revbit32.3"}
	name += {"revbit64", "revbit64.3"}
	name += {"revbit8", "revbit8.3"}
	name += {"revbyte", "revbyte.3"}
	name += {"revbyte16", "revbyte16.3"}
	name += {"revbyte32", "revbyte32.3"}
	name += {"revbyte64", "revbyte64.3"}
	name += {"reverse", "reverse.3"}
	name += {"riw16", "riw16.3"}
	name += {"riw32", "riw32.3"}
	name += {"riw64", "riw64.3"}
	name += {"riw8", "riw8.3"}
	name += {"riwsat16", "riwsat16.3"}
	name += {"riwsat32", "riwsat32.3"}
	name += {"riwsat64", "riwsat64.3"}
	name += {"riwsat8", "riwsat8.3"}
	name += {"roundf16", "roundf16.3"}
	name += {"roundf32", "roundf32.3"}
	name += {"roundf64", "roundf64.3"}
	name += {"roundfx", "roundfx.3"}
	name += {"s32tod", "s32tod.3"}
	name += {"s32tof", "s32tof.3"}
	name += {"s64tod", "s64tod.3"}
	name += {"s64tof", "s64tof.3"}
	name += {"sad16", "sad16.3"}
	name += {"sad8", "sad8.3"}
	name += {"sex", "sex.2", "sex.3"}
	name += {"sex16", "sex16.3"}
	name += {"sex32", "sex32.3"}
	name += {"sex64", "sex64.3"}
	name += {"sex8", "sex8.3"}
	name += {"sge", "sge.3"}
	name += {"sge16", "sge16.3"}
	name += {"sge32", "sge32.3"}
	name += {"sge64", "sge64.3"}
	name += {"sge8", "sge8.3"}
	name += {"sgt", "sgt.3"}
	name += {"sgt16", "sgt16.3"}
	name += {"sgt32", "sgt32.3"}
	name += {"sgt64", "sgt64.3"}
	name += {"sgt8", "sgt8.3"}
	name += {"shl", "shl.2", "shl.3"}
	name += {"shl128", "shl128.3"}
	name += {"shl16", "shl16.3"}
	name += {"shl2d", "shl2d.3"}
	name += {"shl32", "shl32.3"}
	name += {"shl64", "shl64.3"}
	name += {"shl8", "shl8.3"}
	name += {"shl_sats", "shl_sats.3"}
	name += {"shl_sats16", "shl_sats16.3"}
	name += {"shl_sats32", "shl_sats32.3"}
	name += {"shl_sats64", "shl_sats64.3"}
	name += {"shl_sats8", "shl_sats8.3"}
	name += {"shl_satu", "shl_satu.3"}
	name += {"shl_satu16", "shl_satu16.3"}
	name += {"shl_satu32", "shl_satu32.3"}
	name += {"shl_satu64", "shl_satu64.3"}
	name += {"shl_satu8", "shl_satu8.3"}
	name += {"shr", "shr.2", "shr.3"}
	name += {"shr128", "shr128.3"}
	name += {"shr16", "shr16.3"}
	name += {"shr2d", "shr2d.3"}
	name += {"shr32", "shr32.3"}
	name += {"shr64", "shr64.3"}
	name += {"shr8", "shr8.3"}
	name += {"shra", "shra.2", "shra.3"}
	name += {"shra128", "shra128.3"}
	name += {"shra16", "shra16.3"}
	name += {"shra2d", "shra2d.3"}
	name += {"shra32", "shra32.3"}
	name += {"shra64", "shra64.3"}
	name += {"shra8", "shra8.3"}
	name += {"sle", "sle.3"}
	name += {"sle16", "sle16.3"}
	name += {"sle32", "sle32.3"}
	name += {"sle64", "sle64.3"}
	name += {"sle8", "sle8.3"}
	name += {"slt", "slt.3"}
	name += {"slt16", "slt16.3"}
	name += {"slt32", "slt32.3"}
	name += {"slt64", "slt64.3"}
	name += {"slt8", "slt8.3"}
	name += {"spreadbc16", "spreadbc16.3"}
	name += {"spreadbc32", "spreadbc32.3"}
	name += {"spreadbc64", "spreadbc64.3"}
	name += {"spreadf16", "spreadf16.3"}
	name += {"spreadf32", "spreadf32.3"}
	name += {"spreadf64", "spreadf64.3"}
	name += {"spreads16", "spreads16.3"}
	name += {"spreads32", "spreads32.3"}
	name += {"spreads64", "spreads64.3"}
	name += {"spreadz16", "spreadz16.3"}
	name += {"spreadz32", "spreadz32.3"}
	name += {"spreadz64", "spreadz64.3"}
	name += {"sqd16", "sqd16.3"}
	name += {"sqd8", "sqd8.3"}
	name += {"ssd16", "ssd16.3"}
	name += {"ssd8", "ssd8.3"}
	name += {"st128", "st128.3"}
	name += {"st128c", "st128c.3"}
	name += {"st128hx", "st128hx.3"}
	name += {"st128hxc", "st128hxc.3"}
	name += {"st128x", "st128x.3"}
	name += {"st128xc", "st128xc.3"}
	name += {"st16", "st16.2", "st16.3", "st16.4", "st16.6"}
	name += {"st16c", "st16c.3"}
	name += {"st16h", "st16h.3"}
	name += {"st16hc", "st16hc.3"}
	name += {"st16hx", "st16hx.3"}
	name += {"st16hxc", "st16hxc.3"}
	name += {"st16x", "st16x.3"}
	name += {"st16xc", "st16xc.3"}
	name += {"st32", "st32.2", "st32.3", "st32.4", "st32.6"}
	name += {"st32c", "st32c.3"}
	name += {"st32h", "st32h.3"}
	name += {"st32hc", "st32hc.3"}
	name += {"st32hx", "st32hx.3"}
	name += {"st32hxc", "st32hxc.3"}
	name += {"st32x", "st32x.3"}
	name += {"st32xc", "st32xc.3"}
	name += {"st64", "st64.2", "st64.3", "st64.4", "st64.6"}
	name += {"st64c", "st64c.3"}
	name += {"st64hx", "st64hx.3"}
	name += {"st64hxc", "st64hxc.3"}
	name += {"st64x", "st64x.3"}
	name += {"st64xc", "st64xc.3"}
	name += {"st8", "st8.2", "st8.3", "st8.4", "st8.6"}
	name += {"st8c", "st8c.3"}
	name += {"st8h", "st8h.3"}
	name += {"st8hc", "st8hc.3"}
	name += {"sta", "sta.2", "sta.3", "sta.4", "sta.6"}
	name += {"sta2", "sta2.3"}
	name += {"sta2c", "sta2c.3"}
	name += {"sta2hx", "sta2hx.3"}
	name += {"sta2hxc", "sta2hxc.3"}
	name += {"sta2x", "sta2x.3"}
	name += {"sta2xc", "sta2xc.3"}
	name += {"stac", "stac.3"}
	name += {"stahx", "stahx.3"}
	name += {"stahxc", "stahxc.3"}
	name += {"stax", "stax.3"}
	name += {"staxc", "staxc.3"}
	name += {"stbit16", "stbit16.3"}
	name += {"stbit32", "stbit32.3"}
	name += {"stbit64", "stbit64.3"}
	name += {"stbit8", "stbit8.2", "stbit8.3", "stbit8.4", "stbit8.6"}
	name += {"std2", "std2.2", "std2.3", "std2.4", "std2.6"}
	name += {"sub", "sub.2", "sub.3", "sub.6"}
	name += {"sub16", "sub16.3"}
	name += {"sub32", "sub32.3"}
	name += {"sub64", "sub64.3"}
	name += {"sub8", "sub8.3"}
	name += {"sub_sats", "sub_sats.3"}
	name += {"sub_sats16", "sub_sats16.3"}
	name += {"sub_sats32", "sub_sats32.3"}
	name += {"sub_sats64", "sub_sats64.3"}
	name += {"sub_sats8", "sub_sats8.3"}
	name += {"sub_satu", "sub_satu.3"}
	name += {"sub_satu16", "sub_satu16.3"}
	name += {"sub_satu32", "sub_satu32.3"}
	name += {"sub_satu64", "sub_satu64.3"}
	name += {"sub_satu8", "sub_satu8.3"}
	name += {"subb", "subb.3"}
	name += {"subb16", "subb16.3"}
	name += {"subb32", "subb32.3"}
	name += {"subb64", "subb64.3"}
	name += {"subb8", "subb8.3"}
	name += {"subr", "subr.2", "subr.3"}
	name += {"subzb", "subzb.3"}
	name += {"subzb16", "subzb16.3"}
	name += {"subzb32", "subzb32.3"}
	name += {"subzb8", "subzb8.3"}
	name += {"sum16", "sum16.3"}
	name += {"sum16d", "sum16d.3"}
	name += {"sum16d2", "sum16d2.3"}
	name += {"sum32d", "sum32d.3"}
	name += {"sum32d2", "sum32d2.3"}
	name += {"sum8", "sum8.3"}
	name += {"sum8d", "sum8d.3"}
	name += {"sum8d2", "sum8d2.3"}
	name += {"svc", "svc.3"}
	name += {"test", "test.2", "test.3"}
	name += {"test16", "test16.3"}
	name += {"test32", "test32.3"}
	name += {"test64", "test64.3"}
	name += {"test8", "test8.3"}
	name += {"trace", "trace.3"}
	name += {"trap", "trap.2", "trap.3"}
	name += {"trapind", "trapind.1", "trapind.2"}
	name += {"trunc16", "trunc16.3"}
	name += {"trunc32", "trunc32.3"}
	name += {"trunc64", "trunc64.3"}
	name += {"truncsats16", "truncsats16.3"}
	name += {"truncsats32", "truncsats32.3"}
	name += {"truncsats64", "truncsats64.3"}
	name += {"truncsatu16", "truncsatu16.3"}
	name += {"truncsatu32", "truncsatu32.3"}
	name += {"truncsatu64", "truncsatu64.3"}
	name += {"u32tod", "u32tod.3"}
	name += {"u32tof", "u32tof.3"}
	name += {"u64tod", "u64tod.3"}
	name += {"u64tof", "u64tof.3"}
	name += {"uge", "uge.3"}
	name += {"uge16", "uge16.3"}
	name += {"uge32", "uge32.3"}
	name += {"uge64", "uge64.3"}
	name += {"uge8", "uge8.3"}
	name += {"ugt", "ugt.3"}
	name += {"ugt16", "ugt16.3"}
	name += {"ugt32", "ugt32.3"}
	name += {"ugt64", "ugt64.3"}
	name += {"ugt8", "ugt8.3"}
	name += {"ule", "ule.3"}
	name += {"ule16", "ule16.3"}
	name += {"ule32", "ule32.3"}
	name += {"ule64", "ule64.3"}
	name += {"ule8", "ule8.3"}
	name += {"ult", "ult.3"}
	name += {"ult16", "ult16.3"}
	name += {"ult32", "ult32.3"}
	name += {"ult64", "ult64.3"}
	name += {"ult8", "ult8.3"}
	name += {"user0", "user0.3"}
	name += {"user1", "user1.3"}
	name += {"user10", "user10.3"}
	name += {"user11", "user11.3"}
	name += {"user12", "user12.3"}
	name += {"user13", "user13.3"}
	name += {"user14", "user14.3"}
	name += {"user15", "user15.3"}
	name += {"user2", "user2.3"}
	name += {"user3", "user3.3"}
	name += {"user4", "user4.3"}
	name += {"user5", "user5.3"}
	name += {"user6", "user6.3"}
	name += {"user7", "user7.3"}
	name += {"user8", "user8.3"}
	name += {"user9", "user9.3"}
	name += {"version", "version.3"}
	name += {"xnor", "xnor.3"}
	name += {"xor", "xor.2", "xor.3"}
	name += {"zex", "zex.2", "zex.3"}
	name += {"zex16", "zex16.3"}
	name += {"zex32", "zex32.3"}
	name += {"zex64", "zex64.3"}
	name += {"zex8", "zex8.3"}

	name += {"pidoff", "uncached", "io", "remote_thread"}
	    
	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = {"//", ";"}
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }

    comment {
	# Because multiple pairs of comment delimiters can be defined,
	# use a index for each of them.
	1 { begin = "/*"; end = "*/" }
	# If color is not defined for comment, default color is used.
	# color = "#008000"
    }

    string {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "\""; end = "\"" }
	# If color is not defined for string, default color is used.
	# color = "#008000"
    }

    character {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "\'"; end = "\'" }
	# If color is not defined for character, default color is used.
	# color = "#008000"
    }

    integer {
	# Support hex integer?
	hex = true
	# Case-sensitive for integer suffix? Default is true.
	# case_sensitive = true
	# decimal_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# hex_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    float {
	# Support scientific float?
	# scientific = true
	# Case-sensitive for float suffix? Default is true.
	# case_sensitive = false
	# suffix = {"f", "l", "fl", "fl"}
	# If color is not defined for float, default color is used.
	# color = "#008000"
    }

    customized {
	
	    
	# pattern = {"gen_*"}
	# More customized stuff.
	# If auto-completion is not explicitly specified, it is true
	# by default
	# autocomplete = false
	# If color is not defined for customized items, default color is used.
	# color = "#0080a0"
    }

    autocomplete {
	# "match" is used to defined match algorithm, it has 
	# the following values:
	#	"best" - default value
	#	"first"
	# As an example, if there are 3 strings for auto-completion:
	# 	"main", "mail" and "misc"
	# When you type in "m", "best match" will not auto-complete it,
	# because the 3 strings do not have a common prefix beginning with
	# "m", but "first match" will auto-complete it into "main".
	# When you type in "ma", "best match" will auto-complete it
	# into "mai", but "first match" will still auto-complete it
	# into "main".
	match = "best"
	
	# By default, you can use the following key-strokes in MULTI Editor
	# to manually find an auto-completed string for the string ending
	# at the caret:
	# 1. "ctrl+]": navigate to the next matched string.
	# 2. "ctrl+[": navigate to the previous matched string.
	# You can continuously press the keys to scan the matched
	# string list until you find the one you want.
	# 3. "ctrl+/": launch a popup menu to show a list of matched
	# strings(up to a certain number configured by the following option).
	# Then you can pick what you want form the popup menu.

	# Max number of strings to match when user types "ctrl+/".
	# The default value is 10. Use the following statement to change it.
	# max_match = 15

	# Minimum length for a string to which auto-completion can be applied.
	# The default value is 1. Use the following statement to change it.
	min_string_length = 3

	# "autocomplete" let you can turn on/off the whole
	# auto-completion mechanism. The default value is true.
	# When the setting here is true, you can still turn on/off
	# about if using keywords, preprocessors or customized items
	# not containing wild card as the auto-completion source.
	# autocomplete = false

	# Define extra auto-completion items in addition to
	# 1. keywords
	# 2. preprocessors
	# 3. customized items not containing wild card

	# Auto-complete strings
	# name = {"main"}
	# name += {"strcasecmp"}
	# More stuff from library for auto-completion
	
	# More stuff from GHS-library for auto-completion
    }
}
