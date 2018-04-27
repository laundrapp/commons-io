//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/FileCleaner.java
//

#include "J2ObjC_source.h"
#include "java/io/File.h"
#include "org/apache/commons/io/FileCleaner.h"
#include "org/apache/commons/io/FileCleaningTracker.h"
#include "org/apache/commons/io/FileDeleteStrategy.h"

J2OBJC_INITIALIZED_DEFN(OrgApacheCommonsIoFileCleaner)

OrgApacheCommonsIoFileCleaningTracker *OrgApacheCommonsIoFileCleaner_theInstance;

@implementation OrgApacheCommonsIoFileCleaner

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype __nonnull)init {
  OrgApacheCommonsIoFileCleaner_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (void)trackWithJavaIoFile:(JavaIoFile *)file
                     withId:(id)marker {
  OrgApacheCommonsIoFileCleaner_trackWithJavaIoFile_withId_(file, marker);
}

+ (void)trackWithJavaIoFile:(JavaIoFile *)file
                     withId:(id)marker
withOrgApacheCommonsIoFileDeleteStrategy:(OrgApacheCommonsIoFileDeleteStrategy *)deleteStrategy {
  OrgApacheCommonsIoFileCleaner_trackWithJavaIoFile_withId_withOrgApacheCommonsIoFileDeleteStrategy_(file, marker, deleteStrategy);
}

+ (void)trackWithNSString:(NSString *)path
                   withId:(id)marker {
  OrgApacheCommonsIoFileCleaner_trackWithNSString_withId_(path, marker);
}

+ (void)trackWithNSString:(NSString *)path
                   withId:(id)marker
withOrgApacheCommonsIoFileDeleteStrategy:(OrgApacheCommonsIoFileDeleteStrategy *)deleteStrategy {
  OrgApacheCommonsIoFileCleaner_trackWithNSString_withId_withOrgApacheCommonsIoFileDeleteStrategy_(path, marker, deleteStrategy);
}

+ (jint)getTrackCount {
  return OrgApacheCommonsIoFileCleaner_getTrackCount();
}

+ (void)exitWhenFinished {
  OrgApacheCommonsIoFileCleaner_exitWhenFinished();
}

+ (OrgApacheCommonsIoFileCleaningTracker *)getInstance {
  return OrgApacheCommonsIoFileCleaner_getInstance();
}

+ (void)initialize {
  if (self == [OrgApacheCommonsIoFileCleaner class]) {
    JreStrongAssignAndConsume(&OrgApacheCommonsIoFileCleaner_theInstance, new_OrgApacheCommonsIoFileCleaningTracker_init());
    J2OBJC_SET_INITIALIZED(OrgApacheCommonsIoFileCleaner)
  }
}

@end

void OrgApacheCommonsIoFileCleaner_init(OrgApacheCommonsIoFileCleaner *self) {
  NSObject_init(self);
}

OrgApacheCommonsIoFileCleaner *new_OrgApacheCommonsIoFileCleaner_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFileCleaner, init)
}

OrgApacheCommonsIoFileCleaner *create_OrgApacheCommonsIoFileCleaner_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFileCleaner, init)
}

void OrgApacheCommonsIoFileCleaner_trackWithJavaIoFile_withId_(JavaIoFile *file, id marker) {
  OrgApacheCommonsIoFileCleaner_initialize();
  [((OrgApacheCommonsIoFileCleaningTracker *) nil_chk(OrgApacheCommonsIoFileCleaner_theInstance)) trackWithJavaIoFile:file withId:marker];
}

void OrgApacheCommonsIoFileCleaner_trackWithJavaIoFile_withId_withOrgApacheCommonsIoFileDeleteStrategy_(JavaIoFile *file, id marker, OrgApacheCommonsIoFileDeleteStrategy *deleteStrategy) {
  OrgApacheCommonsIoFileCleaner_initialize();
  [((OrgApacheCommonsIoFileCleaningTracker *) nil_chk(OrgApacheCommonsIoFileCleaner_theInstance)) trackWithJavaIoFile:file withId:marker withOrgApacheCommonsIoFileDeleteStrategy:deleteStrategy];
}

void OrgApacheCommonsIoFileCleaner_trackWithNSString_withId_(NSString *path, id marker) {
  OrgApacheCommonsIoFileCleaner_initialize();
  [((OrgApacheCommonsIoFileCleaningTracker *) nil_chk(OrgApacheCommonsIoFileCleaner_theInstance)) trackWithNSString:path withId:marker];
}

void OrgApacheCommonsIoFileCleaner_trackWithNSString_withId_withOrgApacheCommonsIoFileDeleteStrategy_(NSString *path, id marker, OrgApacheCommonsIoFileDeleteStrategy *deleteStrategy) {
  OrgApacheCommonsIoFileCleaner_initialize();
  [((OrgApacheCommonsIoFileCleaningTracker *) nil_chk(OrgApacheCommonsIoFileCleaner_theInstance)) trackWithNSString:path withId:marker withOrgApacheCommonsIoFileDeleteStrategy:deleteStrategy];
}

jint OrgApacheCommonsIoFileCleaner_getTrackCount() {
  OrgApacheCommonsIoFileCleaner_initialize();
  return [((OrgApacheCommonsIoFileCleaningTracker *) nil_chk(OrgApacheCommonsIoFileCleaner_theInstance)) getTrackCount];
}

void OrgApacheCommonsIoFileCleaner_exitWhenFinished() {
  OrgApacheCommonsIoFileCleaner_initialize();
  @synchronized(OrgApacheCommonsIoFileCleaner_class_()) {
    [((OrgApacheCommonsIoFileCleaningTracker *) nil_chk(OrgApacheCommonsIoFileCleaner_theInstance)) exitWhenFinished];
  }
}

OrgApacheCommonsIoFileCleaningTracker *OrgApacheCommonsIoFileCleaner_getInstance() {
  OrgApacheCommonsIoFileCleaner_initialize();
  return OrgApacheCommonsIoFileCleaner_theInstance;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoFileCleaner)
