//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/ProxyWriter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputProxyWriter")
#ifdef RESTRICT_OrgApacheCommonsIoOutputProxyWriter
#define INCLUDE_ALL_OrgApacheCommonsIoOutputProxyWriter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoOutputProxyWriter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoOutputProxyWriter

#if !defined (OrgApacheCommonsIoOutputProxyWriter_) && (INCLUDE_ALL_OrgApacheCommonsIoOutputProxyWriter || defined(INCLUDE_OrgApacheCommonsIoOutputProxyWriter))
#define OrgApacheCommonsIoOutputProxyWriter_

#define RESTRICT_JavaIoFilterWriter 1
#define INCLUDE_JavaIoFilterWriter 1
#include "java/io/FilterWriter.h"

@class IOSCharArray;
@class JavaIoIOException;
@class JavaIoWriter;
@protocol JavaLangCharSequence;

/*!
 @brief A Proxy stream which acts as expected, that is it passes the method 
  calls on to the proxied stream and doesn't change which methods are 
  being called.It is an alternative base class to FilterWriter
  to increase reusability, because FilterWriter changes the 
  methods being called, such as write(char[]) to write(char[], int, int)
  and write(String) to write(String, int, int).
 @version $Id$
 */
@interface OrgApacheCommonsIoOutputProxyWriter : JavaIoFilterWriter

#pragma mark Public

/*!
 @brief Constructs a new ProxyWriter.
 @param proxy the Writer to delegate to
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)proxy;

/*!
 @brief Invokes the delegate's <code>append(char)</code> method.
 @param c The character to write
 @return this writer
 @throw IOExceptionif an I/O error occurs
 @since 2.0
 */
- (JavaIoWriter *)appendWithChar:(jchar)c;

/*!
 @brief Invokes the delegate's <code>append(CharSequence)</code> method.
 @param csq The character sequence to write
 @return this writer
 @throw IOExceptionif an I/O error occurs
 @since 2.0
 */
- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Invokes the delegate's <code>append(CharSequence, int, int)</code> method.
 @param csq The character sequence to write
 @param start The index of the first character to write
 @param end The index of the first character to write (exclusive)
 @return this writer
 @throw IOExceptionif an I/O error occurs
 @since 2.0
 */
- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                         withInt:(jint)start
                                         withInt:(jint)end;

/*!
 @brief Invokes the delegate's <code>close()</code> method.
 @throw IOExceptionif an I/O error occurs
 */
- (void)close;

/*!
 @brief Invokes the delegate's <code>flush()</code> method.
 @throw IOExceptionif an I/O error occurs
 */
- (void)flush;

/*!
 @brief Invokes the delegate's <code>write(char[])</code> method.
 @param chr the characters to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithCharArray:(IOSCharArray *)chr;

/*!
 @brief Invokes the delegate's <code>write(char[], int, int)</code> method.
 @param chr the characters to write
 @param st The start offset
 @param len The number of characters to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithCharArray:(IOSCharArray *)chr
                   withInt:(jint)st
                   withInt:(jint)len;

/*!
 @brief Invokes the delegate's <code>write(int)</code> method.
 @param idx the character to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithInt:(jint)idx;

/*!
 @brief Invokes the delegate's <code>write(String)</code> method.
 @param str the string to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithNSString:(NSString *)str;

/*!
 @brief Invokes the delegate's <code>write(String)</code> method.
 @param str the string to write
 @param st The start offset
 @param len The number of characters to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)st
                  withInt:(jint)len;

#pragma mark Protected

/*!
 @brief Invoked by the write methods after the proxied call has returned
  successfully.The number of chars written (1 for the 
 <code>write(int)</code> method, buffer length for <code>write(char[])</code>,
  etc.) is given as an argument.
 <p>
  Subclasses can override this method to add common post-processing
  functionality without having to override all the write methods.
  The default implementation does nothing.
 @since 2.0
 @param n number of chars written
 @throw IOExceptionif the post-processing fails
 */
- (void)afterWriteWithInt:(jint)n;

/*!
 @brief Invoked by the write methods before the call is proxied.The number
  of chars to be written (1 for the <code>write(int)</code> method, buffer
  length for <code>write(char[])</code>, etc.) is given as an argument.
 <p>
  Subclasses can override this method to add common pre-processing
  functionality without having to override all the write methods.
  The default implementation does nothing.
 @since 2.0
 @param n number of chars to be written
 @throw IOExceptionif the pre-processing fails
 */
- (void)beforeWriteWithInt:(jint)n;

/*!
 @brief Handle any IOExceptions thrown.
 <p>
  This method provides a point to implement custom exception
  handling. The default behaviour is to re-throw the exception.
 @param e The IOException thrown
 @throw IOExceptionif an I/O error occurs
 @since 2.0
 */
- (void)handleIOExceptionWithJavaIoIOException:(JavaIoIOException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoOutputProxyWriter)

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputProxyWriter_initWithJavaIoWriter_(OrgApacheCommonsIoOutputProxyWriter *self, JavaIoWriter *proxy);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputProxyWriter *new_OrgApacheCommonsIoOutputProxyWriter_initWithJavaIoWriter_(JavaIoWriter *proxy) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputProxyWriter *create_OrgApacheCommonsIoOutputProxyWriter_initWithJavaIoWriter_(JavaIoWriter *proxy);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoOutputProxyWriter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputProxyWriter")
