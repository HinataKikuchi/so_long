#include "../include/so_long.h"

//マップ読み込み
//サイズ計測とエラー処理
// fill flood
//位置計測
int read_map(int fd)
{
    char *test[1000];
    int res;
    int len;

    while (res = get_next_line(fd, test))
    {
        if (res == -1)
        {
            printf("ERROR!") return -1;
        }
        res = ft_strlen(test[0]);
        printf("%s \n", test[0]);
    }
    printf("%s  \n", test[0]);
}

int main(int argc, char **argv)
{
    int fd;
    char *test[1000];

    if (argc != 2)
    {
        printf("./a.out <map_path>");
        return -1;
    }
    else
    {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
            printf("ERROR");
            return -1;
        }
        read_map(fd);
    }
}