//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

__attribute__((visibility("hidden")))
@interface CBContainer : NSObject
{
    OS_os_log *_logHandle;
    OS_dispatch_queue *_queue;
    OS_dispatch_queue *_notificationQueue;
    CDUnknownBlockType _notificationBlock;
}

//- (void)dealloc;
- (void)unregisterNotificationBlock;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)unscheduleWithDispatchQueue:(id)arg1;
- (void)scheduleWithDispatchQueue:(id)arg1;

@end
