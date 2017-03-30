#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *label_path;
char *backup_path;
char *image_index_file_path;
char **class_names;
int num_classes;

void parse_path_cfg(char *filename){
    label_path = "data/default_examples/labels/";
    backup_path = "data/voc/train.txt";
    image_index_file_path = "backup/";
    num_classes = 20;
    class_names[num_classes];
    //class_names[] = {"aeroplane", "bicycle", "bird", "boat", "bottle", "bus", "car", "cat", "chair", "cow", "diningtable", "dog", "horse", "motorbike", "person", "pottedplant", "sheep", "sofa", "train", "tvmonitor"};
    //printf("%s\n", label_path);
}

