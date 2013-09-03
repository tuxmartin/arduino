/* MD2 */

typedef struct {
	unsigned char state[48];
	unsigned char checksum[16];
	unsigned char buffer[16];
	char in_buffer;
} MD2_CTX;

void MD2Init(void *contextBuf);

static void MD2_Transform(void *contextBuf, const unsigned char *block);

void MD2Update(void *contextBuf, const unsigned char *buf, unsigned int len);

void MD2Final(unsigned char output[16], void *contextBuf);

void make_digest(char *md5str, const unsigned char *digest, int len);

void do_md2(char *arg, char *returnedHash);


