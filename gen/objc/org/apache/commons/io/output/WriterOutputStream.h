//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/WriterOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputWriterOutputStream")
#ifdef RESTRICT_OrgApacheCommonsIoOutputWriterOutputStream
#define INCLUDE_ALL_OrgApacheCommonsIoOutputWriterOutputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoOutputWriterOutputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoOutputWriterOutputStream

#if !defined (OrgApacheCommonsIoOutputWriterOutputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoOutputWriterOutputStream || defined(INCLUDE_OrgApacheCommonsIoOutputWriterOutputStream))
#define OrgApacheCommonsIoOutputWriterOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

@class IOSByteArray;
@class JavaIoWriter;
@class JavaNioCharsetCharset;
@class JavaNioCharsetCharsetDecoder;

/*!
 @brief <code>OutputStream</code> implementation that transforms a byte stream to a
  character stream using a specified charset encoding and writes the resulting
  stream to a <code>Writer</code>.The stream is transformed using a 
 <code>CharsetDecoder</code> object, guaranteeing that all charset
  encodings supported by the JRE are handled correctly.
 <p>
  The output of the <code>CharsetDecoder</code> is buffered using a fixed size buffer.
  This implies that the data is written to the underlying <code>Writer</code> in chunks
  that are no larger than the size of this buffer. By default, the buffer is
  flushed only when it overflows or when <code>flush()</code> or <code>close()</code>
  is called. In general there is therefore no need to wrap the underlying <code>Writer</code>
  in a <code>java.io.BufferedWriter</code>. <code>WriterOutputStream</code> can also
  be instructed to flush the buffer after each write operation. In this case, all
  available data is written immediately to the underlying <code>Writer</code>, implying that
  the current position of the <code>Writer</code> is correlated to the current position
  of the <code>WriterOutputStream</code>.
  <p>
  <code>WriterOutputStream</code> implements the inverse transformation of <code>java.io.OutputStreamWriter</code>;
  in the following example, writing to <tt>out2</tt> would have the same result as writing to 
 <tt>out</tt> directly (provided that the byte sequence is legal with respect to the
  charset encoding): 
 @code

  OutputStream out = ...
  Charset cs = ...
  OutputStreamWriter writer = new OutputStreamWriter(out, cs);
  WriterOutputStream out2 = new WriterOutputStream(writer, cs);
@endcode
  <code>WriterOutputStream</code> implements the same transformation as <code>java.io.InputStreamReader</code>,
  except that the control flow is reversed: both classes transform a byte stream
  into a character stream, but <code>java.io.InputStreamReader</code> pulls data from the underlying stream,
  while <code>WriterOutputStream</code> pushes it to the underlying stream. 
 <p>
  Note that while there are use cases where there is no alternative to using
  this class, very often the need to use this class is an indication of a flaw
  in the design of the code. This class is typically used in situations where an existing
  API only accepts an <code>OutputStream</code> object, but where the stream is known to represent
  character data that must be decoded for further use. 
 <p>
  Instances of <code>WriterOutputStream</code> are not thread safe.
 - seealso: org.apache.commons.io.input.ReaderInputStream
 @since 2.0
 */
@interface OrgApacheCommonsIoOutputWriterOutputStream : JavaIoOutputStream

#pragma mark Public

/*!
 @brief Constructs a new <code>WriterOutputStream</code> that uses the default character encoding
  and with a default output buffer size of 1024 characters.The output buffer will only
  be flushed when it overflows or when <code>flush()</code> or <code>close()</code> is called.
 @param writer the target <code>Writer</code>
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer;

/*!
 @brief Constructs a new <code>WriterOutputStream</code> with a default output buffer size of
  1024 characters.The output buffer will only be flushed when it overflows or when 
 <code>flush()</code> or <code>close()</code> is called.
 @param writer the target <code>Writer</code>
 @param charset the charset encoding
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer
           withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

/*!
 @brief Constructs a new <code>WriterOutputStream</code>.
 @param writer the target <code>Writer</code>
 @param charset the charset encoding
 @param bufferSize the size of the output buffer in number of characters
 @param writeImmediately If  <tt> true </tt>  the output buffer will be flushed after each
                           write operation, i.e. all available data will be written to the                          underlying 
 <code>Writer</code>  immediately. If  <tt> false </tt> , the                          output buffer will only be flushed when it overflows or when
                           
 <code>flush()</code>  or <code>close()</code>  is called.
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer
           withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset
                             withInt:(jint)bufferSize
                         withBoolean:(jboolean)writeImmediately;

/*!
 @brief Constructs a new <code>WriterOutputStream</code> with a default output buffer size of
  1024 characters.The output buffer will only be flushed when it overflows or when 
 <code>flush()</code> or <code>close()</code> is called.
 @param writer the target <code>Writer</code>
 @param decoder the charset decoder
 @since 2.1
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer
    withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)decoder;

/*!
 @brief Constructs a new <code>WriterOutputStream</code>.
 @param writer the target <code>Writer</code>
 @param decoder the charset decoder
 @param bufferSize the size of the output buffer in number of characters
 @param writeImmediately If  <tt> true </tt>  the output buffer will be flushed after each
                           write operation, i.e. all available data will be written to the                          underlying 
 <code>Writer</code>  immediately. If  <tt> false </tt> , the                          output buffer will only be flushed when it overflows or when
                           
 <code>flush()</code>  or <code>close()</code>  is called.
 @since 2.1
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer
    withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)decoder
                             withInt:(jint)bufferSize
                         withBoolean:(jboolean)writeImmediately;

/*!
 @brief Constructs a new <code>WriterOutputStream</code> with a default output buffer size of
  1024 characters.The output buffer will only be flushed when it overflows or when 
 <code>flush()</code> or <code>close()</code> is called.
 @param writer the target <code>Writer</code>
 @param charsetName the name of the charset encoding
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer
                        withNSString:(NSString *)charsetName;

/*!
 @brief Constructs a new <code>WriterOutputStream</code>.
 @param writer the target <code>Writer</code>
 @param charsetName the name of the charset encoding
 @param bufferSize the size of the output buffer in number of characters
 @param writeImmediately If  <tt> true </tt>  the output buffer will be flushed after each
                           write operation, i.e. all available data will be written to the                          underlying 
 <code>Writer</code>  immediately. If  <tt> false </tt> , the                          output buffer will only be flushed when it overflows or when
                           
 <code>flush()</code>  or <code>close()</code>  is called.
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer
                        withNSString:(NSString *)charsetName
                             withInt:(jint)bufferSize
                         withBoolean:(jboolean)writeImmediately;

/*!
 @brief Close the stream.Any remaining content accumulated in the output buffer
  will be written to the underlying <code>Writer</code>.
 After that 
 <code>Writer.close()</code> will be called.
 @throw IOExceptionif an I/O error occurs
 */
- (void)close;

/*!
 @brief Flush the stream.Any remaining content accumulated in the output buffer
  will be written to the underlying <code>Writer</code>.
 After that 
 <code>Writer.flush()</code> will be called.
 @throw IOExceptionif an I/O error occurs
 */
- (void)flush;

/*!
 @brief Write bytes from the specified byte array to the stream.
 @param b the byte array containing the bytes to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithByteArray:(IOSByteArray *)b;

/*!
 @brief Write bytes from the specified byte array to the stream.
 @param b the byte array containing the bytes to write
 @param off the start offset in the byte array
 @param len the number of bytes to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Write a single byte to the stream.
 @param b the byte to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoOutputWriterOutputStream)

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharsetDecoder_(OrgApacheCommonsIoOutputWriterOutputStream *self, JavaIoWriter *writer, JavaNioCharsetCharsetDecoder *decoder);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *new_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharsetDecoder_(JavaIoWriter *writer, JavaNioCharsetCharsetDecoder *decoder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *create_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharsetDecoder_(JavaIoWriter *writer, JavaNioCharsetCharsetDecoder *decoder);

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharsetDecoder_withInt_withBoolean_(OrgApacheCommonsIoOutputWriterOutputStream *self, JavaIoWriter *writer, JavaNioCharsetCharsetDecoder *decoder, jint bufferSize, jboolean writeImmediately);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *new_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharsetDecoder_withInt_withBoolean_(JavaIoWriter *writer, JavaNioCharsetCharsetDecoder *decoder, jint bufferSize, jboolean writeImmediately) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *create_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharsetDecoder_withInt_withBoolean_(JavaIoWriter *writer, JavaNioCharsetCharsetDecoder *decoder, jint bufferSize, jboolean writeImmediately);

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharset_withInt_withBoolean_(OrgApacheCommonsIoOutputWriterOutputStream *self, JavaIoWriter *writer, JavaNioCharsetCharset *charset, jint bufferSize, jboolean writeImmediately);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *new_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharset_withInt_withBoolean_(JavaIoWriter *writer, JavaNioCharsetCharset *charset, jint bufferSize, jboolean writeImmediately) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *create_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharset_withInt_withBoolean_(JavaIoWriter *writer, JavaNioCharsetCharset *charset, jint bufferSize, jboolean writeImmediately);

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharset_(OrgApacheCommonsIoOutputWriterOutputStream *self, JavaIoWriter *writer, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *new_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharset_(JavaIoWriter *writer, JavaNioCharsetCharset *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *create_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withJavaNioCharsetCharset_(JavaIoWriter *writer, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withNSString_withInt_withBoolean_(OrgApacheCommonsIoOutputWriterOutputStream *self, JavaIoWriter *writer, NSString *charsetName, jint bufferSize, jboolean writeImmediately);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *new_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withNSString_withInt_withBoolean_(JavaIoWriter *writer, NSString *charsetName, jint bufferSize, jboolean writeImmediately) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *create_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withNSString_withInt_withBoolean_(JavaIoWriter *writer, NSString *charsetName, jint bufferSize, jboolean writeImmediately);

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withNSString_(OrgApacheCommonsIoOutputWriterOutputStream *self, JavaIoWriter *writer, NSString *charsetName);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *new_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withNSString_(JavaIoWriter *writer, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *create_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_withNSString_(JavaIoWriter *writer, NSString *charsetName);

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_(OrgApacheCommonsIoOutputWriterOutputStream *self, JavaIoWriter *writer);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *new_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_(JavaIoWriter *writer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputWriterOutputStream *create_OrgApacheCommonsIoOutputWriterOutputStream_initWithJavaIoWriter_(JavaIoWriter *writer);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoOutputWriterOutputStream)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputWriterOutputStream")
