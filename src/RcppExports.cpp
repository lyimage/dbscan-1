// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// reach_to_dendrogram
List reach_to_dendrogram(const Rcpp::List reachability, const NumericVector pl_order);
RcppExport SEXP dbscan_reach_to_dendrogram(SEXP reachabilitySEXP, SEXP pl_orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type reachability(reachabilitySEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type pl_order(pl_orderSEXP);
    rcpp_result_gen = Rcpp::wrap(reach_to_dendrogram(reachability, pl_order));
    return rcpp_result_gen;
END_RCPP
}
// dendrogram_to_reach
List dendrogram_to_reach(const Rcpp::List x);
RcppExport SEXP dbscan_dendrogram_to_reach(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(dendrogram_to_reach(x));
    return rcpp_result_gen;
END_RCPP
}
// dbscan_int
IntegerVector dbscan_int(NumericMatrix data, double eps, int minPts, NumericVector weights, int borderPoints, int type, int bucketSize, int splitRule, double approx, List frNN);
RcppExport SEXP dbscan_dbscan_int(SEXP dataSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP weightsSEXP, SEXP borderPointsSEXP, SEXP typeSEXP, SEXP bucketSizeSEXP, SEXP splitRuleSEXP, SEXP approxSEXP, SEXP frNNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type borderPoints(borderPointsSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type splitRule(splitRuleSEXP);
    Rcpp::traits::input_parameter< double >::type approx(approxSEXP);
    Rcpp::traits::input_parameter< List >::type frNN(frNNSEXP);
    rcpp_result_gen = Rcpp::wrap(dbscan_int(data, eps, minPts, weights, borderPoints, type, bucketSize, splitRule, approx, frNN));
    return rcpp_result_gen;
END_RCPP
}
// frNN_int
List frNN_int(NumericMatrix data, double eps, int type, int bucketSize, int splitRule, double approx);
RcppExport SEXP dbscan_frNN_int(SEXP dataSEXP, SEXP epsSEXP, SEXP typeSEXP, SEXP bucketSizeSEXP, SEXP splitRuleSEXP, SEXP approxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type splitRule(splitRuleSEXP);
    Rcpp::traits::input_parameter< double >::type approx(approxSEXP);
    rcpp_result_gen = Rcpp::wrap(frNN_int(data, eps, type, bucketSize, splitRule, approx));
    return rcpp_result_gen;
END_RCPP
}
// JP_int
IntegerVector JP_int(IntegerMatrix nn, unsigned int kt);
RcppExport SEXP dbscan_JP_int(SEXP nnSEXP, SEXP ktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type kt(ktSEXP);
    rcpp_result_gen = Rcpp::wrap(JP_int(nn, kt));
    return rcpp_result_gen;
END_RCPP
}
// kNN_int
List kNN_int(NumericMatrix data, int k, int type, int bucketSize, int splitRule, double approx);
RcppExport SEXP dbscan_kNN_int(SEXP dataSEXP, SEXP kSEXP, SEXP typeSEXP, SEXP bucketSizeSEXP, SEXP splitRuleSEXP, SEXP approxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type splitRule(splitRuleSEXP);
    Rcpp::traits::input_parameter< double >::type approx(approxSEXP);
    rcpp_result_gen = Rcpp::wrap(kNN_int(data, k, type, bucketSize, splitRule, approx));
    return rcpp_result_gen;
END_RCPP
}
// optics_int
List optics_int(NumericMatrix data, double eps, int minPts, int type, int bucketSize, int splitRule, double approx, List frNN);
RcppExport SEXP dbscan_optics_int(SEXP dataSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP typeSEXP, SEXP bucketSizeSEXP, SEXP splitRuleSEXP, SEXP approxSEXP, SEXP frNNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type bucketSize(bucketSizeSEXP);
    Rcpp::traits::input_parameter< int >::type splitRule(splitRuleSEXP);
    Rcpp::traits::input_parameter< double >::type approx(approxSEXP);
    Rcpp::traits::input_parameter< List >::type frNN(frNNSEXP);
    rcpp_result_gen = Rcpp::wrap(optics_int(data, eps, minPts, type, bucketSize, splitRule, approx, frNN));
    return rcpp_result_gen;
END_RCPP
}
