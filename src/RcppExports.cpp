// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_convert_time
int rcpp_convert_time(const std::string& hms);
RcppExport SEXP _gtfsrouter_rcpp_convert_time(SEXP hmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type hms(hmsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_convert_time(hms));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_time_to_seconds
Rcpp::IntegerVector rcpp_time_to_seconds(std::vector <std::string> times);
RcppExport SEXP _gtfsrouter_rcpp_time_to_seconds(SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector <std::string> >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_time_to_seconds(times));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_make_timetable
Rcpp::DataFrame rcpp_make_timetable(Rcpp::DataFrame stop_times, std::vector <std::string> stop_ids, std::vector <std::string> trip_ids);
RcppExport SEXP _gtfsrouter_rcpp_make_timetable(SEXP stop_timesSEXP, SEXP stop_idsSEXP, SEXP trip_idsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type stop_times(stop_timesSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type stop_ids(stop_idsSEXP);
    Rcpp::traits::input_parameter< std::vector <std::string> >::type trip_ids(trip_idsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_make_timetable(stop_times, stop_ids, trip_ids));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_csa
Rcpp::DataFrame rcpp_csa(Rcpp::DataFrame timetable, Rcpp::DataFrame transfers, const size_t nstations, const size_t ntrips, const std::vector <size_t> start_stations, const std::vector <size_t> end_stations, const int start_time, const int max_transfers);
RcppExport SEXP _gtfsrouter_rcpp_csa(SEXP timetableSEXP, SEXP transfersSEXP, SEXP nstationsSEXP, SEXP ntripsSEXP, SEXP start_stationsSEXP, SEXP end_stationsSEXP, SEXP start_timeSEXP, SEXP max_transfersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type timetable(timetableSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type transfers(transfersSEXP);
    Rcpp::traits::input_parameter< const size_t >::type nstations(nstationsSEXP);
    Rcpp::traits::input_parameter< const size_t >::type ntrips(ntripsSEXP);
    Rcpp::traits::input_parameter< const std::vector <size_t> >::type start_stations(start_stationsSEXP);
    Rcpp::traits::input_parameter< const std::vector <size_t> >::type end_stations(end_stationsSEXP);
    Rcpp::traits::input_parameter< const int >::type start_time(start_timeSEXP);
    Rcpp::traits::input_parameter< const int >::type max_transfers(max_transfersSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_csa(timetable, transfers, nstations, ntrips, start_stations, end_stations, start_time, max_transfers));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_isochrone
Rcpp::List rcpp_isochrone(Rcpp::DataFrame timetable, Rcpp::DataFrame transfers, const size_t nstations, const std::vector <size_t> start_stations, const int start_time, const int end_time, const bool minimise_transfers);
RcppExport SEXP _gtfsrouter_rcpp_isochrone(SEXP timetableSEXP, SEXP transfersSEXP, SEXP nstationsSEXP, SEXP start_stationsSEXP, SEXP start_timeSEXP, SEXP end_timeSEXP, SEXP minimise_transfersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type timetable(timetableSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type transfers(transfersSEXP);
    Rcpp::traits::input_parameter< const size_t >::type nstations(nstationsSEXP);
    Rcpp::traits::input_parameter< const std::vector <size_t> >::type start_stations(start_stationsSEXP);
    Rcpp::traits::input_parameter< const int >::type start_time(start_timeSEXP);
    Rcpp::traits::input_parameter< const int >::type end_time(end_timeSEXP);
    Rcpp::traits::input_parameter< const bool >::type minimise_transfers(minimise_transfersSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_isochrone(timetable, transfers, nstations, start_stations, start_time, end_time, minimise_transfers));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_traveltimes
Rcpp::IntegerMatrix rcpp_traveltimes(Rcpp::DataFrame timetable, Rcpp::DataFrame transfers, const size_t nstations, const std::vector <size_t> start_stations, const int start_time, const bool minimise_transfers, const int cutoff);
RcppExport SEXP _gtfsrouter_rcpp_traveltimes(SEXP timetableSEXP, SEXP transfersSEXP, SEXP nstationsSEXP, SEXP start_stationsSEXP, SEXP start_timeSEXP, SEXP minimise_transfersSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type timetable(timetableSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type transfers(transfersSEXP);
    Rcpp::traits::input_parameter< const size_t >::type nstations(nstationsSEXP);
    Rcpp::traits::input_parameter< const std::vector <size_t> >::type start_stations(start_stationsSEXP);
    Rcpp::traits::input_parameter< const int >::type start_time(start_timeSEXP);
    Rcpp::traits::input_parameter< const bool >::type minimise_transfers(minimise_transfersSEXP);
    Rcpp::traits::input_parameter< const int >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_traveltimes(timetable, transfers, nstations, start_stations, start_time, minimise_transfers, cutoff));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gtfsrouter_rcpp_convert_time", (DL_FUNC) &_gtfsrouter_rcpp_convert_time, 1},
    {"_gtfsrouter_rcpp_time_to_seconds", (DL_FUNC) &_gtfsrouter_rcpp_time_to_seconds, 1},
    {"_gtfsrouter_rcpp_make_timetable", (DL_FUNC) &_gtfsrouter_rcpp_make_timetable, 3},
    {"_gtfsrouter_rcpp_csa", (DL_FUNC) &_gtfsrouter_rcpp_csa, 8},
    {"_gtfsrouter_rcpp_isochrone", (DL_FUNC) &_gtfsrouter_rcpp_isochrone, 7},
    {"_gtfsrouter_rcpp_traveltimes", (DL_FUNC) &_gtfsrouter_rcpp_traveltimes, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_gtfsrouter(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
