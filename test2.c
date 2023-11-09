
#if 0
#include <unistd.h>
#include <pthread.h>
#include <stdio.h>

void* foo(void* arg)
{
    while (1) {
        printf("foo\n");
        sleep(2);
    }
}

int main(void)
{
    pthread_t thread;
    pthread_create(&thread, NULL, foo, NULL);

    while (1) {
        printf("main\n");
        sleep(1);
    }

    return 0;
}
#endif

#if 0
#include <unistd.h>
#include <pthread.h>
#include <stdio.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

int count = 0;
void* foo(void* arg)
{
    for (int i = 0; i < 1000000; i++) {
        pthread_mutex_lock(&mutex);
        count++;
        pthread_mutex_unlock(&mutex);
    }

    return NULL;
}

int main(void)
{
    pthread_t thread[3];
    for (int i = 0; i < 3; i++) {
        pthread_create(thread + i, NULL, foo, NULL);
    }

    for (int i = 0; i < 3; i++) {
        pthread_join(thread[i], NULL);
    }

    printf("count: %d\n", count);

    return 0;
}
#endif
