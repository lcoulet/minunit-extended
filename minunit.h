/* file: minunit.h */

/// helpers
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define AT __FILE__":"TOSTRING(__LINE__)

#define mu_assert(message, test) do { if (!(test)) return "Assertion failed: \""message"\" ("#test")\n" \
	                                    		 "            in "AT"\n"; } while (0)
#define mu_run_test(test) do { char *message = test(); tests_run++; \
                                if (message) return message; } while (0)
extern int tests_run;
