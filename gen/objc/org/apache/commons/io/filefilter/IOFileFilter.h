//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/IOFileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterIOFileFilter")
#ifdef RESTRICT_OrgApacheCommonsIoFilefilterIOFileFilter
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterIOFileFilter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterIOFileFilter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFilefilterIOFileFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoFilefilterIOFileFilter_) && (INCLUDE_ALL_OrgApacheCommonsIoFilefilterIOFileFilter || defined(INCLUDE_OrgApacheCommonsIoFilefilterIOFileFilter))
#define OrgApacheCommonsIoFilefilterIOFileFilter_

#define RESTRICT_JavaIoFileFilter 1
#define INCLUDE_JavaIoFileFilter 1
#include "java/io/FileFilter.h"

#define RESTRICT_JavaIoFilenameFilter 1
#define INCLUDE_JavaIoFilenameFilter 1
#include "java/io/FilenameFilter.h"

@class JavaIoFile;

/*!
 @brief An interface which brings the FileFilter and FilenameFilter 
  interfaces together.
 @since 1.0
 @version $Id$
 */
@protocol OrgApacheCommonsIoFilefilterIOFileFilter < JavaIoFileFilter, JavaIoFilenameFilter, JavaObject >

/*!
 @brief Checks to see if the File should be accepted by this filter.
 <p>
  Defined in <code>java.io.FileFilter</code>.
 @param file the File to check
 @return true if this file matches the test
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Checks to see if the File should be accepted by this filter.
 <p>
  Defined in <code>java.io.FilenameFilter</code>.
 @param dir the directory File to check
 @param name the filename within the directory to check
 @return true if this file matches the test
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoFilefilterIOFileFilter)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFilefilterIOFileFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterIOFileFilter")
