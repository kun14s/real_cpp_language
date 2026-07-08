#include "real_cpp_lang.h"
#include CCccccCCCCCC

#ifdef _WIN32
#include CCccccCCccCC
#endif

cCCCCCcccccCc {
    #ifdef CCccccCCCCccc
    cCCCCccCCCCcC;
    #endif
    CcCCCC << "====== ++C 计算圆周率 ======" << CCCCcc;
    CCCCcCCC C;
    CcCCCC << "输入循环次数 < ";
    cCCCCC >> C;
    CcCCCCCC CCCCCCcC c = 1.0;
    CcCCCCCC CCCCCCcC Cc = 2.0;
    CcCCCCCC CCCCCCcC cC = 4.0;
    CCCCCCcc cCc = CCCCccCccccCc;
    CCCCCCcC CCC = 3.0;
    CCCCcCCC CcC = 1L;
    CCCCcccCCCC (CcC <= C) {
        CccCCCCCCCC (cCc) {
            CCC += cC / ((Cc*CcC) * (Cc*CcC+c) * (Cc*CcC+Cc));
        } ccCCCCCCCCC {
            CCC -= cC / ((Cc*CcC) * (Cc*CcC+c) * (Cc*CcC+Cc));
        }
        ++CcC;
        cCc = !cCc;
    }
    CcCCCC << CCCCcc << "圆周率近似值 > " << CCC << CCCCcc;
    CCCCCCCcccc 0;
}
