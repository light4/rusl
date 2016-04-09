#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <unistd.h>
#include <wchar.h>

#define TEST(r, f, x, m) ( \
((r) = (f)) == (x) || \
(printf(__FILE__ ":%d: %s failed (" m ")\n", __LINE__, #f, r, x, strerror(errno)), err++, 0) )

#define TEST_S(s, x, m) ( \
!strcmp((s),(x)) || \
(printf(__FILE__ ":%d: [%s] != [%s] (%s)\n", __LINE__, s, x, m), err++, 0) )

static FILE *writetemp(const char *data)
{
	FILE *f = tmpfile();
	if (!f) return 0;
	if (!fwrite(data, strlen(data), 1, f)) {
		fclose(f);
		return 0;
	}
	rewind(f);
	return f;
}

int test_fwscanf(void)
{
	int i, x, y;
	double u, v;
	int err=0;
	char a[100], b[100], *s;
	FILE *f;
	int p[2];

	TEST(i, !!(f=writetemp("      42")), 1, "failed to make temp file");
	if (f) {
		x=y=-1;
		TEST(i, fwscanf(f, L" %n%*d%n", &x, &y), 0, "%d != %d");
		TEST(i, x, 6, "%d != %d");
		TEST(i, y, 8, "%d != %d");
		TEST(i, ftell(f), 8, "%d != %d");
		TEST(i, !!feof(f), 1, "%d != %d");
		fclose(f);
	}

	TEST(i, !!(f=writetemp("[abc123]....x")), 1, "failed to make temp file");
	if (f) {
		x=y=-1;
		TEST(i, fwscanf(f, L"%10[^]]%n%10[].]%n", a, &x, b, &y), 2, "%d != %d");
		TEST_S(a, "[abc123", "wrong result for %[^]]");
		TEST_S(b, "]....", "wrong result for %[].]");
		TEST(i, x, 7, "%d != %d");
		TEST(i, y, 12, "%d != %d");
		TEST(i, ftell(f), 12, "%d != %d");
		TEST(i, feof(f), 0, "%d != %d");
		TEST(i, fgetc(f), 'x', "%d != %d");
		fclose(f);
	}

	TEST(i, !!(f=writetemp("0x1p 12")), 1, "failed to make temp file");
	if (f) {
		x=y=-1;
		u=-1;
		TEST(i, fwscanf(f, L"%lf%n %d", &u, &x, &y), 0, "%d != %d");
		TEST(u, u, -1.0, "%g != %g");
		TEST(i, x, -1, "%d != %d");
		TEST(i, y, -1, "%d != %d");
		TEST(i, ftell(f), 4, "%d != %d");
		TEST(i, feof(f), 0, "%d != %d");
		TEST(i, fgetc(f), ' ', "%d != %d");
		rewind(f);
		TEST(i, fgetc(f), '0', "%d != %d");
		TEST(i, fgetc(f), 'x', "%d != %d");
		TEST(i, fwscanf(f, L"%lf%n%c %d", &u, &x, a, &y), 3, "%d != %d");
		TEST(u, u, 1.0, "%g != %g");
		TEST(i, x, 1, "%d != %d");
		TEST(i, a[0], 'p', "%d != %d");
		TEST(i, y, 12, "%d != %d");
		TEST(i, ftell(f), 7, "%d != %d");
		TEST(i, !!feof(f), 1, "%d != %d");
		fclose(f);
	}

	TEST(i, !!(f=writetemp("0x.1p4    012")), 1, "failed to make temp file");
	if (f) {
		x=y=-1;
		u=-1;
		TEST(i, fwscanf(f, L"%lf%n %i", &u, &x, &y), 2, "%d != %d");
		TEST(u, u, 1.0, "%g != %g");
		TEST(i, x, 6, "%d != %d");
		TEST(i, y, 10, "%d != %d");
		TEST(i, ftell(f), 13, "%d != %d");
		TEST(i, !!feof(f), 1, "%d != %d");
		fclose(f);
	}

	TEST(i, !!(f=writetemp("0xx")), 1, "failed to make temp file");
	if (f) {
		x=y=-1;
		TEST(i, fwscanf(f, L"%x%n", &x, &y), 0, "%d != %d");
		TEST(i, x, -1, "%d != %d");
		TEST(i, y, -1, "%d != %d");
		TEST(i, ftell(f), 2, "%d != %d");
		TEST(i, feof(f), 0, "%d != %d");
		fclose(f);
	}

	return err;
}
