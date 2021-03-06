/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>

@protocol NSLocking;
@class NSString;

@interface HAP2Lock : HAP2LoggingObject {

	AQ _lockCount;
	id<NSLocking> _internalLock;

}

@property (nonatomic,readonly) id<NSLocking> internalLock;              //@synthesize internalLock=_internalLock - In the implementation block
@property (nonatomic,readonly) NSString * name; 
+(id)new;
+(id)lockWithName:(id)arg1 ;
-(NSString *)name;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertOwner;
-(id)initWithLock:(id)arg1 name:(id)arg2 ;
-(id<NSLocking>)internalLock;
-(void)_performBlock:(/*^block*/id)arg1 allowRecursive:(BOOL)arg2 ;
@end

