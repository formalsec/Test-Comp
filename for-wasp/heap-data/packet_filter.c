extern unsigned __VERIFIER_nondet_uint(char *);
extern int __VERIFIER_nondet_int(char *);
extern char *__VERIFIER_nondet_charp(char *);
extern void abort(void);
void assume(int);
void assert(int);
void *alloc(void *, unsigned int);
void dealloc(void *);
int is_symbolic(void *, unsigned int);
_Bool sym_bool(char *);
int sym_int(char *);
long long sym_long(char *);
float sym_float(char *);
double sym_double(char *);
int __logand(int a, int b);
int __logor(int a, int b);
int __ternary(int c, int r1, int r0);
void reach_error()
{
  assert(0);
}

typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed long int64_t;
typedef unsigned long uint64_t;
typedef signed long intmax_t;
typedef unsigned long uintmax_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef signed long ptrdiff_t;
typedef unsigned long size_t;
typedef int wchar_t;
typedef signed long ssize_t;
typedef signed long suseconds_t;
typedef signed long useconds_t;
typedef signed long long time_t;
typedef int32_t pid_t;
typedef uint32_t uid32_t;
typedef uint32_t gid32_t;
typedef int32_t clockid_t;
typedef int32_t timer_t;
typedef long int fpos_t;
typedef uint32_t socklen_t;
typedef uint16_t sa_family_t;
void abort(void);
void *alloca(size_t);
void *calloc(size_t, size_t);
void *malloc(size_t);
void free(void *);
void *realloc(void *, size_t);
char *getenv(const char *name);
int setenv(const char *name, const char *value, int overwrite);
int unsetenv(const char *name);
long int strtol(const char *nptr, char **endptr, int base);
unsigned long int strtoul(const char *nptr, char **endptr, int base);
void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
typedef struct packet
{
  unsigned size;
  unsigned prio;
  char *payload;
} Packet;
typedef struct packet_list_node
{
  struct packet packet;
  struct packet_list_node *next;
} *Node;
struct packet_queue
{
  struct packet_list_node *front;
};
Packet receive()
{
  Packet packet;
  packet.size = __VERIFIER_nondet_uint("size");
  packet.prio = (__VERIFIER_nondet_int("prio")) ? (0) : (1);
  packet.payload = __VERIFIER_nondet_charp("payload");
  return packet;
}

void send(struct packet p)
{
  (void) p;
}

void append_to_queue(Packet p, Node *q)
{
  Node node = malloc(sizeof(*node));
  node->packet = p;
  node->next = *q;
  *q = node;
}

void process_prio_queue(Node q)
{
  for (Node node = q; node != ((void *) 0); node = node->next)
  {
    if (!__logor(node->packet.prio == 1, node->packet.size < 500))
    {
      reach_error();
    }

    send(node->packet);
  }

}

void process_normal_queue(Node q)
{
  for (Node node = q; node != ((void *) 0); node = node->next)
  {
    if (!__logand(node->packet.prio == 0, node->packet.size >= 500))
    {
      reach_error();
    }

    send(node->packet);
  }

}

int main()
{
  Node prio_queue = (void *) 0;
  Node normal_queue = (void *) 0;
  while (__VERIFIER_nondet_int("while_1"))
  {
    Packet new_packet = receive();
    if (new_packet.size > 0)
    {
      if (new_packet.prio == 1)
      {
        append_to_queue(new_packet, &prio_queue);
      }
      else
        if (new_packet.size < 500)
      {
        append_to_queue(new_packet, &prio_queue);
      }
      else
      {
        append_to_queue(new_packet, &normal_queue);
      }


    }

  }

  process_prio_queue(prio_queue);
  process_normal_queue(normal_queue);
  return 0;
}

