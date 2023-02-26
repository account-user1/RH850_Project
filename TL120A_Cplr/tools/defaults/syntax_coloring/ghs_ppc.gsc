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
	name = "GHS-PPC"
	description = "PPC Assembly Language"
	# File extensions for the language
	extension = {"ppc"}

	# The following are some other information about the language

	# Is the language case-sensitive? If no explicit specification
	# for it, the default value is true.
	case_sensitive = true

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
	name += {"add", "addo"}
	name += {"addc", "addco"}
	name += {"adde", "addeo"}
	name += {"addi" }
	name +=   {"li", "la", "subi"}
	name += {"addic"}
	name +=   {"subic"}
	name += {"addis"}
	name +=   {"lis", "subis"}
	name += {"addme", "addmeo"}
	name += {"addze", "addzeo"}
	name += {"and"  }
	name += {"andc" }
	name += {"andi" }
	name += {"andis"}
	name += {"b", "ba", "bl", "bla"}
	name += {"bc", "bca", "bcl", "bcla"}	
	name +=   {"bt",   "bta",   "btl",   "btla"}
	name +=   {"bf",   "bfa",   "bfl",   "bfla"}
	name +=   {"bdnz", "bdnza", "bdnzl", "bdnzla"}
	name +=   {"bdnzt","bdnzta","bdnztl","bdnztla"}
	name +=   {"bdnzf","bdnzfa","bdnzfl","bdnzfla"}
	name +=   {"bdz",  "bdza",  "bdzl",  "bdzla"}
	name +=   {"bdzt", "bdzta", "bdztl", "bdztla"}
	name +=   {"bdzf", "bdzfa", "bdzfl", "bdzfla"}
	name +=   {"blt",  "blta",  "bltl",  "bltla"}
	name +=   {"ble",  "blea",  "blel",  "blela"}
	name +=   {"beq",  "beqa",  "beql",  "beqla"}
	name +=   {"bge",  "bgea",  "bgel",  "bgela"}
	name +=   {"bgt",  "bgta",  "bgtl",  "bgtla"}
	name +=   {"bnl",  "bnla",  "bnll",  "bnlla"}
	name +=   {"bne",  "bnea",  "bnel",  "bnela"}
	name +=   {"bng",  "bnga",  "bngl",  "bngla"}
	name +=   {"bso",  "bsoa",  "bsol",  "bsola"}
	name +=   {"bns",  "bnsa",  "bnsl",  "bnsla"}
	name +=   {"bun",  "buna",  "bunl",  "bunla"}
	name +=   {"bnu",  "bnua",  "bnul",  "bnula"}
	name += {"bcctr", "bcctrl"}
	name +=   {"bctr",    "bctrl"}
	name +=   {"btctr",   "btctrl"}
	name +=   {"bfctr",   "bfctrl"}
	name +=   {"bltctr",  "bltctrl"}
	name +=   {"blectr",  "blectrl"}
	name +=   {"beqctr",  "beqctrl"}
	name +=   {"bgectr",  "bgectrl"}
	name +=   {"bgtctr",  "bgtctrl"}
	name +=   {"bnlctr",  "bnlctrl"}
	name +=   {"bnectr",  "bnectrl"}
	name +=   {"bngctr",  "bngctrl"}
	name +=   {"bsoctr",  "bsoctrl"}
	name +=   {"bnsctr",  "bnsctrl"}
	name +=   {"bunctr",  "bunctrl"}
	name +=   {"bnuctr",  "bnuctrl"}
	name += {"bclr", "bclrl"}
	name +=   {"blr",     "blrl"}
	name +=   {"btlr",    "btlrl"}
	name +=   {"bflr",    "bflrl"}
	name +=   {"bdnzlr",  "bdnzlrl"}
	name +=   {"bdnztlr", "bdnztlrl"}
	name +=   {"bdnzflr", "bdnzflrl"}
	name +=   {"bdzlr",   "bdzlrl"}
	name +=   {"bdztlr",  "bdztlrl"}
	name +=   {"bdzflr",  "bdzflrl"}
	name +=   {"bltlr",   "bltlrl"}
	name +=   {"blelr",   "blelrl"}
	name +=   {"beqlr",   "beqlrl"}
	name +=   {"bgelr",   "bgelrl"}
	name +=   {"bgtlr",   "bgtlrl"}
	name +=   {"bnllr",   "bnllrl"}
	name +=   {"bnelr",   "bnelrl"}
	name +=   {"bnglr",   "bnglrl"}
	name +=   {"bsolr",   "bsolrl"}
	name +=   {"bnslr",   "bnslrl"}
	name +=   {"bunlr",   "bunlrl"}
	name +=   {"bnulr",   "bnulrl"}
	name += {"cmp"  }
	name +=   {"cmpd",   "cmpw"}
	name += {"cmpi" }
	name +=   {"cmpdi",  "cmpwi"}
	name += {"cmpl" }
	name +=   {"cmpld",  "cmplw"}
	name += {"cmpli"}
	name +=   {"cmpldi", "cmplwi"}
	name += {"cntlzd"}
	name += {"cntlzw"}
	name += {"crand"}
	name += {"crandc"}
	name += {"creqv"}
	name +=   {"crset"}
	name += {"crnand"}
	name += {"crnor"}
	name +=   {"crnot"}
	name += {"cror" }
	name +=   {"crmove"}
	name += {"crorc"}
	name += {"crxor"}
	name +=   {"crclr"}
	name += {"dcbf" }
	name += {"dcbi" }
	name += {"dcbst"}
	name += {"dcbt" }
	name += {"dcbtst"}
	name += {"dcbz" }
	name += {"divd",  "divdo"}
	name += {"divdu", "divduo"}
	name += {"divw",  "divwo"}
	name += {"divwu", "divwuo"}
	name += {"dss"  }
	name += {"dst"  }
	name += {"dstst"}
	name += {"eciwx"}
	name += {"ecowx"}
	name += {"eieio"}
	name += {"eqv"  }
	name += {"extsb"}
	name += {"extsh"}
	name += {"extsw"}
	name += {"fabs" }
	name += {"fadd" }
	name += {"fadds"}
	name += {"fcfid"}
	name += {"fcmpo"}
	name += {"fcmpu"}
	name += {"fctid"}
	name += {"fctidz"}
	name += {"fctiw"}
	name += {"fctiwz"}
	name += {"fdiv" }
	name += {"fdivs"}
	name += {"fmadd"}
	name += {"fmadds"}
	name += {"fmr"  }
	name += {"fmsub"}
	name += {"fmsubs"}
	name += {"fmul" }
	name += {"fmuls"}
	name += {"fnabs"}
	name += {"fneg" }
	name += {"fnmadd"}
	name += {"fnmadds"}
	name += {"fnmsub"}
	name += {"fnmsubs"}
	name += {"fres" }
	name += {"frsp" }
	name += {"frsqrte"}
	name += {"fsel" }
	name += {"fsqrt"}
	name += {"fsqrts"}
	name += {"fsub" }
	name += {"fsubs"}
	name += {"icbi" }
	name += {"isync"}
	name += {"lbz"  }
	name += {"lbzu" }
	name += {"lbzux"}
	name += {"lbzx" }
	name += {"ld"   }
	name += {"ldarx"}
	name += {"ldu"  }
	name += {"ldux" }
	name += {"ldx"  }
	name += {"lfd"  }
	name += {"lfdu" }
	name += {"lfdux"}
	name += {"lfdx" }
	name += {"lfs"  }
	name += {"lfsu" }
	name += {"lfsux"}
	name += {"lfsx" }
	name += {"lha"  }
	name += {"lhau" }
	name += {"lhaux"}
	name += {"lhax" }
	name += {"lhbrx"}
	name += {"lhz"  }
	name += {"lhzu" }
	name += {"lhzux"}
	name += {"lhzx" }
	name += {"lmw"  }
	name += {"lswi" }
	name += {"lswx" }
	name += {"lvebx"}
	name += {"lvehx"}
	name += {"lvewx"}
	name += {"lvsl" }
	name += {"lvsr" }
	name += {"lvx"  }
	name += {"lvxl" }
	name += {"lwa"  }
	name += {"lwarx"}
	name += {"lwaux"}
	name += {"lwax" }
	name += {"lwbrx"}
	name += {"lwz"  }
	name += {"lwzu" }
	name += {"lwzux"}
	name += {"lwzx" }
	name += {"mcrf" }
	name += {"mcrfs"}
	name += {"mcrxr"}
	name += {"mfcr" }
	name += {"mffs" }
	name += {"mfmsr"}
	name += {"mfspr"}
	name +=   {"mfxer", "mflr", "mfctr"}
	name += {"mfsr"}
	name += {"mfsrin"}
	name += {"mftb" }
	name +=   {"mftbu"}
	name += {"mfvscr"}
	name += {"mtcrf"}
	name +=   {"mtcr"}
	name += {"mtfsb0"}
	name += {"mtfsb1"}
	name += {"mtfsf"}
	name += {"mtfsfi"}
	name += {"mtmsr"}
	name += {"mtspr"}
	name +=   {"mtxer", "mtlr", "mtctr"}
	name += {"mtsr" }
	name += {"mtsrin"}
	name += {"mtvscr"}
	name += {"mulchw"}
	name += {"mulchwu"}
	name += {"mulhd"}
	name += {"mulhdu"}
	name += {"mulhhw"}
	name += {"mulhhwu"}
	name += {"mulhw"}
	name += {"mulhwu"}
	name += {"mulld"}
	name += {"mullhw"}
	name += {"mullhwu"}
	name += {"mulli"}
	name += {"mullw", "mullwo"}
	name += {"nand" }
	name += {"neg", "nego"}
	name += {"nor"  }
	name +=   {"not"}
	name += {"or"   }
	name +=   {"mr"}
	name += {"orc"  }
	name += {"ori"  }
	name += {"oris" }
	name += {"rfi"  }
	name += {"rldcl"}
	name += {"rldcr"}
	name += {"rldic"}
	name += {"rldicl"}
	name += {"rldicr"}
	name += {"rldimi"}
	name +=   {"insrdi"}
	name += {"rlwimi"}
	name +=   {"inslwi", "insrwi"}
	name += {"rlwinm"}
	name +=   {"extlwi", "extrwi"}
	name +=   {"rotlwi", "rotrwi"}
	name +=   {"slwi",   "srwi"}
	name +=   {"clrlwi", "clrrwi"}
	name +=   {"clrlslwi"}
	name += {"rlwnm"  }
	name +=   {"rotlw"}
	name += {"sc"   }
	name += {"slbia"}
	name += {"slbie"}
	name += {"sld"  }
	name += {"slw"  }
	name += {"srad" }
	name += {"sradi"}
	name += {"sraw" }
	name += {"srawi"}
	name += {"srd"  }
	name += {"srw"  }
	name += {"stb"  }
	name += {"stbu" }
	name += {"stbux"}
	name += {"stbx" }
	name += {"stdux"}
	name += {"std"  }
	name += {"stdcx"}
	name += {"stdu" }
	name += {"stdux"}
	name += {"stdx" }
	name += {"stfd" }
	name += {"stfdu"}
	name += {"stfdux"}
	name += {"stfdx"}
	name += {"stfiwx"}
	name += {"stfs"}
	name += {"stfsu"}
	name += {"stfsux"}
	name += {"stfsx"}
	name += {"sth"  }
	name += {"sthbrx"}
	name += {"sthu" }
	name += {"sthux"}
	name += {"sthx" }
	name += {"stmw" }
	name += {"stswi"}
	name += {"stswx"}
	name += {"stw"  }
	name += {"stvebx"}
	name += {"stvehx"}
	name += {"stvewx"}
	name += {"stvx" }
	name += {"stvxl"}
	name += {"stwbrx"}
	name += {"stwcx"}
	name += {"stwu" }
	name += {"stwux"}
	name += {"stwx" }
	name += {"subf",  "subfo" }
	name +=   {"sub"}
	name += {"subfc", "subfco"}
	name +=   {"subc"}
	name += {"subfe", "subfeo"}
	name += {"subfic"}
	name += {"subfme", "subfmeo"}
	name += {"subfze", "subfzeo"}
	name += {"sync"}
	name += {"td"}
	name += {"tdi"}
	name += {"tlbia"}
	name += {"tlbie"}
	name += {"tlbsync"}
	name += {"tw"}
	name += {"twi"}
	name += {"vaddcuw"}
	name += {"vaddfp"}
	name += {"vaddsbs"}
	name += {"vaddshs"}
	name += {"vaddsws"}
	name += {"vaddubm"}
	name += {"vaddubs"}
	name += {"vadduhm"}
	name += {"vadduhs"}
	name += {"vadduwm"}
	name += {"vadduws"}
	name += {"vand"}
	name += {"vandc"}
	name += {"vavgsb"}
	name += {"vavgsh"}
	name += {"vavgsw"}
	name += {"vavgub"}
	name += {"vavguh"}
	name += {"vavguw"}
	name += {"vcfsx"}
	name += {"vcfux"}
	name += {"vcmpeqfp"}
	name += {"vcmpequb"}
	name += {"vcmpequh"}
	name += {"vcmpequw"}
	name += {"vcmpgefp"}
	name += {"vcmpgtfp"}
	name += {"vcmpgtsb"}
	name += {"vcmpgtsh"}
	name += {"vcmpgtsw"}
	name += {"vcmpgtub"}
	name += {"vcmpgtuh"}
	name += {"vcmpgtuw"}
	name += {"vctsxs"}
	name += {"vctuxs"}
	name += {"vexptefp"}
	name += {"vlogefp"}
	name += {"vmaddfp"}
	name += {"vmaxfp"}
	name += {"vmaxsb"}
	name += {"vmaxsh"}
	name += {"vmaxsw"}
	name += {"vmaxub"}
	name += {"vmaxuh"}
	name += {"vmaxuw"}
	name += {"vmhaddshs"}
	name += {"vmhraddshs"}
	name += {"vminfp"}
	name += {"vminsb"}
	name += {"vminsh"}
	name += {"vminsw"}
	name += {"vminub"}
	name += {"vminuh"}
	name += {"vminuw"}
	name += {"vmladduhm"}
	name += {"vmr"}
	name += {"vmrghb"}
	name += {"vmrghh"}
	name += {"vmrghw"}
	name += {"vmrglb"}
	name += {"vmrglh"}
	name += {"vmrglw"}
	name += {"vmsummbm"}
	name += {"vmsumshm"}
	name += {"vmsumshs"}
	name += {"vmsumubm"}
	name += {"vmsumuhm"}
	name += {"vmsumuhs"}
	name += {"vmulesb"}
	name += {"vmulesh"}
	name += {"vmuleub"}
	name += {"vmuleuh"}
	name += {"vmulosb"}
	name += {"vmulosh"}
	name += {"vmuloub"}
	name += {"vmulouh"}
	name += {"vnor"}
	name += {"vor"}
	name += {"vperm"}
	name += {"vpkpx"}
	name += {"vpkshss"}
	name += {"vpkshus"}
	name += {"vpkswss"}
	name += {"vpkswus"}
	name += {"vpkuhum"}
	name += {"vpkuhus"}
	name += {"vpkuwum"}
	name += {"vpkuwus"}
	name += {"vrefp"}
	name += {"vrfim"}
	name += {"vrfin"}
	name += {"vrfip"}
	name += {"vrfiz"}
	name += {"vrlb"}
	name += {"vrlh"}
	name += {"vrlw"}
	name += {"vrsqrtefp"}
	name += {"vsel"}
	name += {"vsl"}
	name += {"vslb"}
	name += {"vsldoi"}
	name += {"vslh"}
	name += {"vslo"}
	name += {"vslw"}
	name += {"vspltb"}
	name += {"vsplth"}
	name += {"vspltisb"}
	name += {"vspltish"}
	name += {"vspltisw"}
	name += {"vspltw"}
	name += {"vsr"}
	name += {"vsrab"}
	name += {"vsrah"}
	name += {"vsraw"}
	name += {"vsrb"}
	name += {"vsrh"}
	name += {"vsro"}
	name += {"vsrw"}
	name += {"vsubcuw","vsubfp","vsubsbs", "vsubshs", "vsubsws"}
	name += {"vsububm"}
	name += {"vsububs"}
	name += {"vsubuhm"}
	name += {"vsubuhs"}
	name += {"vsubuwm"}
	name += {"vsubuws"}
	name += {"vsum2sws"}
	name += {"vsum4sbs"}
	name += {"vsum4shs"}
	name += {"vsum4ubs"}
	name += {"vsumsws"}
	name += {"vupkhpx"}
	name += {"vupkhsb"}
	name += {"vupkhsh"}
	name += {"vupklpx"}
	name += {"vupklsb"}
	name += {"vupklsh"}
	name += {"vxor"}
	name += {"xor"}
	name += {"xori"}
	name += {"xoris"}
	
	name += {"tlbivax"}
	name += {"tlbre"}
	name += {"tlbrehi"}
	name += {"tlbrelo"}
	name += {"tlbsx"}
	name += {"tlbwe"}
	name += {"tlbwehi"}
	name += {"tlbwelo"}
	name += {"rfci"}
	name += {"wrtee"}
	name += {"wrteei"}
	name += {"dcba"}
	name += {"icbt"}
	name += {"dcbt"}
	name += {"dcbtst"}
	name += {"rfdi"}
	name += {"evaddw"}
	name += {"evaddiw"}
	name += {"evsubfw"}
	name += {"evsubifw"}
	name += {"evabs"}
	name += {"evneg"}
	name += {"evextsb"}
	name += {"evextsh"}
	name += {"evrndw"}
	name += {"evcntlzw"}
	name += {"evcntlsw"}
	name += {"brinc"}
	name += {"evand"}
	name += {"evandc"}
	name += {"evmr"}
	name += {"evor"}
	name += {"evorc"}
	name += {"evxor"}
	name += {"eveqv"}
	name += {"evnand"}
	name += {"evnor"}
	name += {"evrlw"}
	name += {"evrlwi"}
	name += {"evslw"}
	name += {"evslwi"}
	name += {"evsrws"}
	name += {"evsrwu"}
	name += {"evsrwis"}
	name += {"evsrwiu"}
	name += {"evsplati"}
	name += {"evsplatfi"}
	name += {"evmergehi"}
	name += {"evmergelo"}
	name += {"evmergehilo"}
	name += {"evmergelohi"}
	name += {"evcmpgts"}
	name += {"evcmpgtu"}
	name += {"evcmplts"}
	name += {"evcmpltu"}
	name += {"evcmpeq"}
	name += {"evsel"}
	name += {"evldd"}
	name += {"evlddx"}
	name += {"evldw"}
	name += {"evldwx"}
	name += {"evldh"}
	name += {"evldhx"}
	name += {"evlwhe"}
	name += {"evlwhex"}
	name += {"evlwhou"}
	name += {"evlwhoux"}
	name += {"evlwhos"}
	name += {"evlwhosx"}
	name += {"evlwwsplat"}
	name += {"evlwwsplatx"}
	name += {"evlwhsplat"}
	name += {"evlwhsplatx"}
	name += {"evlhhesplat"}
	name += {"evlhhesplatx"}
	name += {"evlhhousplat"}
	name += {"evlhhousplatx"}
	name += {"evlhhossplat"}
	name += {"evlhhossplatx"}
	name += {"evstdd"}
	name += {"evstddx"}
	name += {"evstdw"}
	name += {"evstdwx"}
	name += {"evstdh"}
	name += {"evstdhx"}
	name += {"evstwwe"}
	name += {"evstwwex"}
	name += {"evstwwo"}
	name += {"evstwwox"}
	name += {"evstwhe"}
	name += {"evstwhex"}
	name += {"evstwho"}
	name += {"evstwhox"}
	name += {"evfsabs"}
	name += {"evfsnabs"}
	name += {"evfsneg"}
	name += {"evfsadd"}
	name += {"evfssub"}
	name += {"evfsmul"}
	name += {"evfsdiv"}
	name += {"evfscmpgt"}
	name += {"evfscmplt"}
	name += {"evfscmpeq"}
	name += {"evfststgt"}
	name += {"evfststlt"}
	name += {"evfststeq"}
	name += {"evfscfui"}
	name += {"evfscfsi"}
	name += {"evfscfuf"}
	name += {"evfscfsf"}
	name += {"evfsctui"}
	name += {"evfsctsi"}
	name += {"evfsctuiz"}
	name += {"evfsctsiz"}
	name += {"evfsctuf"}
	name += {"evfsctsf"}
	name += {"evmhossf"}
	name += {"evmhossfa"}
	name += {"evmhosmf"}
	name += {"evmhosmfa"}
	name += {"evmhosmi"}
	name += {"evmhosmia"}
	name += {"evmhoumi"}
	name += {"evmhoumia"}
	name += {"evmhessf"}
	name += {"evmhessfa"}
	name += {"evmhesmf"}
	name += {"evmhesmfa"}
	name += {"evmhesmi"}
	name += {"evmhesmia"}
	name += {"evmheumi"}
	name += {"evmheumia"}
	name += {"evmhossfaaw"}
	name += {"evmhossiaaw"}
	name += {"evmhosmfaaw"}
	name += {"evmhosmiaaw"}
	name += {"evmhousiaaw"}
	name += {"evmhoumiaaw"}
	name += {"evmhessfaaw"}
	name += {"evmhessiaaw"}
	name += {"evmhesmfaaw"}
	name += {"evmhesmiaaw"}
	name += {"evmheusiaaw"}
	name += {"evmheumiaaw"}
	name += {"evmhossfanw"}
	name += {"evmhossianw"}
	name += {"evmhosmfanw"}
	name += {"evmhosmianw"}
	name += {"evmhousianw"}
	name += {"evmhoumianw"}
	name += {"evmhessfanw"}
	name += {"evmhessianw"}
	name += {"evmhesmfanw"}
	name += {"evmhesmianw"}
	name += {"evmheusianw"}
	name += {"evmheumianw"}
	name += {"evmhogsmfaa"}
	name += {"evmhogsmiaa"}
	name += {"evmhogumiaa"}
	name += {"evmhegsmfaa"}
	name += {"evmhegsmiaa"}
	name += {"evmhegumiaa"}
	name += {"evmhogsmfan"}
	name += {"evmhogsmian"}
	name += {"evmhogumian"}
	name += {"evmhegsmfan"}
	name += {"evmhegsmian"}
	name += {"evmhegumian"}
	name += {"evmwhssf"}
	name += {"evmwhssfa"}
	name += {"evmwhsmf"}
	name += {"evmwhsmfa"}
	name += {"evmwhsmi"}
	name += {"evmwhsmia"}
	name += {"evmwhumi"}
	name += {"evmwhumia"}
	name += {"evmwlumi"}
	name += {"evmwlumia"}
	name += {"evmwlssiaaw"}
	name += {"evmwlsmiaaw"}
	name += {"evmwlusiaaw"}
	name += {"evmwlumiaaw"}
	name += {"evmwlssianw"}
	name += {"evmwlsmianw"}
	name += {"evmwlusianw"}
	name += {"evmwlumianw"}
	name += {"evmwhssfaaw"}
	name += {"evmwhssiaaw"}
	name += {"evmwhsmfaaw"}
	name += {"evmwhsmiaaw"}
	name += {"evmwhusiaaw"}
	name += {"evmwhumiaaw"}
	name += {"evmwhssfanw"}
	name += {"evmwhssianw"}
	name += {"evmwhsmfanw"}
	name += {"evmwhsmianw"}
	name += {"evmwhusianw"}
	name += {"evmwhumianw"}
	name += {"evmwhgssfaa"}
	name += {"evmwhgsmfaa"}
	name += {"evmwhgsmiaa"}
	name += {"evmwhgumiaa"}
	name += {"evmwhgssfan"}
	name += {"evmwhgsmfan"}
	name += {"evmwhgsmian"}
	name += {"evmwhgumian"}
	name += {"evmwssf"}
	name += {"evmwssfa"}
	name += {"evmwsmf"}
	name += {"evmwsmfa"}
	name += {"evmwsmi"}
	name += {"evmwsmia"}
	name += {"evmwumi"}
	name += {"evmwumia"}
	name += {"evmwssfaa"}
	name += {"evmwsmfaa"}
	name += {"evmwsmiaa"}
	name += {"evmwumiaa"}
	name += {"evmwssfan"}
	name += {"evmwsmfan"}
	name += {"evmwsmian"}
	name += {"evmwumian"}
	name += {"evaddssiaaw"}
	name += {"evaddsmiaaw"}
	name += {"evaddusiaaw"}
	name += {"evaddumiaaw"}
	name += {"evsubfssiaaw"}
	name += {"evsubfsmiaaw"}
	name += {"evsubfusiaaw"}
	name += {"evsubfumiaaw"}
	name += {"evmra"}
	name += {"evdivws"}
	name += {"evdivwu"}
	name += {"dcblc"}
	name += {"dcbtls"}
	name += {"dcbtstls"}
	name += {"icblc"}
	name += {"icbtls"}
	name += {"dcblce"}
	name += {"dcbtlse"}
	name += {"dcbtstlse"}
	name += {"icblce"}
	name += {"icbtlse"}
	name += {"bblels"}
	name += {"bbelr"}
	name += {"efsabs"}
	name += {"efsnabs"}
	name += {"efsneg"}
	name += {"efsadd"}
	name += {"efssub"}
	name += {"efsmul"}
	name += {"efsdiv"}
	name += {"efscmpgt"}
	name += {"efscmplt"}
	name += {"efscmpeq"}
	name += {"efststgt"}
	name += {"efststlt"}
	name += {"efststeq"}
	name += {"efscfui"}
	name += {"efscfsi"}
	name += {"efscfuf"}
	name += {"efscfsf"}
	name += {"efsctui"}
	name += {"efsctsi"}
	name += {"efsctuiz"}
	name += {"efsctsiz"}
	name += {"efsctuf"}
	name += {"efsctsf"}
	name += {"rfmci"}
	name += {"mfpmr"}
	name += {"mtpmr"}
	name += {"mtdec"}
	name += {"mfdec"}
	
	name += {"dccci"}
	name += {"icbt"}
	name += {"iccci"}
	name += {"mfdcr"}
	name += {"mtdcr"}
	name += {"rfci"}
	name += {"tlbia"}
	name += {"dcba"}
	name += {"dcread"}
	name += {"icread"}
	name += {"macchw"}
	name += {"macchwo"}
	name += {"macchws"}
	name += {"macchwso"}
	name += {"macchwsu"}
	name += {"macchwsuo"}
	name += {"macchwu"}
	name += {"macchwuo"}
	name += {"machhw"}
	name += {"machhwo"}
	name += {"machhws"}
	name += {"machhwso"}
	name += {"machhwsu"}
	name += {"machhwsuo"}
	name += {"machhwu"}
	name += {"machhwuo"}
	name += {"maclhw"}
	name += {"maclhwo"}
	name += {"maclhws"}
	name += {"maclhwso"}
	name += {"maclhwsu"}
	name += {"maclhwsuo"}
	name += {"maclhwu"}
	name += {"maclhwuo"}
	name += {"mulchw"}
	name += {"mulchwu"}
	name += {"mulhhw"}
	name += {"mulhhwu"}
	name += {"mullhw"}
	name += {"mullhwu"}
	name += {"nmacchw"}
	name += {"nmacchwo"}
	name += {"nmacchws"}
	name += {"nmacchwso"}
	name += {"nmachhw"}
	name += {"nmachhwo"}
	name += {"nmachhws"}
	name += {"nmachhwso"}
	name += {"nmaclhw"}
	name += {"nmaclhwo"}
	name += {"nmaclhws"}
	name += {"nmaclhwso"}

	# VLE instructions
	name += {"e_nop"}
	name += {"se_nop"}	
	name += {"se_illegal"}	
	name += {"se_isync"}	
	name += {"se_sc"}	
	name += {"se_blr"}	
	name += {"se_blrl"}	
	name += {"se_bctr"}	
	name += {"se_bctrl"}	
	name += {"se_rfi"}	
	name += {"se_rfci"}	
	name += {"se_rfdi"}	
	name += {"se_not"}	
	name += {"se_neg"}	
	name += {"se_mflr"}	
	name += {"se_mtlr"}	
	name += {"se_mfctr"}	
	name += {"se_mtctr"}	
	name += {"se_extzb"}	
	name += {"se_extsb"}	
	name += {"se_extzh"}	
	name += {"se_extsh"}	
	name += {"se_mr"}	
	name += {"se_mtar"}	
	name += {"se_mfar"}	
	name += {"se_add"}	
	name += {"se_mullw"}	
	name += {"se_sub"}	
	name += {"se_subf"}	
	name += {"se_cmp"}	
	name += {"se_cmpl"}	
	name += {"se_cmph"}	
	name += {"se_cmphl"}	
	name += {"se_addi"}	
	name += {"se_cmpli"}	
	name += {"se_subi"}	
	name += {"se_subi."}	
	name += {"se_cmpi"}	
	name += {"se_bmaski"}	
	name += {"se_andi"}	
	name += {"se_srw"}	
	name += {"se_sraw"}	
	name += {"se_slw"}	
	name += {"se_or"}	
	name += {"se_andc"}	
	name += {"se_and"}	
	name += {"se_and."}	
	name += {"se_li"}	
	name += {"se_bclri"}	
	name += {"se_bgeni"}	
	name += {"se_bseti"}	
	name += {"se_btsti"}	
	name += {"se_srwi"}	
	name += {"se_srawi"}	
	name += {"se_slwi"}	
	name += {"se_lbz"}	
	name += {"se_stb"}	
	name += {"se_lhz"}	
	name += {"se_sth"}	
	name += {"se_lwz"}	
	name += {"se_stw"}	
	name += {"se_bc"}	
	name += {"se_bnl"}	
	name += {"se_bge"}	
	name += {"se_bng"}	
	name += {"se_ble"}	
	name += {"se_bne"}	
	name += {"se_bns"}	
	name += {"se_blt"}	
	name += {"se_bgt"}	
	name += {"se_beq"}	
	name += {"se_bso"}	
	name += {"se_bnu"}	
	name += {"se_bun"}	
	name += {"se_bt"}	
	name += {"se_bf"}	
	name += {"se_b"}	
	name += {"se_bl"}	
	name += {"e_lbzu"}	
	name += {"e_lhzu"}	
	name += {"e_lwzu"}	
	name += {"e_lhau"}	
	name += {"e_stbu"}	
	name += {"e_sthu"}	
	name += {"e_stwu"}	
	name += {"e_lmw"}	
	name += {"e_stmw"}	
	name += {"e_addi"}	
	name += {"e_addi."}	
	name += {"e_addic"}	
	name += {"e_addic."}	
	name += {"e_subi"}	
	name += {"e_subi."}	
	name += {"e_subic"}	
	name += {"e_subic."}	
	name += {"e_mulli"}	
	name += {"e_cmpi"}	
	name += {"e_cmpli"}	
	name += {"e_cmpwi"}	
	name += {"e_cmplwi"}	
	name += {"e_subfic"}	
	name += {"e_subfic."}	
	name += {"e_andi"}	
	name += {"e_andi."}	
	name += {"e_ori"}	
	name += {"e_ori."}	
	name += {"e_xori"}	
	name += {"e_xori."}	
	name += {"e_add16i"}	
	name += {"e_sub16i"}	
	name += {"e_lbz"}	
	name += {"e_stb"}	
	name += {"e_lha"}	
	name += {"e_lwz"}	
	name += {"e_stw"}	
	name += {"e_lhz"}	
	name += {"e_sth"}	
	name += {"e_li"}	
	name += {"e_add2i."}	
	name += {"e_add2is"}	
	name += {"e_sub2i."}	
	name += {"e_sub2is"}	
	name += {"e_cmp16i"}	
	name += {"e_mull2i"}	
	name += {"e_cmpl16i"}	
	name += {"e_cmph16i"}	
	name += {"e_cmphl16i"}	
	name += {"e_cmph"}	
	name += {"e_cmphl"} 	
	name += {"e_or2i"}	
	name += {"e_and2i."}	
	name += {"e_or2is"}	
	name += {"e_lis"}	
	name += {"e_and2is."}	
	name += {"e_rlwimi"}	
	name += {"e_rlwinm"}	
	name += {"e_b"}	
	name += {"e_bl"}	
	name += {"e_bc"}	
	name += {"e_bt"}	
	name += {"e_bf"}	
	name += {"e_bdnz"}	
	name += {"e_bdz"}	
	name += {"e_blt"}	
	name += {"e_ble"}	
	name += {"e_beq"}	
	name += {"e_bge"}	
	name += {"e_bgt"}	
	name += {"e_bnl"}	
	name += {"e_bne"}	
	name += {"e_bng"}	
	name += {"e_bso"}	
	name += {"e_bns"}	
	name += {"e_bun"}	
	name += {"e_bnu"}	
	name += {"e_bcl"}	
	name += {"e_btl"}	
	name += {"e_bfl"}	
	name += {"e_bdnzl"}	
	name += {"e_bdzl"}	
	name += {"e_bltl"}	
	name += {"e_blel"}	
	name += {"e_beql"}	
	name += {"e_bgel"}	
	name += {"e_bgtl"}	
	name += {"e_bnll"}	
	name += {"e_bnel"}	
	name += {"e_bngl"}	
	name += {"e_bsol"}	
	name += {"e_bnsl"}	
	name += {"e_bunl"}	
	name += {"e_bnul"}	
	name += {"e_mcrf"}	
	name += {"e_crnor"}	
	name += {"e_slwi"}	
	name += {"e_slwi."}	
	name += {"e_crandc"}	
	name += {"e_crxor"}	
	name += {"e_crnand"}	
	name += {"e_crand"}	
	name += {"e_rlw"}	
	name += {"e_rlw."}	
	name += {"e_creqv"}	
	name += {"e_rlwi"}	
	name += {"e_rlwi."}	
	name += {"e_crorc"}	
	name += {"e_cror"}	
	name += {"e_srwi"}	
	name += {"e_srwi."}	
	name += {"e_extlwi"}	
	name += {"e_extrwi"}	
	name += {"e_inslwi"}	
	name += {"e_insrwi"}	
	name += {"e_rotlwi"}	
	name += {"e_rotrwi"}	
	name += {"e_rotlw"}	
	name += {"e_rotlw."}	
	name += {"e_clrlwi"}	
	name += {"e_clrrwi"}	
	name += {"e_clrlslwi"}	
	name += {"mbar"}	
	name += {"msync"}	
	name += {"mfapidi"}	
	name += {"e_la"}	

	name += {"isel"}	
	name += {"iselgt"}	
	name += {"iseleq"}	
	name += {"isellt"}	

	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
%if 0
	1 = "//"
	2 = ";"
	3 = "#"
%else
	1 = {"//", ";", "#"}
%endif
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
