// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// estimate
//List estimate(DataFrame data, double tol, int n, CharacterVector model_mode, int num_states);
RcppExport SEXP mypackage_estimate(SEXP dataSEXP, SEXP tolSEXP, SEXP nSEXP, SEXP model_modeSEXP, SEXP num_statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type model_mode(model_modeSEXP);
    Rcpp::traits::input_parameter< int >::type num_states(num_statesSEXP);
    __result = Rcpp::wrap(estimate(data, tol, n, model_mode, num_states));
    return __result;
END_RCPP
}
// n_plus
int n_plus(int n);
RcppExport SEXP mypackage_n_plus(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(n_plus(n));
    return __result;
END_RCPP
}
