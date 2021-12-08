#include <stdlib.h>
#include <alloca.h>

#define __unlikely(x) (x)
#define __likely(x) (x)


extern int __VERIFIER_nondet_int(void);

size_t mystrlen(const char *s) {
  register size_t i;
  if (__unlikely(!s)) return 0;
  for (i=0; __likely(*s); ++s) ++i;
  return i;
}

int mymemcmp(const void *dst, const void *src, size_t count) {
  register int r;
  register const unsigned char *d=dst;
  register const unsigned char *s=src;
  ++count;
  while (__likely(--count)) {
    if (__unlikely((r=(*d - *s))))
      return r;
    ++d;
    ++s;
  }
  return 0;
}

char *mystrstr(const char *haystack, const char *needle) {
  size_t nl=mystrlen(needle);
  size_t hl=mystrlen(haystack);
  size_t i;
  if (!nl) goto found;
  if (nl>hl) return 0;
  for (i=hl-nl+1; __likely(i); --i) {
    if (*haystack==*needle && !mymemcmp(haystack,needle,nl))
found:
      return (char*)haystack;
    ++haystack;
  }
  return 0;
}

int main(){
  int in_len = __VERIFIER_nondet_int();
  if(in_len < 1){return 1;}
  char* hay = alloca(in_len);
  hay[in_len-1]=0;
  int out_len = __VERIFIER_nondet_int();
  if(out_len < 1){return 1;}
  char* needle = alloca(out_len);
  needle[out_len-1]=0;
  return (int) mystrstr(hay, needle);
}
