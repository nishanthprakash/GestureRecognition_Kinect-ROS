#include "fann.h"
#include <stdio.h>
int main()
{
struct fann *ann = fann_create(1,0.7,3,8,4,3);
fann_train_on_file(ann, "training.data",2000,100,0.1);
fann_save(ann, "gesture_classify.net");
fann_destroy(ann);
return 0;
}
