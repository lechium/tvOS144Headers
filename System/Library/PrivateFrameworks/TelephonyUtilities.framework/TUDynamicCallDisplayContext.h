/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TUMutableCallDisplayContext.h>

@protocol TUDynamicCallDisplayContextDelegate, OS_dispatch_queue;
@class NSObject;

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext {

	id<TUDynamicCallDisplayContextDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                             //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic,__weak) id<TUDynamicCallDisplayContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<TUDynamicCallDisplayContextDelegate>)delegate;
-(void)setDelegate:(id<TUDynamicCallDisplayContextDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 ;
-(id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 contactsDataSource:(id)arg4 ;
-(void)_initializeSynchronousStateWithCall:(id)arg1 contactIdentifier:(id)arg2 contactsDataProvider:(id)arg3 ;
-(void)_initializeAsynchronousStateWithCall:(id)arg1 ;
-(id)initWithDisplayContext:(id)arg1 call:(id)arg2 serialQueue:(id)arg3 ;
@end

