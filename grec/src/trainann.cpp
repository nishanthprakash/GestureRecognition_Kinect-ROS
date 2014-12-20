#include "fann.h"
#include <stdio.h>
int main()
{
struct fann *ann = fann_create(1,0.7,5,72,60,30,10,3);
fann_train_on_file(ann, "training.data",200,10,0.1);
fann_save(ann, "gesture_classify.net");
fann_destroy(ann);
return 0;
}
