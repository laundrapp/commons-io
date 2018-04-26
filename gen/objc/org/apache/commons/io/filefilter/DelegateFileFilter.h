//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/DelegateFileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterDelegateFileFilter")
#ifdef RESTRICT_OrgApacheCommonsIoFilefilterDelegateFileFilter
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterDelegateFileFilter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterDelegateFileFilter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFilefilterDelegateFileFilter

#if !defined (OrgApacheCommonsIoFilefilterDelegateFileFilter_) && (INCLUDE_ALL_OrgApacheCommonsIoFilefilterDelegateFileFilter || defined(INCLUDE_OrgApacheCommonsIoFilefilterDelegateFileFilter))
#define OrgApacheCommonsIoFilefilterDelegateFileFilter_

#define RESTRICT_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#define INCLUDE_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaIoFile;
@protocol JavaIoFileFilter;
@protocol JavaIoFilenameFilter;

/*!
 @brief This class turns a Java FileFilter or FilenameFilter into an IO FileFilter.
 @since 1.0
 @version $Id$
 - seealso: FileFilterUtils#asFileFilter(FileFilter)
 - seealso: FileFilterUtils#asFileFilter(FilenameFilter)
 */
@interface OrgApacheCommonsIoFilefilterDelegateFileFilter : OrgApacheCommonsIoFilefilterAbstractFileFilter < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a delegate file filter around an existing FileFilter.
 @param filter the filter to decorate
 */
- (instancetype)initWithJavaIoFileFilter:(id<JavaIoFileFilter>)filter;

/*!
 @brief Constructs a delegate file filter around an existing FilenameFilter.
 @param filter the filter to decorate
 */
- (instancetype)initWithJavaIoFilenameFilter:(id<JavaIoFilenameFilter>)filter;

/*!
 @brief Checks the filter.
 @param file the file to check
 @return true if the filter matches
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Checks the filter.
 @param dir the directory
 @param name the filename in the directory
 @return true if the filter matches
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)name;

/*!
 @brief Provide a String representaion of this file filter.
 @return a String representaion
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoFilefilterDelegateFileFilter)

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterDelegateFileFilter_initWithJavaIoFilenameFilter_(OrgApacheCommonsIoFilefilterDelegateFileFilter *self, id<JavaIoFilenameFilter> filter);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterDelegateFileFilter *new_OrgApacheCommonsIoFilefilterDelegateFileFilter_initWithJavaIoFilenameFilter_(id<JavaIoFilenameFilter> filter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterDelegateFileFilter *create_OrgApacheCommonsIoFilefilterDelegateFileFilter_initWithJavaIoFilenameFilter_(id<JavaIoFilenameFilter> filter);

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterDelegateFileFilter_initWithJavaIoFileFilter_(OrgApacheCommonsIoFilefilterDelegateFileFilter *self, id<JavaIoFileFilter> filter);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterDelegateFileFilter *new_OrgApacheCommonsIoFilefilterDelegateFileFilter_initWithJavaIoFileFilter_(id<JavaIoFileFilter> filter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterDelegateFileFilter *create_OrgApacheCommonsIoFilefilterDelegateFileFilter_initWithJavaIoFileFilter_(id<JavaIoFileFilter> filter);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFilefilterDelegateFileFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterDelegateFileFilter")
