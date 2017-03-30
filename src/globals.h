#ifndef GLOBALS_H
#define GLOBALS_H

extern char *label_path;
extern char *backup_path;
extern char *image_index_file_path;
extern char **class_names;
extern int num_classes;

void parse_path_cfg(char *filename);

#endif
