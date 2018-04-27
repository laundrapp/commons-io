//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/DemuxInputStream.java
//

#include "J2ObjC_source.h"
#include "java/io/InputStream.h"
#include "java/lang/InheritableThreadLocal.h"
#include "org/apache/commons/io/input/DemuxInputStream.h"

@interface OrgApacheCommonsIoInputDemuxInputStream () {
 @public
  JavaLangInheritableThreadLocal *m_streams_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoInputDemuxInputStream, m_streams_, JavaLangInheritableThreadLocal *)

@implementation OrgApacheCommonsIoInputDemuxInputStream

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype __nonnull)init {
  OrgApacheCommonsIoInputDemuxInputStream_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (JavaIoInputStream *)bindStreamWithJavaIoInputStream:(JavaIoInputStream *)input {
  JavaIoInputStream *oldValue = [((JavaLangInheritableThreadLocal *) nil_chk(m_streams_)) get];
  [m_streams_ setWithId:input];
  return oldValue;
}

- (void)close {
  JavaIoInputStream *input = [((JavaLangInheritableThreadLocal *) nil_chk(m_streams_)) get];
  if (nil != input) {
    [input close];
  }
}

- (jint)read {
  JavaIoInputStream *input = [((JavaLangInheritableThreadLocal *) nil_chk(m_streams_)) get];
  if (nil != input) {
    return [input read];
  }
  else {
    return -1;
  }
}

- (void)dealloc {
  RELEASE_(m_streams_);
  [super dealloc];
}

@end

void OrgApacheCommonsIoInputDemuxInputStream_init(OrgApacheCommonsIoInputDemuxInputStream *self) {
  JavaIoInputStream_init(self);
  JreStrongAssignAndConsume(&self->m_streams_, new_JavaLangInheritableThreadLocal_init());
}

OrgApacheCommonsIoInputDemuxInputStream *new_OrgApacheCommonsIoInputDemuxInputStream_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoInputDemuxInputStream, init)
}

OrgApacheCommonsIoInputDemuxInputStream *create_OrgApacheCommonsIoInputDemuxInputStream_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoInputDemuxInputStream, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoInputDemuxInputStream)
