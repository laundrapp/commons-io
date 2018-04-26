//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/BoundedInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoInputBoundedInputStream")
#ifdef RESTRICT_OrgApacheCommonsIoInputBoundedInputStream
#define INCLUDE_ALL_OrgApacheCommonsIoInputBoundedInputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoInputBoundedInputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoInputBoundedInputStream

#if !defined (OrgApacheCommonsIoInputBoundedInputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoInputBoundedInputStream || defined(INCLUDE_OrgApacheCommonsIoInputBoundedInputStream))
#define OrgApacheCommonsIoInputBoundedInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

@class IOSByteArray;

/*!
 @brief This is a stream that will only supply bytes up to a certain length - if its
  position goes above that, it will stop.
 <p>
  This is useful to wrap ServletInputStreams. The ServletInputStream will block
  if you try to read content from it that isn't there, because it doesn't know
  whether the content hasn't arrived yet or whether the content has finished.
  So, one of these, initialized with the Content-length sent in the
  ServletInputStream's header, will stop it blocking, providing it's been sent
  with a correct content length.
 @version $Id$
 @since 2.0
 */
@interface OrgApacheCommonsIoInputBoundedInputStream : JavaIoInputStream

#pragma mark Public

/*!
 @brief Creates a new <code>BoundedInputStream</code> that wraps the given input
  stream and is unlimited.
 @param inArg The wrapped input stream
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Creates a new <code>BoundedInputStream</code> that wraps the given input
  stream and limits it to a certain size.
 @param inArg The wrapped input stream
 @param size The maximum number of bytes to return
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                 withLong:(jlong)size;

/*!
 */
- (jint)available;

/*!
 @brief Invokes the delegate's <code>close()</code> method
  if <code>isPropagateClose()</code> is <code>true</code>.
 @throw IOExceptionif an I/O error occurs
 */
- (void)close;

/*!
 @brief Indicates whether the <code>close()</code> method
  should propagate to the underling <code>InputStream</code>.
 @return <code>true</code> if calling <code>close()</code>
  propagates to the <code>close()</code> method of the
  underlying stream or <code>false</code> if it does not.
 */
- (jboolean)isPropagateClose;

/*!
 @brief Invokes the delegate's <code>mark(int)</code> method.
 @param readlimit read ahead limit
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Invokes the delegate's <code>markSupported()</code> method.
 @return true if mark is supported, otherwise false
 */
- (jboolean)markSupported;

/*!
 @brief Invokes the delegate's <code>read()</code> method if
  the current position is less than the limit.
 @return the byte read or -1 if the end of stream or
  the limit has been reached.
 @throw IOExceptionif an I/O error occurs
 */
- (jint)read;

/*!
 @brief Invokes the delegate's <code>read(byte[])</code> method.
 @param b the buffer to read the bytes into
 @return the number of bytes read or -1 if the end of stream or
  the limit has been reached.
 @throw IOExceptionif an I/O error occurs
 */
- (jint)readWithByteArray:(IOSByteArray *)b;

/*!
 @brief Invokes the delegate's <code>read(byte[], int, int)</code> method.
 @param b the buffer to read the bytes into
 @param off The start offset
 @param len The number of bytes to read
 @return the number of bytes read or -1 if the end of stream or
  the limit has been reached.
 @throw IOExceptionif an I/O error occurs
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Invokes the delegate's <code>reset()</code> method.
 @throw IOExceptionif an I/O error occurs
 */
- (void)reset;

/*!
 @brief Set whether the <code>close()</code> method
  should propagate to the underling <code>InputStream</code>.
 @param propagateClose<code>true</code>  if calling  
 <code>close()</code>  propagates to the  <code> close() </code>  method of the underlying stream or
   <code>false</code>
   if it does not.
 */
- (void)setPropagateCloseWithBoolean:(jboolean)propagateClose;

/*!
 @brief Invokes the delegate's <code>skip(long)</code> method.
 @param n the number of bytes to skip
 @return the actual number of bytes skipped
 @throw IOExceptionif an I/O error occurs
 */
- (jlong)skipWithLong:(jlong)n;

/*!
 @brief Invokes the delegate's <code>toString()</code> method.
 @return the delegate's <code>toString()</code>
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoInputBoundedInputStream)

FOUNDATION_EXPORT void OrgApacheCommonsIoInputBoundedInputStream_initWithJavaIoInputStream_withLong_(OrgApacheCommonsIoInputBoundedInputStream *self, JavaIoInputStream *inArg, jlong size);

FOUNDATION_EXPORT OrgApacheCommonsIoInputBoundedInputStream *new_OrgApacheCommonsIoInputBoundedInputStream_initWithJavaIoInputStream_withLong_(JavaIoInputStream *inArg, jlong size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputBoundedInputStream *create_OrgApacheCommonsIoInputBoundedInputStream_initWithJavaIoInputStream_withLong_(JavaIoInputStream *inArg, jlong size);

FOUNDATION_EXPORT void OrgApacheCommonsIoInputBoundedInputStream_initWithJavaIoInputStream_(OrgApacheCommonsIoInputBoundedInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT OrgApacheCommonsIoInputBoundedInputStream *new_OrgApacheCommonsIoInputBoundedInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputBoundedInputStream *create_OrgApacheCommonsIoInputBoundedInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoInputBoundedInputStream)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoInputBoundedInputStream")
