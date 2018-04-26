//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/ProxyOutputStream.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "java/io/FilterOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/OutputStream.h"
#include "org/apache/commons/io/output/ProxyOutputStream.h"

@implementation OrgApacheCommonsIoOutputProxyOutputStream

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)proxy {
  OrgApacheCommonsIoOutputProxyOutputStream_initWithJavaIoOutputStream_(self, proxy);
  return self;
}

- (void)writeWithInt:(jint)idx {
  @try {
    [self beforeWriteWithInt:1];
    [((JavaIoOutputStream *) nil_chk(out_)) writeWithInt:idx];
    [self afterWriteWithInt:1];
  }
  @catch (JavaIoIOException *e) {
    [self handleIOExceptionWithJavaIoIOException:e];
  }
}

- (void)writeWithByteArray:(IOSByteArray *)bts {
  @try {
    jint len = bts != nil ? bts->size_ : 0;
    [self beforeWriteWithInt:len];
    [((JavaIoOutputStream *) nil_chk(out_)) writeWithByteArray:bts];
    [self afterWriteWithInt:len];
  }
  @catch (JavaIoIOException *e) {
    [self handleIOExceptionWithJavaIoIOException:e];
  }
}

- (void)writeWithByteArray:(IOSByteArray *)bts
                   withInt:(jint)st
                   withInt:(jint)end {
  @try {
    [self beforeWriteWithInt:end];
    [((JavaIoOutputStream *) nil_chk(out_)) writeWithByteArray:bts withInt:st withInt:end];
    [self afterWriteWithInt:end];
  }
  @catch (JavaIoIOException *e) {
    [self handleIOExceptionWithJavaIoIOException:e];
  }
}

- (void)flush {
  @try {
    [((JavaIoOutputStream *) nil_chk(out_)) flush];
  }
  @catch (JavaIoIOException *e) {
    [self handleIOExceptionWithJavaIoIOException:e];
  }
}

- (void)close {
  @try {
    [((JavaIoOutputStream *) nil_chk(out_)) close];
  }
  @catch (JavaIoIOException *e) {
    [self handleIOExceptionWithJavaIoIOException:e];
  }
}

- (void)beforeWriteWithInt:(jint)n {
}

- (void)afterWriteWithInt:(jint)n {
}

- (void)handleIOExceptionWithJavaIoIOException:(JavaIoIOException *)e {
  @throw nil_chk(e);
}

@end

void OrgApacheCommonsIoOutputProxyOutputStream_initWithJavaIoOutputStream_(OrgApacheCommonsIoOutputProxyOutputStream *self, JavaIoOutputStream *proxy) {
  JavaIoFilterOutputStream_initWithJavaIoOutputStream_(self, proxy);
}

OrgApacheCommonsIoOutputProxyOutputStream *new_OrgApacheCommonsIoOutputProxyOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *proxy) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoOutputProxyOutputStream, initWithJavaIoOutputStream_, proxy)
}

OrgApacheCommonsIoOutputProxyOutputStream *create_OrgApacheCommonsIoOutputProxyOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *proxy) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoOutputProxyOutputStream, initWithJavaIoOutputStream_, proxy)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoOutputProxyOutputStream)
