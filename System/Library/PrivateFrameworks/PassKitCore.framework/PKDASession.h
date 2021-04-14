/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKSession.h>

@protocol PKSessionDelegate;
@class NSString;

@interface PKDASession : NSObject <PKSession> {

	AI _sessionState;
	unsigned long long _state;
	id<PKSessionDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PKSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id<PKSessionDelegate>)delegate;
-(void)setDelegate:(id<PKSessionDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)endSession;
@end
