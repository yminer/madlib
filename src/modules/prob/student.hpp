/* ----------------------------------------------------------------------- *//**
 *
 * @file student.hpp
 *
 *//* ----------------------------------------------------------------------- */

// Workaround for Doxygen: A header file that does not declare namespaces is to
// be ignored if and only if it is processed stand-alone
#if !defined(_DOXYGEN_IGNORE_HEADER_FILE)

/**
 * @brief Student-t cumulative distribution function
 */
DECLARE_UDF(student_t_cdf)

#if !defined(DECLARE_LIBRARY_EXPORTS)

double studentT_CDF(double t, double nu);

#endif // !defined(DECLARE_LIBRARY_EXPORTS)

#endif // workaround for Doxygen
