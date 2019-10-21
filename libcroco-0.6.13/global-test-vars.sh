TEST_OUT_DIR=./tests
TEST_SOURCE_DIR=./tests
TEST_INPUTS_DIR="$TEST_SOURCE_DIR"/test-inputs
CSSLINT=./csslint/.libs/csslint-0.6
if ! test -x $CSSLINT ; then
    echo "Error: Could not find an executable csslint. I was looking for $CSSLINT" >&2
    exit 1
fi

if ! test x"$VALGRIND" = x ; then
    CSSLINT="$VALGRIND $CSSLINT"
fi
