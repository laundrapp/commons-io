//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/HiddenFileFilter.java
//

#include "J2ObjC_source.h"
#include "java/io/File.h"
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"
#include "org/apache/commons/io/filefilter/HiddenFileFilter.h"
#include "org/apache/commons/io/filefilter/IOFileFilter.h"
#include "org/apache/commons/io/filefilter/NotFileFilter.h"

J2OBJC_INITIALIZED_DEFN(OrgApacheCommonsIoFilefilterHiddenFileFilter)

id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterHiddenFileFilter_HIDDEN;
id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterHiddenFileFilter_VISIBLE;

@implementation OrgApacheCommonsIoFilefilterHiddenFileFilter

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype __nonnull)init {
  OrgApacheCommonsIoFilefilterHiddenFileFilter_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file {
  return [((JavaIoFile *) nil_chk(file)) isHidden];
}

+ (void)initialize {
  if (self == [OrgApacheCommonsIoFilefilterHiddenFileFilter class]) {
    JreStrongAssignAndConsume(&OrgApacheCommonsIoFilefilterHiddenFileFilter_HIDDEN, new_OrgApacheCommonsIoFilefilterHiddenFileFilter_init());
    JreStrongAssignAndConsume(&OrgApacheCommonsIoFilefilterHiddenFileFilter_VISIBLE, new_OrgApacheCommonsIoFilefilterNotFileFilter_initWithOrgApacheCommonsIoFilefilterIOFileFilter_(OrgApacheCommonsIoFilefilterHiddenFileFilter_HIDDEN));
    J2OBJC_SET_INITIALIZED(OrgApacheCommonsIoFilefilterHiddenFileFilter)
  }
}

@end

void OrgApacheCommonsIoFilefilterHiddenFileFilter_init(OrgApacheCommonsIoFilefilterHiddenFileFilter *self) {
  OrgApacheCommonsIoFilefilterAbstractFileFilter_init(self);
}

OrgApacheCommonsIoFilefilterHiddenFileFilter *new_OrgApacheCommonsIoFilefilterHiddenFileFilter_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterHiddenFileFilter, init)
}

OrgApacheCommonsIoFilefilterHiddenFileFilter *create_OrgApacheCommonsIoFilefilterHiddenFileFilter_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterHiddenFileFilter, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoFilefilterHiddenFileFilter)
