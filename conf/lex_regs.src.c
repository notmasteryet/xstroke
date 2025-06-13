
int lex_g0(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6""5""4" { return 0; }
        *           { return 1; }
    */
}

int lex_g1(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"[26]?"5"[48]?"7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g2(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?"8""7"?"4""1"?"2""3"? { return 0; }
        *           { return 1; }
    */
}

int lex_g3(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([89]*[56][123]+|[89][365][123]*)(([123]+[456]+[789]*|[456]+[789]+)[56]*[123]+|[456]*[89]+[456]+[123]*)([123]*[45][78]+|[123]+[45][78]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g4(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4""5""6" { return 0; }
        *           { return 1; }
    */
}

int lex_g5(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "5" { return 0; }
        *           { return 1; }
    */
}

int lex_g6(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "8""5""2" { return 0; }
        *           { return 1; }
    */
}

int lex_g7(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"[68]?"5"[24]?"1"? { return 0; }
        *           { return 1; }
    */
}

int lex_g8(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"[24]?"5"[68]?"9" { return 0; }
        *           { return 1; }
    */
}

int lex_g9(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "8""5""2""5" { return 0; }
        *           { return 1; }
    */
}

int lex_g10(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2""5""8""5" { return 0; }
        *           { return 1; }
    */
}

int lex_g11(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4""5""6""5" { return 0; }
        *           { return 1; }
    */
}

int lex_g12(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6""5""4""5" { return 0; }
        *           { return 1; }
    */
}

int lex_g13(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "8"?"5""2""5""8" { return 0; }
        *           { return 1; }
    */
}

int lex_g14(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "8"?"5"("2""5"?)?"8"?"5""2"?"5"? { return 0; }
        *           { return 1; }
    */
}

int lex_g15(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [78]?[45]"5"?"1"?("2""3"?[56]"6"?|"4"?"5")"8"?"9"?"8"? { return 0; }
        *           { return 1; }
    */
}

int lex_g16(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?("3"?"2""5"?|"3""2"?"5"?)"1"?"4"([748]+"5""6"?|"7"?"4"?"8"[96]"6"?)[23]*("3"[56][89]?"8"?|"3"?("6"[89]|"5""9""8"?)) { return 0; }
        *           { return 1; }
    */
}

int lex_g17(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45][78]|[12][45]+[78]?)?[78]*[4]*("1"?[2][369]+|"1"[25][369]*)([369]+[25]+"8"?[147]?[258]*[369]+|[25]*"8"?[147]+[258]+[369]*)([369]*[58][74]+|[369]+[58][74]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g18(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [21][21]?[54]"4"?[78]+"4"?"8"?"5""8"?[69]"9"?"8""7"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g19(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?"3"?"2"[15]?"4""7"?[58]"8"?"9"?"6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g20(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1""2""3""6""9""8" { return 0; }
        *           { return 1; }
    */
}

int lex_g21(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        (([12]?[45]+|"9"?"8")?[78][45]*)?"1"?"2""3"?"6"("5"?"8"[47]|"9"[58]"8"?)"7"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g22(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("3"?"6"("5""6")?|"2""6"?"5"("6"[89]+)?|"2""3"?"6"?"9")[89]*[658]*[32]*[254]+[47]"7"?"8""9"?"6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g23(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?"6"?[25]+[47]"7"?[258]+"9"?[256]?[23]+[56]*"9"?[89]* { return 0; }
        *           { return 1; }
    */
}

int lex_g24(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([36]?[25][147]+|[36][215][147]*)([147]+[258]+([36]?[258]*|"9"[658]+)[147]+|[258]*([36]+[25]+|"9"[658]+)[147]*)([147]*"8"[96]"6"?|[147]+"8"[96]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g25(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?[47]?"2"?[58]?"2"?"6"?"3"?"2""1"?"4"[57]?"8""9"?"6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g26(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?"3"?"2""1"?"4""7" { return 0; }
        *           { return 1; }
    */
}

int lex_g27(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7""4""1"?"2""3" { return 0; }
        *           { return 1; }
    */
}

int lex_g28(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2""5""8" { return 0; }
        *           { return 1; }
    */
}

int lex_g29(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2""1"?"5"?"4""5"?"7"?"8""9"?(("6"?"5"[478]+"5"?|"6""8"[47]*)|"8""5"[47]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g30(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2""1"?"5"?"4""5"?"7"?"8""9"?(("6"?"5"[478]+"5"?|"6""8"[47]*)|"8""5"[47]*)?[258]*"6"?"9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g31(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2""1"?"2"?[45]"1"?[256]+[32]+[56]+("9""8"?"7"?|"8""7")"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g32(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [12]"1"?"4""7"[478]*[56][68]?"9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g33(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6""9"?"8"[74]"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g34(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("3"[26]?|"3"?[26])([58]"8"?)([48][57])?[47]("1"[24])?[57]?[68]?"9" { return 0; }
        *           { return 1; }
    */
}

int lex_g35(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"4""7"?"8""9" { return 0; }
        *           { return 1; }
    */
}

int lex_g36(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45]|[12][45]*)?([78]*[45][123]+|[78][145][123]*)(([123]+[456]+[789]*|[456]+[789]+)[45]*[123]+|[456]*[78]+[456]+[123]*)([123]*[56][98]+|[123]+[56][98]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g37(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([87]*[45]"5"?[12]+|[87]+[45]"5"?[12]*)([456]*[789]+|[12][45]"5"?[789]*)[56]"6"?"3"?"2"? { return 0; }
        *           { return 1; }
    */
}

int lex_g38(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [12]*"4"("7""4")?"1"?"2""3"?[56]"6"?"9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g39(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?("2""1"?[54][45]?"7"?"8""9"?"6""3"?"2"?|"2"?"1"?[54]"4"?"7"?"8""9"?"6""3"?"2")"1"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g40(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"?"8""9"?"6""3"?"2""1"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g41(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[456]+|[12][456]*)?[789]*[45]+"1"?"2"[36]"6"?("2"?"5""2"?[14]*|[25]*"4""1"?) { return 0; }
        *           { return 1; }
    */
}

int lex_g42(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4"?"7"?([48][59]?"6""3"?"2"[15]?[45][57]?"8"?|[48]?[59]?"6""3"?"2"[15]?[45][57]?"8")("9""6"?)? { return 0; }
        *           { return 1; }
    */
}

int lex_g43(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45]|[12][45]*)[78]*"4"?"1"?"2""3"? { return 0; }
        *           { return 1; }
    */
}

int lex_g44(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*"4")?[78]*[45]+[12]"2"?([36]*[25]+[14]|[36]+[258]+)([14]*[25]*"6"?"9"|[14]+"7"?[258]+[69]?) { return 0; }
        *           { return 1; }
    */
}

int lex_g45(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*"4")?[78]+[45]+[12]"2"?[36]*[258]+([14]*[25]*"6"?"9"|[14]+"7"?[258]+[69]"9"?) { return 0; }
        *           { return 1; }
    */
}

int lex_g46(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?"3"?"2""5"?([369]+("5""8")?"8"?"7"?"4"?|[14]+[25]*("5"[25]*[369]*"5"?"8""7"?"4"?|[369]*"8""7""4"?)) { return 0; }
        *           { return 1; }
    */
}

int lex_g47(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2""3"?"6""5"?[98]"8"? { return 0; }
        *           { return 1; }
    */
}

int lex_g48(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"4""7"?"8""9"?"6""3"?"2"? { return 0; }
        *           { return 1; }
    */
}

int lex_g49(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"4""7"?"8""9"?[26]"3"?"2"?[56]+"9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g50(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?[245]"5"?[78]"8"?[49]?[256]+"3"? { return 0; }
        *           { return 1; }
    */
}

int lex_g51(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6"?[56]("8"|"9""8""7")"7"?[45]*"4""1"? { return 0; }
        *           { return 1; }
    */
}

int lex_g52(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?([24]?"5"|[24]"7")([68][59])?"6"("3"[256]"1"?)?[59]?[48]?"7" { return 0; }
        *           { return 1; }
    */
}

int lex_g53(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1""2"?[45]+"1"?"6"?[23]+[56]*[89]+ { return 0; }
        *           { return 1; }
    */
}

int lex_g54(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1""2"?[45]+"1"?"6"?[23]+[56]*[89]+"7"?"8"?"9"?[456]*[23]* { return 0; }
        *           { return 1; }
    */
}

int lex_g55(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45][789]+|[12][745][789]*)(([78]+[45]+[123]*|[45]+[12]+)[456]*[789]+|[45]*[12]+[456]+[789]*)([789]*[56]+[32]+|[789]+[56]+[32]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g56(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2"("3"[26]?"5"[48]?"7"?|"3"?[26]?"5"[48]?"7")"8""9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g57(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2"?"1"?[54][45]?"7"?"8""9"?"6"[32]+"1"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g58(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2"?"3"?[56][56]?"9"?"8""7"?"4""1"?"2"?"3"?"6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g59(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2""3"?([26]?"5"[48]?"7"?|"6""5"?[98]"8"?"9"?) { return 0; }
        *           { return 1; }
    */
}

int lex_g60(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2""3"?[26]?"5"[48]?([47]*[58]+|"4""7"?[58]*)[69]* { return 0; }
        *           { return 1; }
    */
}

int lex_g61(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2""3"?"6"[59]"8"[47]*[58]+[69]* { return 0; }
        *           { return 1; }
    */
}

int lex_g62(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4"?("1"?[2][369]+|"1"[25][369]*)([369]+[25]+[147]?[258]*[369]+|[25]*[147]+[258]+[369]*)([369]*[58][74]+|[369]+[58][74]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g63(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"4""7"?"8""9"?"6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g64(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1""2"?[45]+"1"?"6"?[23]*[56]*[89]+ { return 0; }
        *           { return 1; }
    */
}

int lex_g65(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?"3"?[25]?"5"?[14]*[25]*[69]+[58]*"8""7"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g66(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?[26]?[15]?[45][57]?"8"[59]?"6"?"9"?[58]+[47]*"1"? { return 0; }
        *           { return 1; }
    */
}

int lex_g67(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2"[14]?"4"?[25]+[69]?"9"?"8""7"?[4598]+[12356]* { return 0; }
        *           { return 1; }
    */
}

int lex_g68(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2""1"?"2"?[45]*[789]*"1"?[256]+[32]+[56]+[89]*"7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g69(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?"8"[75]?"4"[15]?"2""3"? { return 0; }
        *           { return 1; }
    */
}

int lex_g70(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"?"8"[59]?"6"[35]?"2""1"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g71(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("9"?[8][147]+|"9"[58][147]*)([147]+[58]+[69]?[258]*[147]+|[58]*[69]+[258]+[147]*)([147]*[25][36]+|[147]+[25][36]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g72(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("7"?[8][369]+|"7"[58][369]*)([369]+[58]+[47]?[258]*[369]+|[58]*[47]+[258]+[369]*)([369]*[25][14]+|[369]+[25][14]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g73(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"[48]?"5"[26]?"3" { return 0; }
        *           { return 1; }
    */
}

int lex_g74(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4"?"1"?"2""3"?[26]?"5""4"?"7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g75(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?([36]?[25][147]+|[36][215][147]*)([147]+[258]+([36]?[258]*|"9"[658]+)[147]+|[258]*([36]+[25]+|"9"[658]+)[147]*)([147]*[58]"9"?"6"?|[147]+[58][96]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g76(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4"?([14]?[25][369]+|[14][235][369]*)([369]+[258]+([14]?[258]*|"7"[458]+)[369]+|[259]*([14]+[25]+|"7"[458]+)[369]*)([369]*[58]"7"?"4"?|[369]+[58][74]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g77(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2""3"?[26]?"5"[48]?"7"?"8""9"?[58]+[47]*"8"? { return 0; }
        *           { return 1; }
    */
}

int lex_g78(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1""4""7"[48]?"5"[26]?"3""6""9" { return 0; }
        *           { return 1; }
    */
}

int lex_g79(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2"[35]?"6"[59]?"8""7"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g80(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?"3"?"2""5"?"1""5"?"4"("7"?[58]"8"?"9"?"6"?|[78]+"9"?"6"?"9"?)"8""7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g81(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("1""2""3"?|"2""3")(("5""6"?"5"?)?"8"[47]|"5"?"6"?"9"[58]"8"?)"7"?"4"?[58]+[69]* { return 0; }
        *           { return 1; }
    */
}

int lex_g82(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4"?"5""6""5""4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g83(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "8"?"5""2""5""8"? { return 0; }
        *           { return 1; }
    */
}

int lex_g84(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?[26]?"5"[48]?"7"?[48]?"5"[26]?"3" { return 0; }
        *           { return 1; }
    */
}

int lex_g85(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2"?"5""8""5""2"? { return 0; }
        *           { return 1; }
    */
}

int lex_g86(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3""6""9"?[68]?[58][24]?"1" { return 0; }
        *           { return 1; }
    */
}

int lex_g87(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6"?[56]("8"|"9""8""7")[745]*"4""1"? { return 0; }
        *           { return 1; }
    */
}

int lex_g88(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6""9"?[68]?[35]?[24]?"1""4""7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g89(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6"?[56]("8"|"9""8")[7845]*"4""1"?"2"?[456]+[789]* { return 0; }
        *           { return 1; }
    */
}

int lex_g90(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?("2""3"?[56][56]?"9"?"8""7"?"4""1"?"2"?|"2"?"3"?[56]"6"?"9"?"8""7"?"4""1"?"2")"3"?"6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g91(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45]+[789]+|[12][745]+[789]*)([78]*[45]*[123]*[456]*[789]+|[45]*[12]+[456]+[789]*)([789]*[56]+[32]+|[789]+[56]+[32]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g92(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?[68]?"5"[24]?"1"?[24]?"5"[68]?"9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g93(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [78]?[45]"5"?"1"?("2""3"?("5""6"?[89]+[856]*[124]*|"6"[89]+[856]*[1234]*)|"4"?"5""8"?"9"?[856]*"4"?[12]+) { return 0; }
        *           { return 1; }
    */
}

int lex_g94(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [12]?([45][78]*"4"|[459]*[78]+[45]*)("1""2""3"?|"2""3")"5"?"6"?"5"?("8"[47]|"9"[58]"8"?)"7"?"4"?[58]+[69]* { return 0; }
        *           { return 1; }
    */
}

int lex_g95(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2""1"?"2"?[45]?"1"?[256]*[32]*[56]+("9""8"?"7"?|"8""7")"4"?[58]*"2"?[369]* { return 0; }
        *           { return 1; }
    */
}

int lex_g96(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [12]"1"?"4""7"[47]*"8"?[56]"6"?[89][56]*[23]* { return 0; }
        *           { return 1; }
    */
}

int lex_g97(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2"?("3"?"6""9"?"8"[74]"4"?|("3"?"6"|"2")"5""9"?"8"[74]"4"?)"7"?"8"[69]* { return 0; }
        *           { return 1; }
    */
}

int lex_g98(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"4""7"?"8""9"[58]*[47]* { return 0; }
        *           { return 1; }
    */
}

int lex_g99(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([87]*[45]"5"?[12]+|[87]+[45]"5"?[12]*)([456]*[789]+|[45]"5"?"6"?[789]*)[56]"6"?"3"?"2"?[56]+[89]* { return 0; }
        *           { return 1; }
    */
}

int lex_g100(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [12]*[45]+("7"[45]+)("1"?"2""3"?"6"|"1"[24][35]?"6"?|"1"[45]+"8")"9"?[56]+[23]+ { return 0; }
        *           { return 1; }
    */
}

int lex_g101(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?([26][15]?[54]"4"?"7"?"8"[59]?[65]"5"?"3"?"2"?|[26]?[15]?[54]"4"?"7"?"8"[59]?[65]"5"?"3"?"2")"1"?"4"?[25]+[36]* { return 0; }
        *           { return 1; }
    */
}

int lex_g102(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45]|[12][45]*)?[78]*"4"?"5"?"1"?"2""3"?[25]+[14]* { return 0; }
        *           { return 1; }
    */
}

int lex_g103(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?"3"?"2""5"?([369]+("5""8")?"8"?"7"?"4"?|[14]+[25]*("5"[25]*[369]*"5"?"8""7"?"4"?|[369]*"8""7""4"?))[58]+[69]* { return 0; }
        *           { return 1; }
    */
}

int lex_g104(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"4""7"?"8"[59]?[26]"3"?"2"?"6"("9"[56]+)?[23]* { return 0; }
        *           { return 1; }
    */
}

int lex_g105(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?([24]?"5"|[24]"7")([68][59])?"6"("3"[256]"1"?)?"3"?"5"?[48]?"7""8"?"9"?[456]+[1236]* { return 0; }
        *           { return 1; }
    */
}

int lex_g106(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2"("3"[26]?"5"[48]?"7"?|"3"?[26]?"5"[48]?"7")"8""9"?[58]+[47]*"8"? { return 0; }
        *           { return 1; }
    */
}

int lex_g107(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?("3"?"2""5"?|"3""2"?"5"?)"1"?"4"([748]+"5""6"?|"7"?"4"?"8"[96]"6"?)[23]*("3"[56][89]?"8"?|"3"?("6"[89]|"5""9""8"?))[56]*[23]* { return 0; }
        *           { return 1; }
    */
}

int lex_g108(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45]+[78]|[12][45]+[78])?[78]*[45]*("1"?[2][369]+|"1"[25][369]*)([369]+[25]+[147]?[258]*[369]+|[25]*[147]+[258]+[369]*)([369]*[58][74]+|[369]+[58][74]*)[58]+[69]*"8"? { return 0; }
        *           { return 1; }
    */
}

int lex_g109(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [21][21]?[54]"4"?[78]+"4"?"8"?"5""8"?[69]"9"?"8""7"?"4"?[58]*[69]* { return 0; }
        *           { return 1; }
    */
}

int lex_g110(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("3"?"6"("5""6")?|"2""6"?"5"("6"[89]+)?|"2""3"?"6"?"9")[89]*[658]*[32]*[15]?([47]+|[58]+)"8""9"?[69]+[58]+[47]+ { return 0; }
        *           { return 1; }
    */
}

int lex_g111(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?"6"?[258]+[47]"7"?[258]+"9"?[256]?[23]+[56]*"9"?[89]*[56]+[23]* { return 0; }
        *           { return 1; }
    */
}

int lex_g112(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([36]?[25][147]+|[36][215][147]*)([147]+[258]+([36]?[25]*|"9"[658]+)[147]+|[258]*([36]+[25]+|"9"[658]+)[147]*)([147]*"8"[96]"6"?|[147]+"8"[96]*)[58]+[47]*"8"? { return 0; }
        *           { return 1; }
    */
}

int lex_g113(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?[47]?"2"?[58]?"2"?"6"?"3"?[25]+"1"?"4"[57]?"8""9"?"6"?[58]+[47]* { return 0; }
        *           { return 1; }
    */
}

int lex_g114(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6"?"3"?"2""1"?"4""7""8"?"7"?[45]*[12]* { return 0; }
        *           { return 1; }
    */
}

int lex_g115(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2"?"5""8"?"5""2" { return 0; }
        *           { return 1; }
    */
}

int lex_g116(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2""1"?"5"?"4""5"?"7"?"8""9"?(("6"?"5"|"6""8")|"8""5")([47]+[258]+([369]+[258]+)?|[47]*[258]+([369]+[258]+))[147]* { return 0; }
        *           { return 1; }
    */
}

int lex_g117(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2""1"?"2"?[45]"1"?[256]+[32]+[56]+("9""8"?"7"?|"8""7")"4"?[58]*[69]* { return 0; }
        *           { return 1; }
    */
}

int lex_g118(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("3"[26]?|"3"?[26])([58]"8"?)([48][57])?[47]+("1"[24]"3"?)?"1"?[57]?[68]?"9"[568]+([12347]|"5")[1245]* { return 0; }
        *           { return 1; }
    */
}

int lex_g119(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45]|[12][45]*)?([78]*[45]+[123]+|[78][145]+[123]*)(([123]+[456]+[789]*|[456]+[789]+)[456]*[123]+|[456]*[789]+[456]+[123]*)([123]*[56]+[98]+|[123]+[56]+[98]*)[56]+[23]* { return 0; }
        *           { return 1; }
    */
}

int lex_g120(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"?"8"[59]?"6""3"?[52]"2"?([14]"4"?[25]+"3"?|[25]+"3") { return 0; }
        *           { return 1; }
    */
}

int lex_g121(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[456]+|[12][456]*)?([789]*"4"|[789]+[45]+)"1"?"2"[36]?("6"|("6"?("2"?"5"|"2""5"?)"2"?"8"?[147]*|[25]*"8"?"1"?"4""1"?"7"?))[25]+[36]* { return 0; }
        *           { return 1; }
    */
}

int lex_g122(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4"?[57]?([48][59]?"6""3"?"2"[15]?[45][57]?|[48]?[59]?"6""3"?"2"[15]?[45][57]?)("8""7"|"8"?"9"?"6"?"9"[58]+[47]*[58]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g123(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45]|[12][45]*)[78]*"4"?"5"?"1"?"2""3"?[25]+[14]* { return 0; }
        *           { return 1; }
    */
}

int lex_g124(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*"4")?[78]*[45]+[12]"2"?([369]*[25]+[14]|[369]+[258]+)([147]*[258]*[68]?"9"|[147]+[258]+[68]?"9"?)[68]?[57][24]?"1"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g125(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2""3"?"6""5"?([23]+|[98]"8"?"9"?)[56]+[23]* { return 0; }
        *           { return 1; }
    */
}

int lex_g126(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?[245]"5"?[78]"8"?[49]?[256]+"3"[56]*"9"?"8" { return 0; }
        *           { return 1; }
    */
}

int lex_g127(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?[245]"5"?"8"[49]?[256]+"3"[56]*"9"?"8"? { return 0; }
        *           { return 1; }
    */
}

int lex_g128(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?[245]"5"?"7""8"?[49]?[56]*[23]+[56]*"9"?"8""7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g129(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6"?[56]("8"|"9""8""7")[7845]*"4""1"?"2"?[456]+[789]* { return 0; }
        *           { return 1; }
    */
}

int lex_g130(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6"?[56]("8"|"9""8")[745]*"4""1"?"2"?[456]+[89]* { return 0; }
        *           { return 1; }
    */
}

int lex_g131(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([12]*[45][789]+|[12][745][789]*)(([78]+[456]+[123]*|[45]+[12]+)"4"?"5"?"6"?[789]+|[45]*[12]+[456]+[789]*)([789]*[569]+[32]+|[789]+[569]+[32]*)[56]*[89]* { return 0; }
        *           { return 1; }
    */
}

int lex_g132(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2"?[45]+"1"?([789]+[45]*)?"6"?[23]+[56]*[89]+"7"?"8"?[456]+([23]+[56]+)?[89]*"9"[89]* { return 0; }
        *           { return 1; }
    */
}

int lex_g133(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2"?"3"?"6""9"?"8""7"?"4""1"?"2"?"3"? { return 0; }
        *           { return 1; }
    */
}

int lex_g134(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?"8"([74][48]?[58]"9"?[26]?"3"?|"7"?[48]?[58]"9"?[26]?[63]"3"?)"2""1"?"4"? { return 0; }
        *           { return 1; }
    */
}

int lex_g135(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [89]"9"?"5"?"6""5"?"3""6"?"9"?("8""7"?"4"|"5""4"?)"1"?"2"? { return 0; }
        *           { return 1; }
    */
}

int lex_g136(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"?"4"?[58][69]*"8""7"?"4"[15]?"2"?"3"? { return 0; }
        *           { return 1; }
    */
}

int lex_g137(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([47]*[58]"5"?[69]+|[47]+[58]"5"?[69]*)([58]*[147]+("2""5")?|[58]+[147]*"5"?"2")"2""3"?"6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g138(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9""6""3"?"2""1" { return 0; }
        *           { return 1; }
    */
}

int lex_g139(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2"[14]?"4"?[25]+[69]"9"?"8""7"?[4598]+[12356]* { return 0; }
        *           { return 1; }
    */
}

int lex_g140(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2"[36]?"6"?[25]+[47]"7"?"8""9"?[5678]+[12345]* { return 0; }
        *           { return 1; }
    */
}

int lex_g141(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6"?("5"[41]*|"2"[41]*"4"[41]*)"2""3"?"6""9"?"8"?"9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g142(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        [789]*[56]+"3"?"2"[14]"4"?("2"?"5""2"?[36]*|[25]*"6""3"?) { return 0; }
        *           { return 1; }
    */
}

int lex_g143(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7""4""1"?"2"("3""2")?"1"? { return 0; }
        *           { return 1; }
    */
}

int lex_g144(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "6""5""4""5""6" { return 0; }
        *           { return 1; }
    */
}

int lex_g145(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2""1""2""3"?[26]?"5"[48]?"7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g146(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2"("1""2")?"3"?"6"[89]+ { return 0; }
        *           { return 1; }
    */
}

int lex_g147(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2"?"5"("8""5"?)?"2"?"5""8"?"5"? { return 0; }
        *           { return 1; }
    */
}

int lex_g148(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4""5""6""5""4" { return 0; }
        *           { return 1; }
    */
}

int lex_g149(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2"("3""2")?"1"?"4""7"?"8""9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g150(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2""3"?"2""1"?[45][78]+ { return 0; }
        *           { return 1; }
    */
}

int lex_g151(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "4"?"5"("6""5")?"4""5""6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g152(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2""5""8""7""4""5""6" { return 0; }
        *           { return 1; }
    */
}

int lex_g153(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1""4""5""8"?[74]"4"?"5""6" { return 0; }
        *           { return 1; }
    */
}

int lex_g154(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?"2""5""8"?[74]"4"?"5""6" { return 0; }
        *           { return 1; }
    */
}

int lex_g155(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2"?"3"[56]"9"?"8""7"?"4""5""6"? { return 0; }
        *           { return 1; }
    */
}

int lex_g156(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"?"4""1""4""7"?"8""9" { return 0; }
        *           { return 1; }
    */
}

int lex_g157(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?"6""3""6""9"?"8""7" { return 0; }
        *           { return 1; }
    */
}

int lex_g158(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9""8""7"?"4""1" { return 0; }
        *           { return 1; }
    */
}

int lex_g159(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7""8""9"?"6""3" { return 0; }
        *           { return 1; }
    */
}

int lex_g160(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("6""5""4"?|"9""8""7"?"4")"1""4"[78]? { return 0; }
        *           { return 1; }
    */
}

int lex_g161(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ("4""5""6"?|"7""8""9"?"6")"3""6"[89]? { return 0; }
        *           { return 1; }
    */
}

int lex_g162(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9""8""7"[48]?"5"[26]?"3"? { return 0; }
        *           { return 1; }
    */
}

int lex_g163(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7""8""9"[68]?"5"[24]?"1"? { return 0; }
        *           { return 1; }
    */
}

int lex_g164(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?[68]?"5"([24]?"1"|[24]"1"?)"2"[36]* { return 0; }
        *           { return 1; }
    */
}

int lex_g165(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"?[48]?"5"([26]?"3"|[36]"3"?)"2"[14]* { return 0; }
        *           { return 1; }
    */
}

int lex_g166(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"[48]?"5"[26]?"3"?[26]?"5"[48]?"7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g167(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"?[48]?"5"[26]?"3"?[26]?"5"[48]?"7" { return 0; }
        *           { return 1; }
    */
}

int lex_g168(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"[24]?"5"[68]?"9"?([68]?"5"[24]?|"8""4")"1"? { return 0; }
        *           { return 1; }
    */
}

int lex_g169(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1"?[24]?"5"[68]?"9"?([68]?"5"[24]?|"8""4")"1" { return 0; }
        *           { return 1; }
    */
}

int lex_g170(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "1""4""7"[48]?"5""4"?"5"?[26]?"3""2"?"3"?"6""9" { return 0; }
        *           { return 1; }
    */
}

int lex_g171(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        ([32]*[56]+[789]+|[32][569]+[789]*)([89]*[56]*[123]*[456]*[789]+|[56]*[23]+[456]+[789]*)([789]*[45]+[12]+|[789]+[45]+[12]*) { return 0; }
        *           { return 1; }
    */
}

int lex_g172(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "8"?"9"[68]?"5"?[34]?("2"?"1"?[54]"4"?|"6"?"5")[78]* { return 0; }
        *           { return 1; }
    */
}

int lex_g173(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"?"6""3"?[26]?"5""6"?"5"?[48]?"7""4""1"? { return 0; }
        *           { return 1; }
    */
}

int lex_g174(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"6""9"?[68]?"5"?[24]?"1""4""7"? { return 0; }
        *           { return 1; }
    */
}

int lex_g175(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "7"[48]?[15]([26][53])?"6"("9"[568]"7"?)?[53]?[24]?"1" { return 0; }
        *           { return 1; }
    */
}

int lex_g176(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "9"[68]?"5"?[24]?"1"?"4""7"?"8""9"? { return 0; }
        *           { return 1; }
    */
}

int lex_g177(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "2"?"5""8""9"?"6""3"?"2""1"?"4""7"?"8"?"9"?[89]? { return 0; }
        *           { return 1; }
    */
}

int lex_g178(const char *s) {
    const char *YYCURSOR = s, *YYMARKER;
    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;

        "3"?"2"[14]?"4"?[58]+[69]?"9"?"8""7""4"[12][12]? { return 0; }
        *           { return 1; }
    */
}
