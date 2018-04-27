//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/FileCleaner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFileCleaner")
#ifdef RESTRICT_OrgApacheCommonsIoFileCleaner
#define INCLUDE_ALL_OrgApacheCommonsIoFileCleaner 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFileCleaner 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFileCleaner

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoFileCleaner_) && (INCLUDE_ALL_OrgApacheCommonsIoFileCleaner || defined(INCLUDE_OrgApacheCommonsIoFileCleaner))
#define OrgApacheCommonsIoFileCleaner_

@class JavaIoFile;
@class OrgApacheCommonsIoFileCleaningTracker;
@class OrgApacheCommonsIoFileDeleteStrategy;

/*!
 @brief Keeps track of files awaiting deletion, and deletes them when an associated
  marker object is reclaimed by the garbage collector.
 <p>
  This utility creates a background thread to handle file deletion.
  Each file to be deleted is registered with a handler object.
  When the handler object is garbage collected, the file is deleted. 
 <p>
  In an environment with multiple class loaders (a servlet container, for
  example), you should consider stopping the background thread if it is no
  longer needed. This is done by invoking the method 
 <code>exitWhenFinished</code>, typically in 
 <code>javax.servlet.ServletContextListener</code> or similar.
 @version $Id$
 */
@interface OrgApacheCommonsIoFileCleaner : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Call this method to cause the file cleaner thread to terminate when
  there are no more objects being tracked for deletion.
 <p>
  In a simple environment, you don't need this method as the file cleaner
  thread will simply exit when the JVM exits. In a more complex environment,
  with multiple class loaders (such as an application server), you should be
  aware that the file cleaner thread will continue running even if the class
  loader it was started from terminates. This can consitute a memory leak. 
 <p>
  For example, suppose that you have developed a web application, which
  contains the commons-io jar file in your WEB-INF/lib directory. In other
  words, the FileCleaner class is loaded through the class loader of your
  web application. If the web application is terminated, but the servlet
  container is still running, then the file cleaner thread will still exist,
  posing a memory leak. 
 <p>
  This method allows the thread to be terminated. Simply call this method
  in the resource cleanup code, such as <code>javax.servlet.ServletContextListener</code>.
  One called, no new objects can be tracked by the file cleaner.
 */
+ (void)exitWhenFinished;

/*!
 @brief Returns the singleton instance, which is used by the deprecated, static methods.
 This is mainly useful for code, which wants to support the new 
 <code>FileCleaningTracker</code> class while maintain compatibility with the
  deprecated <code>FileCleaner</code>.
 @return the singleton instance
 */
+ (OrgApacheCommonsIoFileCleaningTracker *)getInstance;

/*!
 @brief Retrieve the number of files currently being tracked, and therefore
  awaiting deletion.
 @return the number of files being tracked
 */
+ (jint)getTrackCount;

/*!
 @brief Track the specified file, using the provided marker, deleting the file
  when the marker instance is garbage collected.
 The <code>normal</code> deletion strategy will be used.
 @param file the file to be tracked, not null
 @param marker the marker object used to track the file, not null
 @throw NullPointerExceptionif the file is null
 */
+ (void)trackWithJavaIoFile:(JavaIoFile *)file
                     withId:(id)marker;

/*!
 @brief Track the specified file, using the provided marker, deleting the file
  when the marker instance is garbage collected.
 The speified deletion strategy is used.
 @param file the file to be tracked, not null
 @param marker the marker object used to track the file, not null
 @param deleteStrategy the strategy to delete the file, null means normal
 @throw NullPointerExceptionif the file is null
 */
+ (void)trackWithJavaIoFile:(JavaIoFile *)file
                     withId:(id)marker
withOrgApacheCommonsIoFileDeleteStrategy:(OrgApacheCommonsIoFileDeleteStrategy *)deleteStrategy;

/*!
 @brief Track the specified file, using the provided marker, deleting the file
  when the marker instance is garbage collected.
 The <code>normal</code> deletion strategy will be used.
 @param path the full path to the file to be tracked, not null
 @param marker the marker object used to track the file, not null
 @throw NullPointerExceptionif the path is null
 */
+ (void)trackWithNSString:(NSString *)path
                   withId:(id)marker;

/*!
 @brief Track the specified file, using the provided marker, deleting the file
  when the marker instance is garbage collected.
 The speified deletion strategy is used.
 @param path the full path to the file to be tracked, not null
 @param marker the marker object used to track the file, not null
 @param deleteStrategy the strategy to delete the file, null means normal
 @throw NullPointerExceptionif the path is null
 */
+ (void)trackWithNSString:(NSString *)path
                   withId:(id)marker
withOrgApacheCommonsIoFileDeleteStrategy:(OrgApacheCommonsIoFileDeleteStrategy *)deleteStrategy;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsIoFileCleaner)

/*!
 @brief The instance to use for the deprecated, static methods.
 */
inline OrgApacheCommonsIoFileCleaningTracker *OrgApacheCommonsIoFileCleaner_get_theInstance(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsIoFileCleaningTracker *OrgApacheCommonsIoFileCleaner_theInstance;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoFileCleaner, theInstance, OrgApacheCommonsIoFileCleaningTracker *)

FOUNDATION_EXPORT void OrgApacheCommonsIoFileCleaner_init(OrgApacheCommonsIoFileCleaner *self);

FOUNDATION_EXPORT OrgApacheCommonsIoFileCleaner *new_OrgApacheCommonsIoFileCleaner_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFileCleaner *create_OrgApacheCommonsIoFileCleaner_init(void);

FOUNDATION_EXPORT void OrgApacheCommonsIoFileCleaner_trackWithJavaIoFile_withId_(JavaIoFile *file, id marker);

FOUNDATION_EXPORT void OrgApacheCommonsIoFileCleaner_trackWithJavaIoFile_withId_withOrgApacheCommonsIoFileDeleteStrategy_(JavaIoFile *file, id marker, OrgApacheCommonsIoFileDeleteStrategy *deleteStrategy);

FOUNDATION_EXPORT void OrgApacheCommonsIoFileCleaner_trackWithNSString_withId_(NSString *path, id marker);

FOUNDATION_EXPORT void OrgApacheCommonsIoFileCleaner_trackWithNSString_withId_withOrgApacheCommonsIoFileDeleteStrategy_(NSString *path, id marker, OrgApacheCommonsIoFileDeleteStrategy *deleteStrategy);

FOUNDATION_EXPORT jint OrgApacheCommonsIoFileCleaner_getTrackCount(void);

FOUNDATION_EXPORT void OrgApacheCommonsIoFileCleaner_exitWhenFinished(void);

FOUNDATION_EXPORT OrgApacheCommonsIoFileCleaningTracker *OrgApacheCommonsIoFileCleaner_getInstance(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFileCleaner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFileCleaner")
