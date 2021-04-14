//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface WLDAppVisibilityManager : NSObject
{
    _Bool _updateRequestedOnNetworkChange;	// 8 = 0x8
    _Bool _updateRequestedOnAccountChange;	// 9 = 0x9
    NSOperationQueue *_queue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000010001681c
- (void).cxx_destruct;	// IMP=0x0000000100016cc8
- (void)updateAppVisibility;	// IMP=0x0000000100016cc4
- (void)_accountStoreDidChangeNotification:(id)arg1;	// IMP=0x0000000100016c24
- (void)_networkReachabilityDidChangeNotification:(id)arg1;	// IMP=0x0000000100016b78
- (void)dealloc;	// IMP=0x0000000100016a34
- (id)init;	// IMP=0x0000000100016888

@end
