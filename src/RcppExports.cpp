// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getDSskipInfoTagFloat
List getDSskipInfoTagFloat(double cutoff, std::string tag, std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_getDSskipInfoTagFloat(SEXP cutoffSEXP, SEXP tagSEXP, SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< std::string >::type tag(tagSEXP);
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(getDSskipInfoTagFloat(cutoff, tag, vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// heterozygosity
List heterozygosity(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_heterozygosity(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(heterozygosity(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tableGT
List tableGT(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tableGT(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tableGT(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tableGP
List tableGP(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tableGP(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tableGP(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tableDS
List tableDS(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tableDS(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tableDS(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tableGL
List tableGL(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tableGL(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tableGL(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tablePL
List tablePL(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tablePL(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tablePL(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tableGQ
List tableGQ(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tableGQ(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tableGQ(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tableHQ
List tableHQ(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tableHQ(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tableHQ(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tableDP
List tableDP(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tableDP(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tableDP(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tableMQ
List tableMQ(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tableMQ(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tableMQ(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// tablePQ
List tablePQ(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_tablePQ(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(tablePQ(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// summaryVariants
List summaryVariants(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_summaryVariants(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(summaryVariants(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}
// summarySVs
List summarySVs(std::string vcffile, std::string region, std::string samples);
RcppExport SEXP _vcfppR_summarySVs(SEXP vcffileSEXP, SEXP regionSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcffile(vcffileSEXP);
    Rcpp::traits::input_parameter< std::string >::type region(regionSEXP);
    Rcpp::traits::input_parameter< std::string >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(summarySVs(vcffile, region, samples));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vcfppR_getDSskipInfoTagFloat", (DL_FUNC) &_vcfppR_getDSskipInfoTagFloat, 5},
    {"_vcfppR_heterozygosity", (DL_FUNC) &_vcfppR_heterozygosity, 3},
    {"_vcfppR_tableGT", (DL_FUNC) &_vcfppR_tableGT, 3},
    {"_vcfppR_tableGP", (DL_FUNC) &_vcfppR_tableGP, 3},
    {"_vcfppR_tableDS", (DL_FUNC) &_vcfppR_tableDS, 3},
    {"_vcfppR_tableGL", (DL_FUNC) &_vcfppR_tableGL, 3},
    {"_vcfppR_tablePL", (DL_FUNC) &_vcfppR_tablePL, 3},
    {"_vcfppR_tableGQ", (DL_FUNC) &_vcfppR_tableGQ, 3},
    {"_vcfppR_tableHQ", (DL_FUNC) &_vcfppR_tableHQ, 3},
    {"_vcfppR_tableDP", (DL_FUNC) &_vcfppR_tableDP, 3},
    {"_vcfppR_tableMQ", (DL_FUNC) &_vcfppR_tableMQ, 3},
    {"_vcfppR_tablePQ", (DL_FUNC) &_vcfppR_tablePQ, 3},
    {"_vcfppR_summaryVariants", (DL_FUNC) &_vcfppR_summaryVariants, 3},
    {"_vcfppR_summarySVs", (DL_FUNC) &_vcfppR_summarySVs, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_vcfppR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
