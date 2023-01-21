const u8 gSpeciesNames[][11] = {
    _("??????????"),
    _("BULBASAUR"),
    _("IVYSAUR"),
    _("VENUSAUR"),
    _("CHAPMANDER"), // charmander
    _("CHARMELEON"),
    _("CHARIZARD"),
    _("SQUIRTLE"),
    _("WARTORTLE"),
    _("BLASTOISE"),
    _("CATERPIE"),
    _("METAPOD"),
    _("BUTTERFREE"),
    _("WEEDLE"),
    _("KAKUNA"),
    _("BEEDRILL"),
    _("PIDGE"), // pidgey
    _("PIDGEOTTO"),
    _("PIDGEOT"),
    _("RATTATA"),
    _("RATICATE"),
    _("SPEAROW"),
    _("FEAROW"),
    _("EKANS"),
    _("ARBOK"),
    _("BLARGH"), // pikachu
    _("RAICHU"),
    _("SANDSHREW"),
    _("SANDSLASH"),
    _("NIDORAN♀"),
    _("NIDORINA"),
    _("NIDOQUEEN"),
    _("NIDORAN♂"),
    _("NEALDORINO"), // nidorino
    _("NIDOKING"),
    _("CLEFAIRY"),
    _("CLEFABLE"),
    _("VULPIX"),
    _("NINETALES"),
    _("JIGGLYPUFF"),
    _("WIGGLYTUFF"),
    _("BATMAN"), // zubat
    _("GOLBAT"),
    _("ODDISH"),
    _("GLOOM"),
    _("VILEPLUME"),
    _("PARAS"),
    _("PARASECT"),
    _("VENONAT"),
    _("VENOMOTH"),
    _("DIGLETT"),
    _("DUGTRIO"),
    _("MEOWTH"),
    _("PERSIAN"),
    _("RUTH"), // psyduck
    _("GOLDUCK"),
    _("MANKEY"),
    _("PRIMEAPE"),
    _("GROWLITHE"),
    _("ARCANINE"),
    _("POLIWAG"),
    _("POLIWHIRL"),
    _("POLIWRATH"),
    _("ABRA"),
    _("KADABRA"),
    _("ALAKAZAM"),
    _("MACHOP"),
    _("MACHOKE"),
    _("MACHAMP"),
    _("BELLSPROUT"),
    _("WEEPINBELL"),
    _("VICTREEBEL"),
    _("TENTACOOL"),
    _("TENTACRUEL"),
    _("GEODUDE"),
    _("GRAVELER"),
    _("GOLEM"),
    _("PONYTA"),
    _("RAPIDASH"),
    _("SLOWPOKE"),
    _("SLOWBRO"),
    _("MAGNEMITE"),
    _("MAGNETON"),
    _("FARFETCH'D"),
    _("DODUO"),
    _("DODRIO"),
    _("SEEL"),
    _("DEWGONG"),
    _("GRIMER"),
    _("MUK"),
    _("SHELLDER"),
    _("CLOYSTER"),
    _("GASTLY"),
    _("HAUNTER"),
    _("GENGAR"),
    _("ONIX"),
    _("DROWZEE"),
    _("HYPNO"),
    _("KRABBY"),
    _("KINGLER"),
    _("VOLTORB"),
    _("ELECTRODE"),
    _("EXEGGCUTE"),
    _("EXEGGUTOR"),
    _("CUBONE"),
    _("MAROWAK"),
    _("HITMONLEE"),
    _("HITMONCHAN"),
    _("LICKITUNG"),
    _("KOFFING"),
    _("WEEZING"),
    _("RHYHORN"),
    _("RHYDON"),
    _("CHANSEY"),
    _("TANGELA"),
    _("KANGASKHAN"),
    _("HORSEA"),
    _("SEADRA"),
    _("GOLDEEN"),
    _("SEAKING"),
    _("STARYU"),
    _("STARMIE"),
    _("MR. MIME"),
    _("SCYTHER"),
    _("JYNX"),
    _("ELECTABUZZ"),
    _("MAGMAR"),
    _("PINSIR"),
    _("TAUROS"),
    _("MAGIKARP"),
    _("GYARADOS"),
    _("LAPRAS"),
    _("DITTO"),
    _("CJ"), // eevee
    _("VAPOREON"),
    _("JAUNTEON"), // jolteon
    _("FLAREON"),
    _("PORYGON"),
    _("OMANYTE"),
    _("OMASTAR"),
    _("KABUTO"),
    _("KABUTOPS"),
    _("AERODACTYL"),
    _("SNORLAX"),
    _("ARTICUNO"),
    _("ZAPDOS"),
    _("MOLTRES"),
    _("DRATINI"),
    _("DRAGONAIR"),
    _("DRAGONITE"),
    _("MEWTWO"),
    _("MEW"),
    _("CHIKORITA"),
    _("BAYLEEF"),
    _("MEGANIUM"),
    _("CYNDAQUIL"),
    _("QUILAVA"),
    _("TYPHLOSION"),
    _("TOTODILE"),
    _("CROCONAW"),
    _("FERALIGATR"),
    _("SENTRET"),
    _("FURRET"),
    _("HOOTHOOT"),
    _("NOCTOWL"),
    _("LEDYBA"),
    _("LEDIAN"),
    _("SPINARAK"),
    _("ARIADOS"),
    _("CROBAT"),
    _("CHINCHOU"),
    _("LANTURN"),
    _("PICHU"),
    _("CLEFFA"),
    _("IGGLYBUFF"),
    _("TOGEPI"),
    _("TOGETIC"),
    _("NATU"),
    _("XATU"),
    _("MAREEP"),
    _("FLAAFFY"),
    _("AMPHAROS"),
    _("BELLOSSOM"),
    _("MARILL"),
    _("AZUMARILL"),
    _("SUDOWOODO"),
    _("POLITOED"),
    _("HOPPIP"),
    _("SKIPLOOM"),
    _("JUMPLUFF"),
    _("AIPOM"),
    _("SUNKERN"),
    _("SUNFLORA"),
    _("YANMA"),
    _("WOOPER"),
    _("QUAGSIRE"),
    _("ESPEON"),
    _("UMBREON"),
    _("MURKROW"),
    _("SLOWKING"),
    _("MISDREAVUS"),
    _("UNOWN"),
    _("WOBBUFFET"),
    _("GIRAFARIG"),
    _("PINECO"),
    _("FORRETRESS"),
    _("DUNSPARCE"),
    _("GLIGAR"),
    _("STEELIX"),
    _("SNUBBULL"),
    _("GRANBULL"),
    _("QWILFISH"),
    _("SCIZOR"),
    _("SHUCKLE"),
    _("HERACROSS"),
    _("SNEASEL"),
    _("TEDDIURSA"),
    _("URSARING"),
    _("SLUGMA"),
    _("MAGCARGO"),
    _("SWINUB"),
    _("PILOSWINE"),
    _("CORSOLA"),
    _("REMORAID"),
    _("OCTILLERY"),
    _("DELIBIRD"),
    _("MANTINE"),
    _("SKARMORY"),
    _("HOUNDOUR"),
    _("HOUNDOOM"),
    _("KINGDRA"),
    _("PHANPY"),
    _("DONPHAN"),
    _("PORYGON2"),
    _("STANTLER"),
    _("SMEARGLE"),
    _("TYROGUE"),
    _("HITMONTOP"),
    _("SMOOCHUM"),
    _("ELEKID"),
    _("MAGBY"),
    _("MILTANK"),
    _("BLISSEY"),
    _("RAIKOU"),
    _("ENTEI"),
    _("SUICUNE"),
    _("LARVITAR"),
    _("PUPITAR"),
    _("TYRANITAR"),
    _("LUGIA"),
    _("HO-OH"),
    _("CELEBI"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("?"),
    _("TREECKO"),
    _("GROVYLE"),
    _("SCEPTILE"),
    _("TORCHIC"),
    _("COMBUSKEN"),
    _("BLAZIKEN"),
    _("MUDKIP"),
    _("MARSHTOMP"),
    _("SWAMPERT"),
    _("POOCHYENA"),
    _("MIGHTYENA"),
    _("ZIGZAGOON"),
    _("LINOONE"),
    _("WURMPLE"),
    _("SILCOON"),
    _("BEAUTIFLY"),
    _("CASCOON"),
    _("DUSTOX"),
    _("LOTAD"),
    _("LOMBRE"),
    _("LUDICOLO"),
    _("SEEDOT"),
    _("NUZLEAF"),
    _("SHIFTRY"),
    _("NINCADA"),
    _("NINJASK"),
    _("SHEDINJA"),
    _("TAILLOW"),
    _("SWELLOW"),
    _("ROOMISH"),
    _("BRELOOM"),
    _("SPINDA"),
    _("WINGULL"),
    _("PELIPPER"),
    _("SURSKIT"),
    _("MASQUERAIN"),
    _("WAILMER"),
    _("WAILORD"),
    _("SKITTY"),
    _("DELCATTY"),
    _("KECLEON"),
    _("BALTOY"),
    _("CLAYDOL"),
    _("NOSEPASS"),
    _("TORKOAL"),
    _("SABLEYE"),
    _("BARBOACH"),
    _("WHISCASH"),
    _("LUVDISC"),
    _("CORPHISH"),
    _("CRAWDAUNT"),
    _("FEEBAS"),
    _("MILOTIC"),
    _("CARVANHA"),
    _("SHARPEDO"),
    _("TRAPINCH"),
    _("VIBRAVA"),
    _("FLYGON"),
    _("MAKUHITA"),
    _("HARIYAMA"),
    _("ELECTRIKE"),
    _("MANECTRIC"),
    _("NUMEL"),
    _("CAMERUPT"),
    _("SPHEAL"),
    _("SEALEO"),
    _("WALREIN"),
    _("CACNEA"),
    _("CACTURNE"),
    _("SNORUNT"),
    _("GLALIE"),
    _("LUNATONE"),
    _("SOLROCK"),
    _("AZURILL"),
    _("SPOINK"),
    _("GRUMPIG"),
    _("PLUSLE"),
    _("MINUN"),
    _("MAWILE"),
    _("MEDITITE"),
    _("MEDICHAM"),
    _("SWABLU"),
    _("ALTARIA"),
    _("WYNAUT"),
    _("DUSKULL"),
    _("DUSCLOPS"),
    _("ROSELIA"),
    _("SLAKOTH"),
    _("VIGOROTH"),
    _("SLAKING"),
    _("GULPIN"),
    _("SWALOT"),
    _("TROPIUS"),
    _("WHISMUR"),
    _("LOUDRED"),
    _("EXPLOUD"),
    _("CLAMPERL"),
    _("HUNTAIL"),
    _("GOREBYSS"),
    _("ABSOL"),
    _("SHUPPET"),
    _("BANETTE"),
    _("SEVIPER"),
    _("ZANGOOSE"),
    _("RELICANTH"),
    _("ARON"),
    _("LAIRON"),
    _("AGGRON"),
    _("CASTFORM"),
    _("VOLBEAT"),
    _("ILLUMISE"),
    _("LILEEP"),
    _("CRADILY"),
    _("ANORITH"),
    _("ARMALDO"),
    _("RALTS"),
    _("KIRLIA"),
    _("GARDEVOIR"),
    _("BAGON"),
    _("SHELGON"),
    _("SALAMENCE"),
    _("BELDUM"),
    _("METANG"),
    _("METAGROSS"),
    _("REGIROCK"),
    _("REGICE"),
    _("REGISTEEL"),
    _("KYOGRE"),
    _("GROUDON"),
    _("RAYQUAZA"),
    _("LATIAS"),
    _("LATIOS"),
    _("JIRACHI"),
    _("DEOXYS"),
    _("CHIMECHO")};
