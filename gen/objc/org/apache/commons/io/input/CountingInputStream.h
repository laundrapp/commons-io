//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/CountingInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoInputCountingInputStream")
#ifdef RESTRICT_OrgApacheCommonsIoInputCountingInputStream
#define INCLUDE_ALL_OrgApacheCommonsIoInputCountingInputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoInputCountingInputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoInputCountingInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoInputCountingInputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoInputCountingInputStream || defined(INCLUDE_OrgApacheCommonsIoInputCountingInputStream))
#define OrgApacheCommonsIoInputCountingInputStream_

#define RESTRICT_OrgApacheCommonsIoInputProxyInputStream 1
#define INCLUDE_OrgApacheCommonsIoInputProxyInputStream 1
#include "org/apache/commons/io/input/ProxyInputStream.h"

@class JavaIoInputStream;

/*!
 @brief A decorating input stream that counts the number of bytes that have passed
  through the stream so far.
 <p>
  A typical use case would be during debugging, to ensure that data is being
  read as expected.
 @version $Id$
 */
@interface OrgApacheCommonsIoInputCountingInputStream : OrgApacheCommonsIoInputProxyInputStream

#pragma mark Public

/*!
 @brief Constructs a new CountingInputStream.
 @param inArg the InputStream to delegate to
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief The number of bytes that have passed through this stream.
 <p>
  NOTE: This method is an alternative for <code>getCount()</code>
  and was added because that method returns an integer which will
  result in incorrect count for files over 2GB.
 @return the number of bytes accumulated
 @since 1.3
 */
- (jlong)getByteCount;

/*!
 @brief The number of bytes that have passed through this stream.
 <p>
  NOTE: From v1.3 this method throws an ArithmeticException if the
  count is greater than can be expressed by an <code>int</code>.
  See <code>getByteCount()</code> for a method using a <code>long</code>.
 @return the number of bytes accumulated
 @throw ArithmeticExceptionif the byte count is too large
 */
- (jint)getCount;

/*!
 @brief Set the byte count back to 0.
 <p>
  NOTE: This method is an alternative for <code>resetCount()</code>
  and was added because that method returns an integer which will
  result in incorrect count for files over 2GB.
 @return the count previous to resetting
 @since 1.3
 */
- (jlong)resetByteCount;

/*!
 @brief Set the byte count back to 0.
 <p>
  NOTE: From v1.3 this method throws an ArithmeticException if the
  count is greater than can be expressed by an <code>int</code>.
  See <code>resetByteCount()</code> for a method using a <code>long</code>.
 @return the count previous to resetting
 @throw ArithmeticExceptionif the byte count is too large
 */
- (jint)resetCount;

/*!
 @brief Skips the stream over the specified number of bytes, adding the skipped
  amount to the count.
 @param length the number of bytes to skip
 @return the actual number of bytes skipped
 @throw IOExceptionif an I/O error occurs
 - seealso: java.io.InputStream
 */
- (jlong)skipWithLong:(jlong)length;

#pragma mark Protected

/*!
 @brief Adds the number of read bytes to the count.
 @param n number of bytes read, or -1 if no more bytes are available
 @since 2.0
 */
- (void)afterReadWithInt:(jint)n;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoInputCountingInputStream)

FOUNDATION_EXPORT void OrgApacheCommonsIoInputCountingInputStream_initWithJavaIoInputStream_(OrgApacheCommonsIoInputCountingInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT OrgApacheCommonsIoInputCountingInputStream *new_OrgApacheCommonsIoInputCountingInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputCountingInputStream *create_OrgApacheCommonsIoInputCountingInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoInputCountingInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoInputCountingInputStream")
