# Defining Constants

# The location on your system where OJ folder is placed. It is required to serve static content.
SYS_ROOT   = "/var/www/html/oj/beta/"

MYSQL_HOST = "localhost"           # Host address of MySQL server. Maybe "localhost" or an IP.
MYSQL_PORT = "3306"                # The port on which MySQL server is listening. The default for MySQL is 3306
MYSQL_USER = "root"            # USERNAME to which you have granted the database access.
MYSQL_PASS = "iiit"            # PASSWORD for the abode user.
MYSQL_DB   = "oj"                  # The database to use for OJ.


# Language Support [ Just remove all the corresponding entries in following variables to disable submission in them ]
LANGUAGES = ["GNU GCC 4.3"]
LANG_NICK = ["C"]
LANG_EXT  = ["c"]
TIME_FACTOR = [1]                           # Time limit are multiple by this factor for corresponding language

# Add a entry for each problem
PROBLEMS_ID = ["ds1","ds2","ds3","ds4","ds5","ds6"]                             # ID of problem.
PROBLEMS_NAME = ["ds1","ds2","ds3","ds4","ds5","ds6"]         # Name of problem.
PROBLEMS_PAGE = ["ds7.html","ds7.html","ds7.html","ds7.html","ds7.html","ds7.html"]                      # File which contains the description of this corresponding entry. It should exists in OJ folder.
PROBLEMS_SCORE = [100,100,100,100,100,100];                            # Total score attainable for corresponding problem
MAX_SUBMISSION = [1000,1000,1000,1000,1000,1000];                              # Max. Submission allowed for corresponding problem

TIME_DIFF = 5                                    # Minimum gap in seconds between two consecutive submission for same problem.

# Please stick to the time format. Time is in 24-hours format. And month short nick should be used.

startTime = "20 Aug 2014 00:30"                    # The time the contest start, evaluation starts and problems are visible.
endTime   = "27 Aug 2014 23:00"                   # The time contest ends, evaluation stops and submissions are freezed.
regTime   = "21 Aug 2014 23:00"	                  # The time when registration stops. TeamList is freezed.
