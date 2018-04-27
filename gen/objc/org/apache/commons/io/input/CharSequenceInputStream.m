//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/CharSequenceInputStream.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "java/io/InputStream.h"
#include "java/lang/CharSequence.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/Math.h"
#include "java/lang/NullPointerException.h"
#include "java/nio/Buffer.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/CharBuffer.h"
#include "java/nio/charset/Charset.h"
#include "java/nio/charset/CharsetEncoder.h"
#include "java/nio/charset/CoderResult.h"
#include "java/nio/charset/CodingErrorAction.h"
#include "org/apache/commons/io/input/CharSequenceInputStream.h"

@interface OrgApacheCommonsIoInputCharSequenceInputStream () {
 @public
  JavaNioCharsetCharsetEncoder *encoder_;
  JavaNioCharBuffer *cbuf_;
  JavaNioByteBuffer *bbuf_;
  jint mark_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoInputCharSequenceInputStream, encoder_, JavaNioCharsetCharsetEncoder *)
J2OBJC_FIELD_SETTER(OrgApacheCommonsIoInputCharSequenceInputStream, cbuf_, JavaNioCharBuffer *)
J2OBJC_FIELD_SETTER(OrgApacheCommonsIoInputCharSequenceInputStream, bbuf_, JavaNioByteBuffer *)

__attribute__((unused)) static void OrgApacheCommonsIoInputCharSequenceInputStream_fillBuffer(OrgApacheCommonsIoInputCharSequenceInputStream *self);

@implementation OrgApacheCommonsIoInputCharSequenceInputStream

- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                             withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset
                                               withInt:(jint)bufferSize {
  OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_withInt_(self, s, charset, bufferSize);
  return self;
}

- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                          withNSString:(NSString *)charset
                                               withInt:(jint)bufferSize {
  OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_withInt_(self, s, charset, bufferSize);
  return self;
}

- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                             withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset {
  OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_(self, s, charset);
  return self;
}

- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                          withNSString:(NSString *)charset {
  OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_(self, s, charset);
  return self;
}

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len {
  if (b == nil) {
    @throw create_JavaLangNullPointerException_initWithNSString_(@"Byte array is null");
  }
  if (len < 0 || (off + len) > b->size_) {
    @throw create_JavaLangIndexOutOfBoundsException_initWithNSString_(JreStrcat("$I$I$I", @"Array Size=", b->size_, @", offset=", off, @", length=", len));
  }
  if (len == 0) {
    return 0;
  }
  if (![((JavaNioByteBuffer *) nil_chk(self->bbuf_)) hasRemaining] && ![((JavaNioCharBuffer *) nil_chk(self->cbuf_)) hasRemaining]) {
    return -1;
  }
  jint bytesRead = 0;
  while (len > 0) {
    if ([self->bbuf_ hasRemaining]) {
      jint chunk = JavaLangMath_minWithInt_withInt_([self->bbuf_ remaining], len);
      [self->bbuf_ getWithByteArray:b withInt:off withInt:chunk];
      off += chunk;
      len -= chunk;
      bytesRead += chunk;
    }
    else {
      OrgApacheCommonsIoInputCharSequenceInputStream_fillBuffer(self);
      if (![self->bbuf_ hasRemaining] && ![((JavaNioCharBuffer *) nil_chk(self->cbuf_)) hasRemaining]) {
        break;
      }
    }
  }
  return bytesRead == 0 && ![((JavaNioCharBuffer *) nil_chk(self->cbuf_)) hasRemaining] ? -1 : bytesRead;
}

- (jint)read {
  for (; ; ) {
    if ([((JavaNioByteBuffer *) nil_chk(self->bbuf_)) hasRemaining]) {
      return [self->bbuf_ get] & (jint) 0xFF;
    }
    else {
      OrgApacheCommonsIoInputCharSequenceInputStream_fillBuffer(self);
      if (![self->bbuf_ hasRemaining] && ![((JavaNioCharBuffer *) nil_chk(self->cbuf_)) hasRemaining]) {
        return -1;
      }
    }
  }
}

- (jint)readWithByteArray:(IOSByteArray *)b {
  return [self readWithByteArray:b withInt:0 withInt:((IOSByteArray *) nil_chk(b))->size_];
}

- (jlong)skipWithLong:(jlong)n {
  jint skipped = 0;
  while (n > 0 && [((JavaNioCharBuffer *) nil_chk(self->cbuf_)) hasRemaining]) {
    [((JavaNioCharBuffer *) nil_chk(self->cbuf_)) get];
    n--;
    skipped++;
  }
  return skipped;
}

- (jint)available {
  return [((JavaNioCharBuffer *) nil_chk(self->cbuf_)) remaining];
}

- (void)close {
}

- (void)markWithInt:(jint)readlimit {
  @synchronized(self) {
    self->mark_ = [((JavaNioCharBuffer *) nil_chk(self->cbuf_)) position];
  }
}

- (void)reset {
  @synchronized(self) {
    if (self->mark_ != -1) {
      [((JavaNioCharBuffer *) nil_chk(self->cbuf_)) positionWithInt:self->mark_];
      self->mark_ = -1;
    }
  }
}

- (jboolean)markSupported {
  return true;
}

- (void)dealloc {
  RELEASE_(encoder_);
  RELEASE_(cbuf_);
  RELEASE_(bbuf_);
  [super dealloc];
}

@end

void OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_withInt_(OrgApacheCommonsIoInputCharSequenceInputStream *self, id<JavaLangCharSequence> s, JavaNioCharsetCharset *charset, jint bufferSize) {
  JavaIoInputStream_init(self);
  JreStrongAssign(&self->encoder_, [((JavaNioCharsetCharsetEncoder *) nil_chk([((JavaNioCharsetCharsetEncoder *) nil_chk([((JavaNioCharsetCharset *) nil_chk(charset)) newEncoder])) onMalformedInputWithJavaNioCharsetCodingErrorAction:JreLoadStatic(JavaNioCharsetCodingErrorAction, REPLACE)])) onUnmappableCharacterWithJavaNioCharsetCodingErrorAction:JreLoadStatic(JavaNioCharsetCodingErrorAction, REPLACE)]);
  JreStrongAssign(&self->bbuf_, JavaNioByteBuffer_allocateWithInt_(bufferSize));
  [((JavaNioByteBuffer *) nil_chk(self->bbuf_)) flip];
  JreStrongAssign(&self->cbuf_, JavaNioCharBuffer_wrapWithJavaLangCharSequence_(s));
  self->mark_ = -1;
}

OrgApacheCommonsIoInputCharSequenceInputStream *new_OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_withInt_(id<JavaLangCharSequence> s, JavaNioCharsetCharset *charset, jint bufferSize) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoInputCharSequenceInputStream, initWithJavaLangCharSequence_withJavaNioCharsetCharset_withInt_, s, charset, bufferSize)
}

OrgApacheCommonsIoInputCharSequenceInputStream *create_OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_withInt_(id<JavaLangCharSequence> s, JavaNioCharsetCharset *charset, jint bufferSize) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoInputCharSequenceInputStream, initWithJavaLangCharSequence_withJavaNioCharsetCharset_withInt_, s, charset, bufferSize)
}

void OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_withInt_(OrgApacheCommonsIoInputCharSequenceInputStream *self, id<JavaLangCharSequence> s, NSString *charset, jint bufferSize) {
  OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_withInt_(self, s, JavaNioCharsetCharset_forNameWithNSString_(charset), bufferSize);
}

OrgApacheCommonsIoInputCharSequenceInputStream *new_OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_withInt_(id<JavaLangCharSequence> s, NSString *charset, jint bufferSize) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoInputCharSequenceInputStream, initWithJavaLangCharSequence_withNSString_withInt_, s, charset, bufferSize)
}

OrgApacheCommonsIoInputCharSequenceInputStream *create_OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_withInt_(id<JavaLangCharSequence> s, NSString *charset, jint bufferSize) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoInputCharSequenceInputStream, initWithJavaLangCharSequence_withNSString_withInt_, s, charset, bufferSize)
}

void OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_(OrgApacheCommonsIoInputCharSequenceInputStream *self, id<JavaLangCharSequence> s, JavaNioCharsetCharset *charset) {
  OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_withInt_(self, s, charset, 2048);
}

OrgApacheCommonsIoInputCharSequenceInputStream *new_OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_(id<JavaLangCharSequence> s, JavaNioCharsetCharset *charset) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoInputCharSequenceInputStream, initWithJavaLangCharSequence_withJavaNioCharsetCharset_, s, charset)
}

OrgApacheCommonsIoInputCharSequenceInputStream *create_OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withJavaNioCharsetCharset_(id<JavaLangCharSequence> s, JavaNioCharsetCharset *charset) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoInputCharSequenceInputStream, initWithJavaLangCharSequence_withJavaNioCharsetCharset_, s, charset)
}

void OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_(OrgApacheCommonsIoInputCharSequenceInputStream *self, id<JavaLangCharSequence> s, NSString *charset) {
  OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_withInt_(self, s, charset, 2048);
}

OrgApacheCommonsIoInputCharSequenceInputStream *new_OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_(id<JavaLangCharSequence> s, NSString *charset) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoInputCharSequenceInputStream, initWithJavaLangCharSequence_withNSString_, s, charset)
}

OrgApacheCommonsIoInputCharSequenceInputStream *create_OrgApacheCommonsIoInputCharSequenceInputStream_initWithJavaLangCharSequence_withNSString_(id<JavaLangCharSequence> s, NSString *charset) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoInputCharSequenceInputStream, initWithJavaLangCharSequence_withNSString_, s, charset)
}

void OrgApacheCommonsIoInputCharSequenceInputStream_fillBuffer(OrgApacheCommonsIoInputCharSequenceInputStream *self) {
  [((JavaNioByteBuffer *) nil_chk(self->bbuf_)) compact];
  JavaNioCharsetCoderResult *result = [((JavaNioCharsetCharsetEncoder *) nil_chk(self->encoder_)) encodeWithJavaNioCharBuffer:self->cbuf_ withJavaNioByteBuffer:self->bbuf_ withBoolean:true];
  if ([((JavaNioCharsetCoderResult *) nil_chk(result)) isError]) {
    [result throwException];
  }
  [self->bbuf_ flip];
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoInputCharSequenceInputStream)
