//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSAsyncMapper : NSObject
{
}

+ (void)mapDictionary:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 onQueue:(id)arg5;	// IMP=0x000000010040b450
+ (void)mapDictionary:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 onQueue:(id)arg4;	// IMP=0x000000010040b324
+ (void)mapArray:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 onQueue:(id)arg5;	// IMP=0x000000010040ac40
+ (void)mapArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 onQueue:(id)arg4;	// IMP=0x000000010040ab14

@end
