// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// randomSample
NumericVector randomSample(int N, int m);
RcppExport SEXP randomizr_randomSample(SEXP NSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(randomSample(N, m));
    return rcpp_result_gen;
END_RCPP
}
// simulator
Rcpp::NumericMatrix simulator(int N, int m, int t);
RcppExport SEXP randomizr_simulator(SEXP NSEXP, SEXP mSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(simulator(N, m, t));
    return rcpp_result_gen;
END_RCPP
}
