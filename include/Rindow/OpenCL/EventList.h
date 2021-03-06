#ifndef PHP_RINDOW_OPENCL_EVENT_LIST_H
# define PHP_RINDOW_OPENCL_EVENT_LIST_H

#define PHP_RINDOW_OPENCL_EVENT_LIST_CLASSNAME "Rindow\\OpenCL\\EventList"
#define PHP_RINDOW_OPENCL_EVENT_LIST_SIGNATURE 0x76454c4377646e52 // "RndwCLEv"

typedef struct {
    zend_long signature;
    cl_uint num;
    cl_event *events;
    zend_object std;
} php_rindow_opencl_event_list_t;
static inline php_rindow_opencl_event_list_t* php_rindow_opencl_event_list_fetch_object(zend_object* obj)
{
	return (php_rindow_opencl_event_list_t*) ((char*) obj - XtOffsetOf(php_rindow_opencl_event_list_t, std));
}
#define Z_RINDOW_OPENCL_EVENT_LIST_OBJ_P(zv) (php_rindow_opencl_event_list_fetch_object(Z_OBJ_P(zv)))

#endif	/* PHP_RINDOW_OPENCL_EVENT_LIST_H */
