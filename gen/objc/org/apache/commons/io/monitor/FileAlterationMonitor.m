//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/monitor/FileAlterationMonitor.java
//

#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Thread.h"
#include "java/util/List.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "org/apache/commons/io/monitor/FileAlterationMonitor.h"
#include "org/apache/commons/io/monitor/FileAlterationObserver.h"

@interface OrgApacheCommonsIoMonitorFileAlterationMonitor () {
 @public
  jlong interval_;
  id<JavaUtilList> observers_;
  JavaLangThread *thread_;
  id<JavaUtilConcurrentThreadFactory> threadFactory_;
  volatile_jboolean running_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoMonitorFileAlterationMonitor, observers_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(OrgApacheCommonsIoMonitorFileAlterationMonitor, thread_, JavaLangThread *)
J2OBJC_FIELD_SETTER(OrgApacheCommonsIoMonitorFileAlterationMonitor, threadFactory_, id<JavaUtilConcurrentThreadFactory>)

@implementation OrgApacheCommonsIoMonitorFileAlterationMonitor

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgApacheCommonsIoMonitorFileAlterationMonitor_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (instancetype)initWithLong:(jlong)interval {
  OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_(self, interval);
  return self;
}

- (instancetype)initWithLong:(jlong)interval
withOrgApacheCommonsIoMonitorFileAlterationObserverArray:(IOSObjectArray *)observers {
  OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_withOrgApacheCommonsIoMonitorFileAlterationObserverArray_(self, interval, observers);
  return self;
}

- (jlong)getInterval {
  return interval_;
}

- (void)setThreadFactoryWithJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory {
  @synchronized(self) {
    JreStrongAssign(&self->threadFactory_, threadFactory);
  }
}

- (void)addObserverWithOrgApacheCommonsIoMonitorFileAlterationObserver:(OrgApacheCommonsIoMonitorFileAlterationObserver *)observer {
  if (observer != nil) {
    [((id<JavaUtilList>) nil_chk(observers_)) addWithId:observer];
  }
}

- (void)removeObserverWithOrgApacheCommonsIoMonitorFileAlterationObserver:(OrgApacheCommonsIoMonitorFileAlterationObserver *)observer {
  if (observer != nil) {
    while ([((id<JavaUtilList>) nil_chk(observers_)) removeWithId:observer]) {
    }
  }
}

- (id<JavaLangIterable>)getObservers {
  return observers_;
}

- (void)start {
  @synchronized(self) {
    if (JreLoadVolatileBoolean(&running_)) {
      @throw create_JavaLangIllegalStateException_initWithNSString_(@"Monitor is already running");
    }
    for (OrgApacheCommonsIoMonitorFileAlterationObserver * __strong observer in nil_chk(observers_)) {
      [((OrgApacheCommonsIoMonitorFileAlterationObserver *) nil_chk(observer)) initialize__];
    }
    JreAssignVolatileBoolean(&running_, true);
    if (threadFactory_ != nil) {
      JreStrongAssign(&thread_, [threadFactory_ newThreadWithJavaLangRunnable:self]);
    }
    else {
      JreStrongAssignAndConsume(&thread_, new_JavaLangThread_initWithJavaLangRunnable_(self));
    }
    [((JavaLangThread *) nil_chk(thread_)) start];
  }
}

- (void)stop {
  @synchronized(self) {
    [self stopWithLong:interval_];
  }
}

- (void)stopWithLong:(jlong)stopInterval {
  @synchronized(self) {
    if (JreLoadVolatileBoolean(&running_) == false) {
      @throw create_JavaLangIllegalStateException_initWithNSString_(@"Monitor is not running");
    }
    JreAssignVolatileBoolean(&running_, false);
    @try {
      [((JavaLangThread *) nil_chk(thread_)) joinWithLong:stopInterval];
    }
    @catch (JavaLangInterruptedException *e) {
      [((JavaLangThread *) nil_chk(JavaLangThread_currentThread())) interrupt];
    }
    for (OrgApacheCommonsIoMonitorFileAlterationObserver * __strong observer in nil_chk(observers_)) {
      [((OrgApacheCommonsIoMonitorFileAlterationObserver *) nil_chk(observer)) destroy];
    }
  }
}

- (void)run {
  while (JreLoadVolatileBoolean(&running_)) {
    for (OrgApacheCommonsIoMonitorFileAlterationObserver * __strong observer in nil_chk(observers_)) {
      [((OrgApacheCommonsIoMonitorFileAlterationObserver *) nil_chk(observer)) checkAndNotify];
    }
    if (!JreLoadVolatileBoolean(&running_)) {
      break;
    }
    @try {
      JavaLangThread_sleepWithLong_(interval_);
    }
    @catch (JavaLangInterruptedException *ignored) {
    }
  }
}

- (void)dealloc {
  RELEASE_(observers_);
  RELEASE_(thread_);
  RELEASE_(threadFactory_);
  [super dealloc];
}

@end

void OrgApacheCommonsIoMonitorFileAlterationMonitor_init(OrgApacheCommonsIoMonitorFileAlterationMonitor *self) {
  OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_(self, 10000);
}

OrgApacheCommonsIoMonitorFileAlterationMonitor *new_OrgApacheCommonsIoMonitorFileAlterationMonitor_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoMonitorFileAlterationMonitor, init)
}

OrgApacheCommonsIoMonitorFileAlterationMonitor *create_OrgApacheCommonsIoMonitorFileAlterationMonitor_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoMonitorFileAlterationMonitor, init)
}

void OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_(OrgApacheCommonsIoMonitorFileAlterationMonitor *self, jlong interval) {
  NSObject_init(self);
  JreStrongAssignAndConsume(&self->observers_, new_JavaUtilConcurrentCopyOnWriteArrayList_init());
  JreStrongAssign(&self->thread_, nil);
  JreAssignVolatileBoolean(&self->running_, false);
  self->interval_ = interval;
}

OrgApacheCommonsIoMonitorFileAlterationMonitor *new_OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_(jlong interval) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoMonitorFileAlterationMonitor, initWithLong_, interval)
}

OrgApacheCommonsIoMonitorFileAlterationMonitor *create_OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_(jlong interval) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoMonitorFileAlterationMonitor, initWithLong_, interval)
}

void OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_withOrgApacheCommonsIoMonitorFileAlterationObserverArray_(OrgApacheCommonsIoMonitorFileAlterationMonitor *self, jlong interval, IOSObjectArray *observers) {
  OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_(self, interval);
  if (observers != nil) {
    {
      IOSObjectArray *a__ = observers;
      OrgApacheCommonsIoMonitorFileAlterationObserver * const *b__ = a__->buffer_;
      OrgApacheCommonsIoMonitorFileAlterationObserver * const *e__ = b__ + a__->size_;
      while (b__ < e__) {
        OrgApacheCommonsIoMonitorFileAlterationObserver *observer = *b__++;
        [self addObserverWithOrgApacheCommonsIoMonitorFileAlterationObserver:observer];
      }
    }
  }
}

OrgApacheCommonsIoMonitorFileAlterationMonitor *new_OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_withOrgApacheCommonsIoMonitorFileAlterationObserverArray_(jlong interval, IOSObjectArray *observers) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoMonitorFileAlterationMonitor, initWithLong_withOrgApacheCommonsIoMonitorFileAlterationObserverArray_, interval, observers)
}

OrgApacheCommonsIoMonitorFileAlterationMonitor *create_OrgApacheCommonsIoMonitorFileAlterationMonitor_initWithLong_withOrgApacheCommonsIoMonitorFileAlterationObserverArray_(jlong interval, IOSObjectArray *observers) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoMonitorFileAlterationMonitor, initWithLong_withOrgApacheCommonsIoMonitorFileAlterationObserverArray_, interval, observers)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoMonitorFileAlterationMonitor)
