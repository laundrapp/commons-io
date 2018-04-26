//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/ProxyReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoInputProxyReader")
#ifdef RESTRICT_OrgApacheCommonsIoInputProxyReader
#define INCLUDE_ALL_OrgApacheCommonsIoInputProxyReader 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoInputProxyReader 1
#endif
#undef RESTRICT_OrgApacheCommonsIoInputProxyReader

#if !defined (OrgApacheCommonsIoInputProxyReader_) && (INCLUDE_ALL_OrgApacheCommonsIoInputProxyReader || defined(INCLUDE_OrgApacheCommonsIoInputProxyReader))
#define OrgApacheCommonsIoInputProxyReader_

#define RESTRICT_JavaIoFilterReader 1
#define INCLUDE_JavaIoFilterReader 1
#include "java/io/FilterReader.h"

@class IOSCharArray;
@class JavaIoIOException;
@class JavaIoReader;
@class JavaNioCharBuffer;

/*!
 @brief A Proxy stream which acts as expected, that is it passes the method 
  calls on to the proxied stream and doesn't change which methods are 
  being called.
 <p>
  It is an alternative base class to FilterReader
  to increase reusability, because FilterReader changes the 
  methods being called, such as read(char[]) to read(char[], int, int).
 @version $Id$
 */
@interface OrgApacheCommonsIoInputProxyReader : JavaIoFilterReader

#pragma mark Public

/*!
 @brief Constructs a new ProxyReader.
 @param proxy the Reader to delegate to
 */
- (instancetype)initWithJavaIoReader:(JavaIoReader *)proxy;

/*!
 @brief Invokes the delegate's <code>close()</code> method.
 @throw IOExceptionif an I/O error occurs
 */
- (void)close;

/*!
 @brief Invokes the delegate's <code>mark(int)</code> method.
 @param idx read ahead limit
 @throw IOExceptionif an I/O error occurs
 */
- (void)markWithInt:(jint)idx;

/*!
 @brief Invokes the delegate's <code>markSupported()</code> method.
 @return true if mark is supported, otherwise false
 */
- (jboolean)markSupported;

/*!
 @brief Invokes the delegate's <code>read()</code> method.
 @return the character read or -1 if the end of stream
 @throw IOExceptionif an I/O error occurs
 */
- (jint)read;

/*!
 @brief Invokes the delegate's <code>read(char[])</code> method.
 @param chr the buffer to read the characters into
 @return the number of characters read or -1 if the end of stream
 @throw IOExceptionif an I/O error occurs
 */
- (jint)readWithCharArray:(IOSCharArray *)chr;

/*!
 @brief Invokes the delegate's <code>read(char[], int, int)</code> method.
 @param chr the buffer to read the characters into
 @param st The start offset
 @param len The number of bytes to read
 @return the number of characters read or -1 if the end of stream
 @throw IOExceptionif an I/O error occurs
 */
- (jint)readWithCharArray:(IOSCharArray *)chr
                  withInt:(jint)st
                  withInt:(jint)len;

/*!
 @brief Invokes the delegate's <code>read(CharBuffer)</code> method.
 @param target the char buffer to read the characters into
 @return the number of characters read or -1 if the end of stream
 @throw IOExceptionif an I/O error occurs
 @since 2.0
 */
- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;

/*!
 @brief Invokes the delegate's <code>ready()</code> method.
 @return true if the stream is ready to be read
 @throw IOExceptionif an I/O error occurs
 */
- (jboolean)ready;

/*!
 @brief Invokes the delegate's <code>reset()</code> method.
 @throw IOExceptionif an I/O error occurs
 */
- (void)reset;

/*!
 @brief Invokes the delegate's <code>skip(long)</code> method.
 @param ln the number of bytes to skip
 @return the number of bytes to skipped or -1 if the end of stream
 @throw IOExceptionif an I/O error occurs
 */
- (jlong)skipWithLong:(jlong)ln;

#pragma mark Protected

/*!
 @brief Invoked by the read methods after the proxied call has returned
  successfully.The number of chars returned to the caller (or -1 if
  the end of stream was reached) is given as an argument.
 <p>
  Subclasses can override this method to add common post-processing
  functionality without having to override all the read methods.
  The default implementation does nothing. 
 <p>
  Note this method is <em>not</em> called from <code>skip(long)</code> or 
 <code>reset()</code>. You need to explicitly override those methods if
  you want to add post-processing steps also to them.
 @since 2.0
 @param n number of chars read, or -1 if the end of stream was reached
 @throw IOExceptionif the post-processing fails
 */
- (void)afterReadWithInt:(jint)n;

/*!
 @brief Invoked by the read methods before the call is proxied.The number
  of chars that the caller wanted to read (1 for the <code>read()</code>
  method, buffer length for <code>read(char[])</code>, etc.) is given as
  an argument.
 <p>
  Subclasses can override this method to add common pre-processing
  functionality without having to override all the read methods.
  The default implementation does nothing. 
 <p>
  Note this method is <em>not</em> called from <code>skip(long)</code> or 
 <code>reset()</code>. You need to explicitly override those methods if
  you want to add pre-processing steps also to them.
 @since 2.0
 @param n number of chars that the caller asked to be read
 @throw IOExceptionif the pre-processing fails
 */
- (void)beforeReadWithInt:(jint)n;

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoInputProxyReader)

FOUNDATION_EXPORT void OrgApacheCommonsIoInputProxyReader_initWithJavaIoReader_(OrgApacheCommonsIoInputProxyReader *self, JavaIoReader *proxy);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoInputProxyReader)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoInputProxyReader")
